#include<bits/stdc++.h>
using namespace std;
int main(){
  int t, n, k;
  cin >> t;
  while (t--){
    cin>>n;
    k = 3;
    while (n % k != 0){
      k *= 2;
      k++;
    }
    cout<< n / k<<endl;

  }
}
