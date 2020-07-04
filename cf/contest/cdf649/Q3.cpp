#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<int> a(n);
    vector<bool> filled (n, false);
    vector<int> ans(n, n + 1);
    int continues = 0;
    cin >> a[0];
    if (a[0] == 0) ans[0] = 1;
    else ans[0] = 0;
    for (int i = 1; i < n; i++){
        cin >> a[i];
        if (a[i] != a[i-1]){
            ans[i] = a[i-1];
            filled[a[i-1]] = true;
        }
    }
    int to_fill;
    int index = n - 1;
    for (int i = n - 1; i > 0; i--){
        to_fill = a[i] - 1;
        index = min(index, i);
        //cout << to_fill << endl;
        if (to_fill >= 0){
            while (!filled[to_fill] && to_fill >= 0){
                if (index < 0) break;
                while (index >= 0 && ans[index] != n + 1){
                    index--;
                }
                if (index < 0) break;
                ans[index] = to_fill;
                index--;
                to_fill--;
            }
        }
    }
    // Print answer
    for (int i = 0; i < n; i++){
        cout << ans[i] << ' ';
    }

    return 0;
}
