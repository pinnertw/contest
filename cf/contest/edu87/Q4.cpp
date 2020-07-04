#include<bits/stdc++.h>
using namespace std;
int main(){
  int n, q;
  int temp;
  cin >> n>> q;
  priority_queue<int, vector<int>, greater<int> > ks;
  for (int i = 0; i < n; i++){
      cin >> temp;
      ks.push(temp);
  }
  while (q--){
      cin >> temp;
      if (temp < 0){
          temp *= -1;
          while (temp--){


          }
      }
      else{
          ks.push(temp);
      }
      cout<<ks.top()<<endl;
  }

  return 0;
}
