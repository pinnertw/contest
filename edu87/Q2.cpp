#include<bits/stdc++.h>
using namespace std;
int main(){
  int t, l1, l2, l3;
  string s;
  cin >> t;
  while (t--){
      cin>>s;
      int min_l = INT_MAX;
      l1 = -1; l2=-1; l3=-1;
      for (int i = 0; i < s.size(); i++){
          //cout<<s[i]<<' '<<l1<<' '<<l2<<' '<<l3<<endl;
          if (s[i] == '1'){
              l1 = i;
              if (l2 != -1 && l3 != -1){
                  min_l = min(min_l, i - min(l2, l3) + 1);
              }
          }
          else if (s[i] == '2'){
              l2 = i;
              if (l1 != -1 && l3 != -1){
                  min_l = min(min_l, i - min(l1, l3) + 1);
              }
          }
          else {
              l3 = i;
              if (l1 != -1 && l2 != -1){
                  min_l = min(min_l, i - min(l1, l2) + 1);
              }
          }
      }
      if (l1 == -1 || l2 == -1 || l3 == -1){
          cout<<0<<endl;
      }
      else {
          cout<<min_l<<endl;
      }
  }
  return 0;
}
