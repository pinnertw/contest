#include<bits/stdc++.h>
using namespace std;
int main(){
  int t, n, a, b, c, d;
  cin >> t;
  while (t--){
    cin>>n>>a>>b>>c>>d;
    if (((n * (a - b)) >= (c - d)) && ((n * (a - b)) <= (c + d))) cout<<"Yes"<<endl;
    else if (((n * (a + b)) >= (c - d)) && ((n * (a + b)) <= (c + d))) cout<<"Yes"<<endl;
    else if (((n * (a - b)) <= (c - d)) && ((n * (a + b)) >= (c + d))) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    //cout<<n * (a - b)<<' '<<n * (a + b)<<' '<<c - d<<' '<<c + d<<endl;
  }
  return 0;
}
