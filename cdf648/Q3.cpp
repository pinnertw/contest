#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, temp;
    cin >> n;

    unordered_map<int, int> a;
    vector<int> b(n);

    for (int i = 0; i < n; i++){
        cin >> temp;
        a[temp] = i;
    }
    for (int i = 0; i < n; i++){
        cin >> temp;
        //cout << temp << ' ' << (n + a[temp] - i) % n << endl;
        b[(n + a[temp] - i) % n]++;
    }

    int maxi = 0;
    for (int i = 0; i < n; i++){
        maxi = max(maxi, b[i]);
    }
    cout << maxi << endl;
    return 0;
}
