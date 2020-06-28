#include<bits/stdc++.h>
using namespace std;
 
#define vi vector<int>
 
int guess(vector<vector<int> >&S, vector<int>& indices)
{
    vector<int> indicess;
    for (auto i: indices){
        for (auto j: S[i]){
            indicess.push_back(j);
        }
    }
    string s = "? ";
    s += to_string(indicess.size());
    s += " ";
    for (auto i: indicess){
        s+= to_string(i);
        s+= " ";
    }
    cout<<s<<endl;
    cout.flush();
    int temp;
    cin >> temp;
    return temp;
}
 
pair<vi, vi> divise(vi& indices){
    int n = indices.size();
    vi p1;
    vi p2;
    for (int i = 0; i < n; i++){
        if (i < n / 2) p1.push_back(indices[i]);
        else p2.push_back(indices[i]);
    }
    return make_pair(p1, p2);
}
 
int main(){
  int t;
  cin >> t;
  while (t--){
      int n, k;
      cin >> n >> k;
      vector<vector<int> >S(k);
      for (int i = 0; i < k; i++){
          int c;
          cin >> c;
          S[i] = vector<int> (c);
          for (int j = 0; j < c; j++){
              cin >> S[i][j];
          }
      }
      vi indice_init(k);
      for (int i = 0; i < k; i++){
          indice_init[i] = i;
      }
      int maxi = guess(S, indice_init);
      pair<vi, vi> pairs = divise(indice_init);
      vi indices = pairs.first;
      vi rest = pairs.second;
      while (true){
          if (indices.size() == 0){
              indices = rest;
              break;
          }
          int temp = guess(S, indices);
          if (temp == maxi){
              pairs = divise(indices);
          }
          else{
              pairs = divise(rest);
          }
          if (indices.size() == 1) {
              if (temp != maxi) indices = rest;
              break;
          }
          indices = pairs.first;
          rest = pairs.second;
      }
      int indice = indices[0];
      vi gg;
      for (int i = 0; i < k; i++){
          if (i != indice) gg.push_back(i);
      }
      int temp = guess(S, gg);
 
    string s = "! ";
    for (int i = 0; i < k; i++){
        if (i == indice) s += to_string(temp);
        else s += to_string(maxi);
        s+= " ";
    }
    cout<<s<<endl;
    cout.flush();
    cin >> s;
  }
  return 0;
}
