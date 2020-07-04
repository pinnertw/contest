#include<bits/stdc++.h>
using namespace std;

bool comp(int* a, int *b){
    return *a > *b;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t, n;
    cin >> t;
    while (t--){
        cin >> n;
        bool ans = true;
        bool morethanone = false;
        unordered_map<int, int> values;
        vector<int> a(n);
        vector<int> b(n);
        for (int i = 0; i < n; i++){
            cin >> a[i];
            if (values.count(a[i]) != 0) {
                values[a[i]]++;
            }
            else values[a[i]] = 1;
        }
        for (int i = 0; i < n; i++){
            cin >> b[i];
            if (values.count(b[i]) != 0) {
                values[b[i]]--;
                if (values[b[i]] < 0) ans = false;
            }
            else ans = false;
        }
        if (n % 2 == 1){
            ans = ans && (a[n / 2] == b[n / 2]);
        }

        if (ans) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}
