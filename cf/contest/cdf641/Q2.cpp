#include<bits/stdc++.h>
using namespace std;
int main(){
  int t, n;
  cin >> t;
  while (t--){
      cin >> n;
      vector<int> sizes (n + 1);
      for (int i = 1; i < n + 1; i++){
          cin>>sizes[i];
      }

      vector<int> dp (n + 1, 1);
      int maxi = 1;
      for (int i = n; i > 0; i--){
          int mult = 2;
          int nb = 1;
          while (mult * i <= n){
              if (sizes[i] < sizes[mult * i]){
                  dp[i] = max(dp[i], 1 + dp[mult * i]);
              }
              mult++;
          }
          maxi = max(maxi, dp[i]);
      }
      cout<<maxi<<endl;

  }
  return 0;
}
