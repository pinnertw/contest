#include<bits/stdc++.h>
using namespace std;

long long smallest(long long n){
    long long prime = 3;
    if (n % 2 == 0) return 2;
    else {
        while ((n % prime != 0) && prime < sqrt(n)) prime += 2;
    }
    if (prime > sqrt(n)) return n;
    return prime;
}

int main(){
  int t;
  long long n;
  int k;
  cin >> t;
  while (t--){
      cin >> n >> k;
      int prime = smallest(n);
      if (prime == 2) {
          n += 2 * k;
      }
      else{
          n += prime;
          n += 2 * (k - 1);
      }
      cout<<n<<endl;
  }
  return 0;
}
