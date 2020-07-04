#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  long long n, ans;
  cin >> t;
  while (t--){
      cin >> n;
      ans = n;
      while (n > 0){
          n /= 2;
          ans += n;
      }
      cout << ans << endl;
  }
  return 0;
}
