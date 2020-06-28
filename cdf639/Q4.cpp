#include<bits/stdc++.h>
using namespace std;
int main(){
  int t, m, n;
  char x;
  cin >> t;
  while (t--){
      cin>>m>>n;
      vector<vector<bool> > board (m, vector<bool> (n));
      for (int i = 0; i < m; i++){
          for (int j = 0; j < n; j++){
              cin>>x;
              if (x == '#') board[i][j] = true;
              else board[i][j] = false;
          }
      }


  }
  return 0;
}
