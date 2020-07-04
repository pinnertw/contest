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
        vector<int> b(n);
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        bool have1 = false;
        bool have0 = false;
        for (int i = 0; i < n; i++){
            cin >> b[i];
            if (b[i]) have1 = true;
            else have0 = true;
        }
        int min0 = 0;
        bool ans = true;
        bool both = have1 && have0;
        if (both) ans = true;
        else{
            for (int i = 0; i < n; i++){
                if (min0 <= a[i]){
                    min0 = a[i];
                }
                else {
                    ans = false;
                    break;
                }
            }
        }

        if (ans) cout << "Yes" << endl;
        else cout << "No" << endl;

    }
    return 0;
}
