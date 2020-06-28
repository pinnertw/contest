#include<bits/stdc++.h>
using namespace std;
int main(){
  int t, m, n, temp;
  cin >> t;
  while (t--){
      cin>>n>>m;
      if (n > m){
          temp = n;
          n = m;
          m = temp;
      }
      if (n == 1) cout<<"YES"<<endl;
      else if ((n == 2) && (m == 2)) cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
  }
  return 0;
}
