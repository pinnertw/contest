#include<bits/stdc++.h>
using namespace std;

#define vvi vector<vector<int>>
#define vi vector<int>

int main(){
  int t, n, m, num;
  string delimiter = " ";
  size_t pos = 0;
  vvi path, inv_path;
  vi count;
  stack<int> ans;
  cin >> t;
  while (t--){
    cin>>n;
    path = vvi (n - 1);
    inv_path = vvi (n + 1);
    count = vi (n + 1);
    for (int i = 0; i < n - 1; i++){
      cin>>m;
      for (int j = 0; j < m; j++){
        cin>>num;
        path[i].push_back(num);
        inv_path[num].push_back(i);
        count[num]++;
      }
    }
    int cand = -1;
    bool two_side = false;
    for (int i = 1; i < n + 1; i++){
      if ((inv_path[i].size() == 1) && !cand) cand = i;
      else if ((inv_path[i].size() == 1) && cand) two_side = true;
    }
    //for (vector<int> i: inv_path) cout<<i.size()<<' ';
    while (ans.size() < n - 2){
      for (int i = 1; i < n + 1; i++){
        if ((inv_path[i].size()== 1) && (!two_side || (cand != i))){
          ans.push(i);
          for (int j: (path[inv_path[i][0]])){
            inv_path[j].erase(find(inv_path[j].begin(), inv_path[j].end(), inv_path[i][0]));
          }
          inv_path[i].pop_back();
          break;
        }
      }
    }
    vi ans_cand;
    for (int i = 1; i < n + 1; i++){
      //cout<<inv_path[i].size()<<' ';
      if (inv_path[i].size() == 1){
        ans_cand.push_back(i);
        //ans.push(i);
      }
    }
    if (count[ans_cand[0]] > count[ans_cand[1]]) {
      ans.push(ans_cand[0]);
      ans.push(ans_cand[1]);
    }
    else{
      ans.push(ans_cand[1]);
      ans.push(ans_cand[0]);
    }

    while (ans.size() > 0){
      cout<<ans.top()<<' ';
      ans.pop();
    }
    cout<<endl;
  }
  return 0;
}
