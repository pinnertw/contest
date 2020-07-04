#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  long long a, b, c, d;
  cin >> t;
  while (t--){
      cin >> a >> b >> c >> d;
      if (a <= b) cout<<b<<endl;
      else if (c <= d) cout<<-1<<endl;
      else{
          long long time = b;
          time += c * ((a - b) / (c - d));
          if ((a - b) % (c - d) != 0){
          time += c;
          }
          cout<<time<<endl;
      }
  }
  return 0;
}
