#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    long long temp;
    long long ans = 0;
    for (int i = 0; i < n; i++){
        for (int j = i; j < n; j++){
            for (int k = j; k < n; k++){
                temp = a[i] | a[j] | a[k];
                if (ans < temp) ans = temp;
            }
        }
    }

    cout << ans << endl;


    return 0;
}
