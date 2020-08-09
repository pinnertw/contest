#include<bits/stdc++.h>
using namespace std;
#define triche ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define vvi vector<vector<int>>
#define vvl vector<vector<long long>>
#define vi vector<int>
#define vl vector<long long>
#define vb vector<bool>
#define vvb vector<vector<bool>>

void spread (int i, int j, vvb& ans, vb& in, vb& out, vb& seen, vi path){
    int n = ans.size();
    if ((i < 0) || (i >= n) || (i != j && !in[i]) || seen[i]){
        return;
    }
//cout << i << ' ' << j << ' ' << out[i] << endl;
    path.push_back(j);
    for (auto k: path){
        ans[k][i] = true;
    }
    if (out[i]){
        seen[i] = true;
        spread(i - 1, i, ans, in, out, seen, path);
        spread(i + 1, i, ans, in, out, seen, path);
    }
    return;
}

int main(){
    triche;
    int T;
    int t;
    cin >> t;
    T = t;
    while (t--){
        int n;
        cin >> n;
        vector<bool> in(n);
        vector<bool> out(n);
        char temp;
        for (int i = 0; i < n; i++){
            cin >> temp;
            if (temp == 'Y'){
                in[i] = true;
            }
        }
        for (int i = 0; i < n; i++){
            cin >> temp;
            if (temp == 'Y'){
                out[i] = true;
            }
        }


        vvb ans (n, vb (n));

        for (int i = 0; i < n; i++){
            vb seen (n);
            vi path = {i};
            spread(i, i, ans, in, out, seen, path);
            ans[i][i] = true;
        }

        cout << "Case #" << T - t << ":" << endl;
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                if (ans[i][j]){
                    cout << "Y";
                }
                else{
                    cout << "N";
                }
            }
            cout << endl;
        }
    }
    return 0;
}
