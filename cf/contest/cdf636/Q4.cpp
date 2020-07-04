#include<bits/stdc++.h>
using namespace std;
int main(){
  int t, n, k, nb, maxi;
  unsigned int loc, temp;
  vector<unsigned int> a, b, c, d;
  cin >> t;
  while (t--){
    cin>>n>>k;
    nb = 0;
    maxi = 0;

    b = vector<unsigned int> (2 * k + 1, 0);
    c = vector<unsigned int> (2 * k + 1, 0);
    d = vector<unsigned int> (2 * k + 1, 0);
    for (int i = 0; i < n; i++){
      cin>>loc;
      a.push_back(loc);
    }
    for (int i = 0; i < n / 2; i++){
      b[min(a[i], a[n - i - 1]) + 1] += 1;
      c[max(a[i], a[n - i - 1]) + k] += 1;
      d[a[i] + a[n - i - 1]] += 1;
    }
    nb = b[2] + 2 * (n / 2 - b[2]) - d[2];
    maxi = nb;
    for (int i = 3; i <= 2 * k; i++){
      nb -= b[i];
      nb -= d[i];
      nb += d[i - 1];
      nb += c[i - 1];
      maxi = min(maxi, nb);
    }
    cout<<maxi<<endl;
    a.clear();

  }
  return 0;
}
