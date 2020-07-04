#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t, n;
    cin >> t;
    while (t--){
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        a.push_back(a[n-1]);
        vector<int> ans = {a[0]};
        int act = a[0];
        bool cross = (a[1] - a[0] > 0);
        for (int i = 1; i <= n; i++){
            if (cross && (a[i] - a[i-1] <= 0)){
                act = a[i - 1];
                cross = !cross;
                ans.push_back(a[i-1]);
            }
            else if (!cross && (a[i] - a[i-1] >= 0)){
                act = a[i - 1];
                cross = !cross;
                ans.push_back(a[i-1]);
            }
        }
        cout << ans.size()<<endl;
        for (auto j: ans){
            cout << j << ' ';
        }
        cout << endl;
 
    }
    return 0;
}
