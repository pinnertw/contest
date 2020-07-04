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
        vector<int> b(n);
        int smallest = 2 * n;
        for (int i = 0; i < n; i++){
            cin >> b[i];
        }
        if (b[0] < b[n-1]) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
