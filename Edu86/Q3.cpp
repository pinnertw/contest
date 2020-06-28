#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    if (a % b == 0) return b;
    else return gcd(b, a % b);
}

int main(){
  int t, a, b, q;
  int maxi, gcm;
  long long l, r;
  cin >> t;
  while (t--){
      cin>>a>>b>>q;
      maxi = max(a, b);
      gcm = a * b / gcd(a, b);
      while (q--){
          cin>>l>>r;
          int left = l % gcm;
          int right = r % gcm;
          if (a == b) cout<<0<<' ';
          else if (r == l) cout<<1 - (((l % a) % b )== ((l % b) % a))<<' ';
          else cout<<r - l + 1 - (max(maxi - left, 0) + ((r / gcm - l / gcm - 1)) * maxi + min(right + 1, maxi))<<' ';
          

      }
      cout<<endl;
  }
  return 0;
}
