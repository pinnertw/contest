#include<bits/stdc++.h>
using namespace std;
int main(){
  int t, n, m, x, y;
  long long price;
  bool last;
  char temp;
  cin >> t;
  while (t--){
      cin >> n >> m >> x >> y;
      price = 0;
      last = false;

      if (y > 2 * x) y = 2 * x;

      for (int i = 0; i < n; i++){
          last = false;
          for (int j = 0; j < m; j++){
              cin>>temp;
              if (temp == '.' && last){
                  last = false;
                  price += y;
              }
              else if (temp == '.'){
                  last = true;
              }
              else if (last){
                  last = false;
                  price += x;
              }
          }
          if (last) price += x;
      }
      cout<<price<<endl;

  }
  return 0;
}
