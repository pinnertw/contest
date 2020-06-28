#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    vector<int> dp(k / 2 + 1, INT_MAX);
    vector<bool> take(k / 2 + 1, false);
    dp[0] = a[n-1];
    take[0] = true;
    for (int i = n - 2; i >= 0; i--){
        for (int j = k / 2; j >= 1; j--){
            if (!take[j - 1]){
                int temp  = min(dp[j], max(dp[j-1], a[i]));
                if (temp < dp[j]) take[j] = true;
                dp[j] = temp;
            }
            else take[j-1] = false;
        }
        if (dp[0] > a[i]) {
            dp[0] = a[i];
            take[0] = true;
        }
        else{take[0] = false;}
    }
    //for (int j : dp) cout << j << ' ';
    //cout << endl;
    cout << dp[k / 2 - 1] << endl;




    return 0;
}
