#include<bits/stdc++.h>
using namespace std;
int main(){
  int t, n, temp, last, end, end2;
  vector<int> vec;
  bool flag;
  cin >> t;
  while (t--){
    cin>>n;
    flag = true;
    vec = vector<int> (n, -1);
    for (int i = 0; i < n; i++){
      cin>>temp;
      vec[temp - 1] = i;
    }
    if (n == 1) {
      cout<<"Yes"<<endl;
      continue;
    }
    last = -1;
    end = n - 1;
    end2 = n - 1;
    for (int i = 0; i < n; i++){
      if ((vec[i] == end) && (vec[i] == last + 1)){
        last = -1;
        end = -1;
      }
      else if ((vec[i] == end2) && (last == -1)) {
        end2 -= 1;
      }
      else if (last == -1) {
        last = vec[i];
        end = end2;
        end2 = last - 1;
      }
      else if (vec[i] == last + 1) last++;
      else {
        cout<<"No"<<endl;
        flag = false;
        break;
      }
    }
    if (flag) cout<<"Yes"<<endl;
  }
  return 0;
}
