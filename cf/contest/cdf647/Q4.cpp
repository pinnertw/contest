#include<bits/stdc++.h>
using namespace std;

bool comp(pair<int, int> a, pair<int, int> b){
    return a.first < b.first;
}

int main(){
  int m, n;
  int a, b;
  cin >> n >> m;
  vector< vector<int> > edges (n + 1, vector<int> (n + 1));
  for (int i = 0; i < m; i ++){
      cin >> a >> b;
      edges[a].push_back(b);
      edges[b].push_back(a);
  }
  vector<pair<int, int> > desire (n + 1);
  vector<int> desire2 (n + 1);
  vector<bool> seen (n + 1, false);
  for (int i = 1; i <= n ; i++){
      cin >> a;
      desire[i] = make_pair(a, i);
      desire2[i] = a;
  }
  sort(desire.begin() + 1, desire.end(), comp);
  bool ans = true;
  vector<int> order;
  for (int i = 1; i <= n; i++){
      int k = desire[i].second;
      int mm = 0;
      vector<bool> mmm (n + 1, false);
      for (int j: edges[k]){
          if (seen[j]) mmm[desire2[j]] = true;
      }
      for (int j = 1; j <= n; j++){
          if (!mmm[j]) {
              mm = j;
              break;
          }
      }
      //cout << mm << ' ' << k << endl;
      if (mm != desire[i].first) {
          ans = false;
          break;
      }
      seen[k] = true;
      order.push_back(k);
  }
  if (ans){
      for (auto k: order){
          cout << k << ' ';
      }
  }
  else{
      cout << -1 << endl;
  }

  //for (int i = 1; i < n + 1; i++) cout << desire[i].first << ' ' << desire[i].second << endl;
  return 0;
}
