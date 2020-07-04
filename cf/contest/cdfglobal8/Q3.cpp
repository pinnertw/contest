#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int k;
    cin >> k;
    cout << 3 * (k + 1) + 1 << endl;
    for (int i = 0; i < k + 1; i++){
        cout << i << ' ' << i + 1 << endl;
        cout << i << ' ' << i << endl;
        cout << i + 1 << ' ' << i << endl;
    }
    cout << k+1 << ' ' << k+1 << endl;

    return 0;
}
