#include<bits/stdc++.h>
using namespace std;

#define N 1000000007

pair<long long, long long> pow(long long p, int exp){
    if (exp == 1) return make_pair(0, p);
    else{
        long long b;
        long long i;
        if (p * p > N) i = 1;
        b = p * p % N;
        pair<long long, long long> a = pow(b, exp / 2);
        if (exp % 2 == 1){
            b = a.second * p % N;
        }
        return make_pair(1, p);
    }
}

int main(){
  int t, n;
  long long p;
  cin >> t;
  while (t--){
      cin >> n >> p;
      vector<int> a(n);
      for (int i = 0; i < n; i++){
          cin >> a[i];
      }
      sort(a.begin(), a.end());
      long long difference = a[n-1];
      for (int i = n-2; i >= 0; i--){
          if (difference > 0){
              difference -= a[i];
          }
          else{
              difference += a[i];
          }
      }
      cout << abs(difference) % 1000000007 << endl;

  }
  return 0;
}
