#include<bits/stdc++.h>
using namespace std;
int main(){
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  int count = 0;
  count += min(a + b, d) - c;
  //cout<<count<<' ';
  int i = c - a - 1;
  if (i > 0) {
      count += (i + 1) * (i);
      count += 2 * (min(a + b, d) - c) * i;
  }
  //cout<<count<<' ';
  count += min(b+c, d + 1) - c;
  cout<< count<<endl;

  return 0;
}
