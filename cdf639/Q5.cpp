#include<bits/stdc++.h>
using namespace std;
int main(){
  int t, n, m, j, k;
  cin>>n>>m;
  vector<int> node (n + 1, 0);
  bool flag = true;
  for (int i = 0; i < m; i++){
      cin>>j>>k;
      if ((node[j] == 1) && (node[k] == -1)) flag = false;
      node[j] = -1;
      node[k] = 1;
  }
  if (flag){
      string res = "";
      int size = 0;
      for (int i = 1; i < n + 1; i++){
          if (node[i]!= 1) {
              size++;
              res += "A";
          }
          else res += "E";
      }
      cout<<size<<endl;
      cout<<res<<endl;
  }
  else cout<<-1<<endl;


  return 0;
}
