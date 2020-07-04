#include<bits/stdc++.h>
using namespace std;
int main(){
  int t, n, temp;
  vector<bool> places;
  bool flag;
  cin >> t;
  while (t--){
      cin>>n;
      places = vector<bool> (n, false);
      flag = true;
      for (int i = 0; i < n; i++){
          cin>>temp;
          temp += i;
          temp = temp % n;
          if (temp < 0) temp += n;
          if (places[temp]) flag = false;
          else places[temp] = true;
      }
      if (flag) cout<<"YES"<<endl;
      else cout<<"NO"<<endl;

  }
  return 0;
}
