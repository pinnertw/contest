#include<bits/stdc++.h>
using namespace std;
int main(){
  int t, n;
  long long ans;
  cin >> t;
  while (t--){
      cin >> n;
      ans = 1;
      ans *= n;
      ans *= n;
      ans -= 1;
      ans *= n;
      ans /= 3;
      cout<<ans<<endl;


  }
  return 0;
}
