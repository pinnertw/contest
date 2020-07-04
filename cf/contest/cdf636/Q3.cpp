#include<bits/stdc++.h>
using namespace std;
int main(){
  long long t, n, last, a;
  long long sum;
  cin >> t;
  while (t--){
    cin>>n;
    cin>>last;
    sum = 0;
    for (int i = 1; i < n; i++){
      cin>>a;
      if (last * a > 0){
        if (last < a){
          last = a;
        }
      }
      else{
        sum += last;
        last = a;
      }
    }
    sum += last;
    cout<<sum<<endl;
  }
  return 0;
}
