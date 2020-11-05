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
        string s;
        cin >> s;
        int ans = 0;
        for (int i = 2 ; i < n; i++){
            string t = s.substr(i - 2, 3);
            if (t.compare("LLL") == 0){
                s[i-1] = 'R';
                ans += 1;
            }
            else if (t.compare("RRR") == 0){
                s[i-1] = 'L';
                ans += 1;
            }
        }
        cout << ans << endl;

 
    }
    return 0;
}
