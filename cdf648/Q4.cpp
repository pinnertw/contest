#include<bits/stdc++.h>
using namespace std;

bool in(int i, int j, int n, int m){
    return (0 <= i && i < n && 0 <= j && j < m);
}

vector<int> dirx = {1, -1, 0, 0};
vector<int> diry = {0, 0, 1, -1};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t, n, m, a, b;
    char temp;
    cin >> t;
    while (t--){
        cin >> n >> m;
        vector< vector<int> > maze (n, vector<int> (m));
        int good = 0;
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                cin >> temp;
                if (temp == '.') maze[i][j] = 0;
                else if (temp == 'G') {
                    maze[i][j] = 1;
                    good++;
                }
                else if (temp == 'B') maze[i][j] = 2;
                else maze[i][j] = 3;
            }
        }

        bool ans = true;
        if (!good) ans = true;
        else{
            for (int i = 0; i < n; i++){
                for (int j = 0; j < m; j++){
                    // walled badguy
                    if (maze[i][j] == 2){
                        for (int k = 0; k < 4; k++){
                            a = i + dirx[k];
                            b = j + diry[k];
                            if (in(a, b, n, m)){
                                if (maze[a][b] == 1) {
                                    ans = false; 
                                    break;
                                }
                                else if (maze[a][b] == 0) maze[a][b] = 3;
                            }
                        }
                    }
                }
                if (!ans) break;
            }
            if (maze[n - 1][m - 1] == 3 && good) ans = false;

            // dfs
            vector<vector<bool> > seen (n, vector<bool> (m, false));
            queue<pair<int, int> > dfs;
            dfs.push(make_pair(n - 1, m - 1));
            int count = 0;
            while (!dfs.empty() && ans){
                pair<int, int> elem = dfs.front();
                dfs.pop();
                int i = elem.first, j = elem.second;

                for (int k = 0; k < 4; k++){
                    a = i + dirx[k];
                    b = j + diry[k];
                    if (in(a, b, n, m)){
                        if (!seen[a][b] && (maze[a][b] == 1)){
                            count++;
                            seen[a][b] = true;
                            dfs.push(make_pair(a, b));
                        }
                        if (!seen[a][b] && (maze[a][b] == 0)){
                            seen[a][b] = true;
                            dfs.push(make_pair(a, b));
                        }
                    }
                }
            }
            if (count != good) ans = false;
        }


        if (ans) cout << "Yes" << endl;
        else cout << "No" << endl;
 
    }
    return 0;
}
