#include<bits/stdc++.h>
using namespace std;

#define vvi vector<vector<long long> >
#define vi vector<long long >

int main(){
  int t, n, m;
  cin >> t;
  while (t--){
      cin>>n>>m;
      vvi state (n, vi(m));
      vvi dp (n, vi(m, LONG_MAX));
      vector<vector<int> > nums(n, vector<int> (m));
      for (int i = 0; i < n; i++){
          for (int j = 0; j < m; j++){
              cin>>state[i][j];
          }
      }

      dp[0][0] = 0;
      nums[0][0] = 0;
      for (int i = 0; i < n; i++){
          for (int j = 0; j < m; j++){
              if (i != 0 && j != 0){
                  dp[i][j] = min(dp[i-1][j], dp[i][j]);
                  dp[i][j] = min(dp[i][j-1], dp[i][j]);
              }
              else if (i != 0){
                  dp[i][j] = min(dp[i-1][j], dp[i][j]);
              }
              else if (j != 0){
                  dp[i][j] = min(dp[i][j-1], dp[i][j]);
              }
          }
      }

      cout<<dp[n-1][m-1]<<endl;


  }
  return 0;
}
