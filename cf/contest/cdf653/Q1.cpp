#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--){
        int x, y, n;
        cin >> x >> y >> n;
        if (n % x >= y) cout << n - n % x + y << endl;
        else cout << n - n % x - x + y << endl;
 
    }
    return 0;
}
