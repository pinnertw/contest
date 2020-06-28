#include<bits/stdc++.h>
using namespace std;
int main(){
  int t, n, m, k;
  cin >> t;
  while (t--){
      cin >> n >> m >> k;
      if (n / k > m) cout<<m<<endl;
      else{
          int res = n / k;
          int others = (m - res) / (k - 1);
          if ((m - res) % (k - 1) != 0){
              others += 1;
          }
          cout<<res - others<<endl;
      }

  }
  return 0;
}
