#include<bits/stdc++.h>
using namespace std;

void dfs(vector<int>& color, vector<bool>& seen, vector<vector<int> >& paths, int i, int color_){
    if (seen[i]) return;
    else{
        seen[i] = true;
        color[i] = color_;
        for (auto j: paths[i]){
            dfs(color, seen, paths, j, 1 - color_);
        }
    }
    return;

}

#define triche ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    triche;
    int n;
    cin >> n;
    vector<vector<int> > paths(n + 1);
    for (int i = 1; i < n; i++){
        int a, b;
        cin >> a >> b;
        paths[a].push_back(b);
        paths[b].push_back(a);
    }
    vector<int> color(n + 1, -1);
    vector<bool> seen (n+1, false);
    dfs(color, seen, paths, 1, 0);
    int black = 0;
    int white = 0;
    for (int i = 1; i < n + 1; i++){
        if (color[i] == 0) black++;
        else white++;
    }
    cout << min(white, black) - 1 << endl;


    return 0;
}
