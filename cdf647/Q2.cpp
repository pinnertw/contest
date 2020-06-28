#include<bits/stdc++.h>
using namespace std;
int main(){
  int t, n, test;
  cin >> t;
  while (t--){
      cin >> n;
      vector<int> a(n);
      test = 0;
      for (int i = 0; i < n ; i++){
          cin >> a[i];
          test ^= a[i];
      }
      set<int> b (a.begin(), a.end());
      int ans = 0;
      if (n % 2 == 1) ans = -1;
      else{
          for (int i = 0; i < n; i++){
              if (b.find(test ^ a[i]) == b.end()){
                  ans = -1;
                  break;
              }
          }
          if (ans != -1 && test != 0) ans = test;
          else if (ans != -1 && test == 0) ans = 1;
      }

      //cout << test << ' ' << n << ' ';
      cout << ans << endl;
  }
  return 0;
}

