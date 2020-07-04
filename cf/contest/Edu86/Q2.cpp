#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  string s, ans;
  int index, k;
  cin >> t;
  while (t--){
      cin>>s;
      index = -1;
      k = 1;
      for (int i = 0; i < s.length(); i++){
          if (ans.length() > i){
              for (int j = index + 1; j < ans.length(); j++){
                  if (ans[j] == s[i]){
                      index = j;
                      break;
                  }
              }
          }
          else if (){
              
          }


      }


      cout<<ans;
  }
  return 0;
}
