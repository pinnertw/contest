#include<bits/stdc++.h>
using namespace std;
#define triche ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    triche;
    int t;
    cin >> t;
    while (t--){
        int n, m;
        cin >> n >> m;
        vector<vector<int> > a(n, vector<int> (m));
        bool ans = true;
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                cin >> a[i][j];
            }
        }
        if (a[0][0] > 2 || a[0][m-1] > 2 || a[n-1][0] > 2 || a[n-1][m-1] > 2) ans = false;
        for (int i = 1; i < n-1; i++){
            ans = ans && (a[i][0] <= 3);
            ans = ans && (a[i][m-1] <= 3);
            if (!ans) break;
        }
        for (int i = 1; i < m - 1; i++){
            ans = ans && (a[0][i] <= 3);
            ans = ans && (a[n-1][i] <= 3);
        }
        for (int i = 1; i < n-1; i++){
            for (int j = 1; j < m-1; j++){
                ans = ans && (a[i][j] <= 4);
            }
        }
        if (ans){
            cout << "YES" << endl;
            for (int i = 0; i < n; i++){
                for (int j = 0; j < m; j++){
                    if (i == 0 && j == 0) cout << 2 << ' ';
                    else if (i == 0 && j == m-1) cout << 2 << ' ';
                    else if (i == n-1 && j == 0) cout << 2 << ' ';
                    else if (i == n-1 && j == m-1) cout << 2 << ' ';
                    else if (i == 0 || j == 0 || i == n-1 || j == m-1) cout << 3 << ' ';
                    else cout << 4 << ' ';
                }
                cout << endl;
            }
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
