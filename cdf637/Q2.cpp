#include<bits/stdc++.h>
using namespace std;
int main(){
  int t, n, k, maxi, peak, index;
  vector<int> mount;
  vector<bool> peaks;
  cin >> t;
  while (t--){
    cin>>n>>k;
    mount = vector<int> (n, 0);
    peaks = vector<bool> (n, false);
    peak = 0;
    for (int i = 0; i < n; i++){
      cin>>mount[i];
    }
    for (int i = 1; i < k - 1; i++){
      if ((mount[i] > mount[i - 1]) && (mount[i] > mount[i + 1])) {
        peaks[i] = true;
        peak += 1;
      }
    }
    index = 0;
    maxi = peak;
    //cout<<maxi + 1<<' '<<peak<<' '<<index + 1<<endl;
    for (int i = k  - 1; i < n - 1; i++){
      if ((mount[i] > mount[i - 1]) && (mount[i] > mount[i + 1])) {
        peaks[i] = true;
        peak += 1;
      }
      if (peaks[i - k + 2]) peak -= 1;
      if (peak > maxi) {
        index = i - k + 2;
        maxi = peak;
      }
      //cout<<maxi + 1<<' '<<peak<<' '<<index + 1<<endl;
    }

    cout<<maxi + 1<<' '<<index + 1<<endl;
    //cout<<n * (a - b)<<' '<<n * (a + b)<<' '<<c - d<<' '<<c + d<<endl;
  }
  return 0;
}
