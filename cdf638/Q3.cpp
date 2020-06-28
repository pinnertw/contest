#include<bits/stdc++.h>
using namespace std;
int main(){
  int t, n, weight, group;
  vector<int> ans;
  cin >> t;
  while (t--){
      cin>>n;
      weight = 0;
      group = 1;
      ans = vector<int> ();
      n--;
      while (n > weight){
          if (weight + 4 * group < n){
              ans.push_back(group);
              group *= 2;
              weight += group;
          }
          else break;
      }
      //cout<<n<<' '<<weight<<' '<<group<<endl;
      if (n == 1){
          ans.push_back(0);
      }
      else if (n == 2){
          ans.push_back(1);
      }
      else if (n == 3){
          ans.push_back(0);
          ans.push_back(1);
      }
      else if (n - weight == group){
          ans.push_back(group);
      }
      else if (((n - weight) % 2) == 0){
          ans.push_back((n - weight)/ 2 - group);
          ans.push_back(0);
      }
      else{
          ans.push_back((n - weight) / 2 - group);
          ans.push_back(1);
      }

      cout<<ans.size()<<endl;
      for (int i: ans){
          cout<<i<<' ';
      }
      cout<<endl;


  }
  return 0;
}
