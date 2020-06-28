#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t, n, m, claim;
    cin >> t;
    while (t--){
        cin >> n >> m;
        vector<bool> rows(n, false);
        vector<bool> columns(m, false);
        int row = n, column = m;
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                cin >> claim;
                if (claim){
                    if (!rows[i]){
                        rows[i] = true;
                        row--;
                    }
                    if (!columns[j]){
                        columns[j] = true;
                        column--;
                    }
                }
            }
        }
        int ans = min(column, row);
        if (ans % 2 == 1){
            cout << "Ashish" << endl;
        }
        else
            cout << "Vivek" << endl;
    }
    return 0;
}
