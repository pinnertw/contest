#include<bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b) {
   if (b == 0)
      return a;
   return gcd(b, a % b);
}

long long lcm(long long a, long long b){
    return a * b / gcd(a, b);
}

int main(){
  long long n, mini;
  cin >> n;
  vector<long long> a(n);
  long long lcmm;
  for (long long i = 0; i < n; i++){
      cin>>a[i];
  }
  long long gcd_ = lcm(a[0], a[1]);
  for (long long i = 0; i < n; i++){
      for (long long j = i + 1; j < n; j++){
      lcmm = lcm(a[i], a[j]);
      gcd_ = gcd(lcmm, gcd_);
      }
  }
  cout<<gcd_;


  return 0;
}
