#include<bits/stdc++.h>
using namespace std;
int main(){
  int t, n;
  long long ans, bits;
  cin >> t;
  while (t--){
      ans = 0;
      bits = 2;
      cin>>n;
      n = n / 2;
      while (n--) {
          ans += bits;
          bits *= 2;
      }
      cout<<ans<<endl;
  }
  return 0;
}
