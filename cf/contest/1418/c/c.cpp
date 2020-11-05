#include<bits/stdc++.h>
using namespace std;
#define triche ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define vvi vector<vector<int>>
#define vvl vector<vector<long long>>
#define vi vector<int>
#define vl vector<long long>
int main(){
    triche;
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vi a(n);

        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        int skip_loc = 0;
        int ans = 0;
        if (n > 1){
            vvi b(4, vi(n-1, 0));
            if (a[n-1] == 1){
                b[0][n-2] = 1;
                b[1][n-2] = 1;
            }// 0, 1 -> friend takes it
            for (int i = n - 3; i >= 0; i--){
                if (a[i+1] == 1){
                    skip_loc = 1;
                }
                else{
                    skip_loc = 0;
                }

                b[0][i] = min(b[1][i+1], b[2][i+1]) + skip_loc;
                b[1][i] = b[2][i+1] + skip_loc;
                b[2][i] = min(b[0][i+1], b[3][i+1]);
                b[3][i] = b[0][i+1]; 
            }
            ans = min(b[1][0], b[2][0]);

            /*
            for (int i = 0; i < 4; i++){
                for (int j = 0; j < n - 1; j++){
                    cerr << b[i][j] << ' ';
                }
                cerr << endl;
            }
            cerr << endl;
            */
        }
        if (a[0] == 1){
            skip_loc = 1;
        }
        else skip_loc = 0;
        cout << ans + skip_loc << endl;

    }
    return 0;
}
