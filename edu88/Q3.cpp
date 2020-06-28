#include<bits/stdc++.h>
using namespace std;

#define pi pair<int, int>

pi bezout(int a, int b){
    if (a < b) return bezout(b, a);
    if (a % b == 1) return make_pair(1, -a / b);
    else{
        pi aibi = bezout(b, a % b);
        aibi = make_pair(aibi.second, aibi.first - a / b * aibi.second);
        //cout<<a<<' '<<b<<' '<<aibi.first<<' '<<aibi.second<<endl;
        return aibi;
    }
}

int gcd(int a, int b){
    if (a < b) return gcd(b, a);
    else if (a % b == 0) return b;
    return gcd(b, a % b);
}

int main(){
  int T, t, h, c;
  cin >> T;
  while (T--){
      cin >> h >> c >> t;
      h = h - t;
      c = t - c;
      if (h == 0 || c == 0){cout<<1<<endl;}
      else{
      int gcd_ = gcd(h, c);
      h /= gcd_;
      c /= gcd_;
      if (h == c) cout<<2<<endl;
      else{
          pi bez = bezout(h, c);
          int res = abs(bez.first) + abs(bez.second);
          cout << res<<endl;
      }
      }
  }
  return 0;
}
