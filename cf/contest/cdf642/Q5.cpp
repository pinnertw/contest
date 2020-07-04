#include<bits/stdc++.h>
using namespace std;

int min_cumsum(vector<int> loc){
    int min_ending_here = 0;
    int min_so_far = 0;
    for (int i = 0; i < loc.size(); i++){
        min_ending_here += loc[i];
        if (min_ending_here > 0) min_ending_here = 0;
        if (min_so_far > min_ending_here) min_so_far = min_ending_here;
    }
    return min_so_far;
}

int main(){
  int t, n, k;
  char temp;
  cin >> t;
  while (t--){
      cin>>n>>k;
      vector<int> state (n, 0);
      vector<pair<int, int> > dp (n);
      int close_all = 0;
      for (int i = 0; i < n; i++){
          cin>>temp;
          if (temp == '1'){
              state[i] = 1;
              close_all++;
          }
          else state[i] = -1;
      }

      int minn = INT_MAX;

      for (int i = 0; i < k; i++){
          vector<int> loc;
          int sign = -state[i];
          int count = sign;
          int j = i;
          j += k;
          while (j < n){
              if (state[j] * sign < 0){
                  count += sign;
              }
              else{
                  sign *= -1;
                  loc.push_back(count);
                  count = sign;
              }
              j += k;
          }
          loc.push_back(count);
          /*for (auto i: loc){
              cout<<i<<' ';
          }
          cout<<endl;*/
          minn = min(minn, min_cumsum(loc));
      }
      cout<<close_all + minn<<endl;
      //cout<<endl;
  }
  return 0;
}
