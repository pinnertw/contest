#include<bits/stdc++.h>
using namespace std;
int main(){
  int t, n;
  vector<int> a;
  cin >> t;
  while (t--){
      cin>>n;
      a = vector<int> (n);
      for (int i = 0 ; i < n; i++){
          cin >> a[i];
      }
      sort(a.begin(), a.end());
      int ans = -1;
      for (int i = n - 1; i >= 0; i--){
          if (a[i] <= i + 1) {
              ans = i;
              break;
          }
      }
      cout<<ans + 2<<endl;;


  }
  return 0;
}
