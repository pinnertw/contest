#include<bits/stdc++.h>
using namespace std;
int main(){
  int t, n, k;
  cin >> t;
  while (t--){
      cin>>n>>k;
      vector<int> a (n);
      vector<int> b (n);
      for (int i = 0; i < n; i++){
          cin>>a[i];
      }
      for (int i = 0; i < n; i++){
          cin>>b[i];
      }
      sort(a.begin(), a.end());
      sort(b.begin(), b.end());
      for (int l = 0; l < k; l++){
          if (a[l] > b[n - l - 1]) break;
          a[l] = b[n-l-1];
      }
      int sum = 0;
      for (int i = 0; i < n; i++){
          sum += a[i];
      }
      cout<<sum<<endl;


  }
  return 0;
}
