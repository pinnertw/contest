#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  long long x, y, temp;
  long long a, b;
  cin >> t;
  while (t--){
      cin>>x>>y>>a>>b;
      if (x > y){
          temp = x;
          x = y;
          y = temp;
      }
      cout<<min(x * b + (y - x) * a, (x + y) * a)<<endl;


  }
  return 0;
}

