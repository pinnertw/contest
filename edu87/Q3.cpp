#include<bits/stdc++.h>
using namespace std;
#define M_PI 3.141592653589
int main(){
  int t, n;
  cin >> t;
  while (t--){
      cin >> n;
      int k = n / 2;
      double a = 0.5 / sin(M_PI / 2 / n);
      cout.precision(16);
      cout<< sqrt(2) * a * (sin(k * M_PI / 2 / n) + sin((k + 1) * M_PI / 2 / n))<<endl;
  }
  return 0;
}
