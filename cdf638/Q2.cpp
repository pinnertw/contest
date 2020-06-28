#include<bits/stdc++.h>
using namespace std;
int main(){
  int t, n, k;
  cin >> t;
  while (t--){
      cin>>n>>k;
      vector<int> a = vector<int> (n, -1);
      vector<bool> nums = vector<bool>(n + 1, false);
      for (int i = 0; i < n; i++){
          cin>>a[i];
          nums[a[i]] = true;
      }
      int num = 0;
      vector<int> uses;
      for (int i = 1; i < n + 1; i++){
          if (nums[i]) {
              num++;
              uses.push_back(i);
          }
      }
      if (num > k) cout<<-1<<endl;
      else{
          cout<<n * k<<endl;
          while (uses.size() < k) uses.push_back(uses[0]);
          for (int i = 1; i < n + 1; i++){
              for (int j : uses){
                  cout<<j<<' ';
              }
          }
          cout<<endl;
      }
  }
  return 0;
}
