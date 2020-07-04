#include<bits/stdc++.h>
using namespace std;
int main(){
  int t, n, x;
  int temp1, temp2;
  cin >> t;
  while (t--){
      cin >> n >> x;
      x--;
      vector<int> degs (n);
      for (int i = 0; i < n-1; i++){
          cin >> temp1 >> temp2;
          temp1--;
          temp2--;
          degs[temp1]++;
          degs[temp2]++;
      }
      if (degs[x] < 2){
          cout<<"Ayush"<<endl;
      }
      else{
          if (n % 2 == 0){
              cout<<"Ayush"<<endl;
          }
          else{
              cout<<"Ashish"<<endl;
          }
      }
  }
  return 0;
}
