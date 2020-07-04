#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  string s;
  cin >> t;
  while (t--){
      cin >> s;
      vector<int> a (s.size());
      vector<int> b (s.size());
      int sum0 = 0, sum1 = 0;
      for (int i = 0; i < s.size(); i++){
          if (s[i] == '0'){sum0++;}
          else sum1++;
          a[i] = sum0;
          b[i] = sum1;
      }
      int min_ = min(sum0, sum1);
      for (int i = 0; i < s.size(); i++){
          min_ = min(min_, a[i] + sum1 - b[i]);
          min_ = min(min_, b[i] + sum0 - a[i]);
      }
      cout<<min_<<endl;

  }
  return 0;
}
