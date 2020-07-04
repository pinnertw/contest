#include<bits/stdc++.h>
using namespace std;
int main(){
  int t, N;
  vector<int> e;
  cin >> t;
  while (t--){
      cin>>N;
      e = vector<int> (N);
      for (int i = 0; i < N; i++){
          cin>>e[i];
      }
      sort(e.begin(), e.end());
      int count = 0;
      int end = -1;
      int i = 0;

      while (i < N){
          //cout<<i<<' '<<N<<endl;
          if (i - end >= e[i]){
              end = i;
              i++;
              count++;
          }
          else{
              i++;
          }
      }
      cout<<count<<endl;

  }
  return 0;
}
