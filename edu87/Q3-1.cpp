#include<bits/stdc++.h>
using namespace std;
#define M_PI 3.141592653589
int main(){
  int t, n;
  cin >> t;
  while (t--){
      cin >> n;
      cout.precision(16);
      cout<<1. / tan(M_PI / 2 / n)<<endl;

  }
  return 0;
}
