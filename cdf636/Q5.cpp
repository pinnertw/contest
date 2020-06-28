#include<bits/stdc++.h>
using namespace std;


class compare{
public:
  bool operator()(pair<int, long long> i, pair<int, long long> j){
    return i.second < j.second;
  }
};

int main(){
  int t, n, m, a, b, c, p1, p2;
  long long somme;
  pair<int, long long> loc;
  vector<int> prices;
  priority_queue<pair<int, long long>, vector<pair<int, long long>>, compare> attente;
  vector<vector<pair<int, int>>> path;

  cin >> t;
  while (t--){
    cin>>n>>m>>a>>b>>c;
    a--;
    b--;
    c--;
    prices = vector<int> (m);
    path = vector<vector<pair<int, int>>> (n, vector<pair<int, int>>(0));
    somme = 0;
    for (int i = 0; i < m; i++){
      cin>>prices[i];
    }
    for (int i = 0; i < m; i++){
      cin>>p1>>p2;
      p1--;
      p2--;
      //cout<<p1<<' '<<p2<<endl;
      path[p1].push_back(pair<int, int> (p2, prices[i]));
      path[p2].push_back(pair<int, int> (p1, prices[i]));
    }
    for (auto i: path){
      for (auto j: i){
        cout<<j.first<<' '<<j.second<<' '<<' ';
      }
      cout<<endl;
    }
    cout<<"\n\n";
    prices = vector<int> (n, 0);
    prices[b] = 1;
    attente.push(pair<int, long long> (b, (long long) 0));
    while (true){
      if (attente.top().first == c){
        somme += attente.top().second;
        break;
      }
      else{
        loc = attente.top();
        cout<<loc.first<<' '<<loc.second<<endl;
        prices[loc.first] = 1;
        attente.pop();
        for (pair<int, int> i: path[loc.first]){
          if (prices[i.first] == 1) continue;
          attente.push(pair<int, long long> (i.first, loc.second + i.second));
        }
      }
    }
    while (!attente.empty()) attente.pop();
    cout<<somme<<endl;
  }
  return 0;
}
