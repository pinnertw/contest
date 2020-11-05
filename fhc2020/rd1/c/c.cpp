#include<bits/stdc++.h>
using namespace std;
#define triche ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define vvi vector<vector<int>>
#define vvl vector<vector<long long>>
#define vi vector<int>
#define vl vector<long long>

int spread(unordered_map<int, int>& a, int pos1, int pos2, unordered_map<long long, int>& dp, int direction){
    //cout << pos1 << ' ' << pos2 << endl;
    int length = 0;
    long long key = pos2;
    key += (long long) pos1 * (long long) 500000000;
    key *= 2;
    key += direction;
    if (dp.count(key) > 0) return dp[key];

    if (a.count(pos1) > 0 && (!direction)){
        length = spread(a, pos1 - a[pos1], pos2, dp, 0);
    }
    else if (a.count(pos2) > 0 && (direction)){
        length = spread(a, pos1, pos2 + a[pos2], dp, 1);
    }
    else{
        dp[key] = pos2 - pos1;
        return pos2 - pos1;
    }
    dp[key] = length;
    return length;
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
        unordered_map<int, int> P_H;
        for (int i = 0; i < n; i++){
            int j, k;
            cin >> j >> k;
            P_H[j] = k;
        }

        int ans = 0;
        unordered_map<long long, int> dp;
        for (auto h: P_H){
            ans = max(ans, spread(P_H, h.first, h.first, dp, 0));
            ans = max(ans, spread(P_H, h.first, h.first, dp, 1));
        }
 
        cout << "Case #" << T - t << ":" << ans << endl;
    }
    return 0;
}
