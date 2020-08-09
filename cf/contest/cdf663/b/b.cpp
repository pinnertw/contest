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
        int n, m;
        cin >> n >> m;
        int count = 0;
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                char temp;
                cin >> temp;
                if (j == m - 1){
                    if (temp == 'R') count++;
                }
                if (i == n - 1){
                    if (temp == 'D') count++;
                }
            }
        }
        cout << count << endl;
 
    }
    return 0;
}
