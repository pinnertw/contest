#include<bits/stdc++.h>
using namespace std;

int find_ (vector<int>& parents, int i){
    if (parents[i] == i) return i;
    else{
        parents[i] = find_(parents, parents[i]);
        return parents[i];
    }
}

void union_ (vector<int>& parents, vector<int>& ranks, int i, int j){
    int I = find_(parents, i);
    int J = find_(parents, j);
    if (I == J) return;
    if (ranks[I] < ranks[J]){
        parents[I] = J;
    }
    else if (ranks[I] > ranks[J]){
        parents[J] = I;
    }
    else{
        parents[J] = I;
        ranks[I]++;
    }
    return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m, k, t1, t2;
    cin >> n >> m >> k;
    vector<vector<int> > paths (n + 1, vector<int>(0));
    vector<int> ranks(n + 1, 0);
    vector<int> parents(n + 1, -1);
    for (int i = 1; i <= n; i++){
        parents[i] = i;
    }
    for (int i = 0; i < m; i++){
        cin >> t1 >> t2;
        paths[t1].push_back(t2);
        paths[t2].push_back(t1);
        union_(parents, ranks, t1, t2);
    }
    set<int> ppp;
    for (int i = 1; i < n + 1; i++){
        ppp.insert(find_(parents, i));
    }
    if (ppp.size() >= (k + 1) / 2){
        cout << 1 << endl;
        int j = (k + 1) / 2;
        for (auto i: ppp){
            if (j--) cout << i << ' ';
        }
    }
    else{}
    return 0;
}
