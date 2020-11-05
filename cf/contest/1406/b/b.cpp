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
        vl a(n);
        int positif = 0;
        for (int i = 0; i < n; i ++){
            cin >> a[i];
            if (a[i] > 0){
                positif++;
            }
        }
        sort(a.begin(), a.end());
        /*
        for (int i = 0; i < n; i ++){
            cout << a[i] << ' ';
        }
        cout << endl;
        */
        long long ans = 0;
        if (positif == 0){
            ans = (a[n-1] * a[n-2] * a[n-3] * a[n-4] * a[n-5]);
        }
        else{
            ans = max(ans, a[n-1] * a[n-2] * a[n-3] * a[n-4] * a[n-5]);
            ans = max(ans, a[n-1] * a[n-2] * a[n-3] * a[0] * a[1]);
            ans = max(ans, a[n-1] * a[0] * a[1] * a[2] * a[3]);
        }
        cout << ans << endl;
    }
    return 0;
}
