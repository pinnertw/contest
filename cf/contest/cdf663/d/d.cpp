#include<bits/stdc++.h>
using namespace std;
#define triche ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define vvi vector<vector<int>>
#define vvl vector<vector<long long>>
#define vi vector<int>
#define vl vector<long long>

vector<vector<bool>> ok2 (){
    vector<vector<bool> > ok (4, vector<bool> (4, false));
    ok[0][1] = true;
    ok[0][2] = true;
    ok[1][0] = true;
    ok[1][3] = true;
    ok[2][0] = true;
    ok[2][3] = true;
    ok[3][1] = true;
    ok[3][2] = true;
    return ok;
}
vector<vector<bool>> ok3 (){
    vector<vector<bool> > ok (8, vector<bool> (8, false));
    ok[2][0] = true;
    ok[2][7] = true;
    ok[5][0] = true;
    ok[5][7] = true;
    ok[3][1] = true;
    ok[4][1] = true;
    ok[3][6] = true;
    ok[4][6] = true;
    ok[0][2] = true;
    ok[7][2] = true;
    ok[7][5] = true;
    ok[0][5] = true;
    ok[1][3] = true;
    ok[1][4] = true;
    ok[6][3] = true;
    ok[6][4] = true;
    return ok;
}

int main(){
    triche;
    int n, m;
    cin >> n >> m;
    if (n >= 4 && m >= 4) {
        cout << -1 << endl;
        return 0;
    }
    if (n == 1 || m == 1){
        cout << 0 << endl;
        return 0;
    }
    if (m < n) swap(n, m);
    vi ns (m, 0);
    for (int i = 0; i < n; i++){
        int add = 1 << i;
        for (int j = 0; j < m; j++){
            char temp;
            cin >> temp;
            if (temp == '1') ns[j] += add;
        }
    }
    vector<vector<bool> > ok;
    int a;
    if (n == 2) {
        ok = ok2();
        a = 4;
    }
    else {
        ok = ok3();
        a = 8;
    }
    vvi dp (m+1, vi (a, INT_MAX));
    for (int i = 0; i < a; i++) dp[0][i] = __builtin_popcount(i^ns[0]);
    for (int i = 1; i <= m; i++){
        for (int msk = 0; msk < a; msk++){
            for (int prevmsk = 0; prevmsk < a; prevmsk++){
                if (!ok[prevmsk][msk]){
                    continue;
                }
                dp[i][msk] = min(dp[i][msk], dp[i-1][prevmsk] + __builtin_popcount(msk^ns[i]));
            }
        }
    }
    /*
    for (int i = 0; i <= m; i++){
        for (int j = 0; j < 8; j++){
            cout << dp[i][j] << ' ';
        }
        cout << endl;
    }
    */
    int ans = INT_MAX;
    for (int i = 0; i < a; i++) ans = min(ans, dp[m][i]);
    cout << ans;

    return 0;
}
