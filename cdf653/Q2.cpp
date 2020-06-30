#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int move = 0;
        while (n % 6 == 0){
            n /= 6;
            move++;
        }
        while (n % 3 == 0){
            n *= 2;
            n /= 6;
            move += 2;
        }
        if (n == 1) cout << move << endl;
        else cout << -1 << endl;
 
    }
    return 0;
}
