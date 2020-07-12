#include<bits/stdc++.h>
using namespace std;
#define triche ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    triche;
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i ++){
            cin >> a[i];
        }
        int x, y, z=-1;
        for (int i = 1; i < n - 1; i++){
            if (a[i-1] < a[i] && a[i+1] < a[i]){
                x = i;
                y = i+1;
                z = i+2;
            }
        }
        if (z == -1) cout << "NO" << endl;
        else{
            cout << "YES" << endl;
            cout << x << ' ' << y << ' ' << z << endl;
        }
    }   
    return 0;
}
