#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  long long a, b, temp;
  int ans;
  cin >> t;
  while (t--){
      cin >> a >> b;
      if (a > b){
          temp = a;
          a = b;
          b = temp;
      }
      if (b % a != 0) ans = -1;
      else{
          ans = 0;
          long long c = b / a;
          while (c != 1 && c != 2 && c != 4){
              if (c % 8 != 0) {
                  c = 1;
                  ans = -1;
                  break;
              }
              c /= 8;
              ans += 1;
          }
          if (c != 1) ans += 1;
      }
      cout<<ans<<endl;


  }
  return 0;
}
