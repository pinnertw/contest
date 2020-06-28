#include<bits/stdc++.h>
using namespace std;
int main(){
  int t, n;
  cin >> t;
  while (t--){
    cin >> n;
    if (n % 4 == 2) cout<<"NO"<<endl;
    else {
      cout<<"YES"<<endl;
      for (int i = 0; i < n / 2; i++){
        cout<<i * 2 + 2<<' ';
      }
      for (int i = 0; i < n / 2 - 1; i++){
        cout<<i * 2 + 1<<' ';
      }
      cout<<n / 2 - 1 + n<<endl;
    }

  }
  return 0;
}
