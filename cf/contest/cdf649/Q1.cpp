#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t, n, x;
    cin >> t;
    while (t--){
        cin >> n >> x;
        int firstx = -1;
        int lastx = -1;
        int somme = 0;
        int temp;
        for (int i = 0; i < n; i++){
            cin >> temp;
            if (firstx == -1 && temp % x != 0){
                firstx = i;
            }
            if (temp % x != 0){
                lastx = i;
            }
            somme += temp;
        }
        int ans = 0;
        if (somme % x != 0){
            ans = n;
        }
        else if (somme % x == 0 && lastx != -1){
            ans = n - min(firstx + 1, n - lastx);
        }
        else{
            ans = -1;
        }
        if (ans == 0) ans = -1;
        cout << ans << endl;


 
    }
    return 0;
}
