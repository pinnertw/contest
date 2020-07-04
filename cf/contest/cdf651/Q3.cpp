#include<bits/stdc++.h>
using namespace std;
void print(bool ans){
    if (ans) cout << "Ashishgup" << endl;
    else cout << "FastestFinger" << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        if (n == 1) print(false);
        else if (n == 2) print(true); 
        else if (n % 2 == 1){
            print(true);
        }
        else {
            int ans = 0;
            for (int i = 3; i < sqrt(n) + 1; i+= 2){
                if (n % i == 0) {
                    ans++;
                    if (ans > 1) break;
                }
            }
            bool win = false;
            if (n % 4 == 0 && ans > 0) win = true;
            if (n % 4 != 0){
                if (ans > 1) win = true;
            }
            print(win);
        }
 
    }
    return 0;
}
