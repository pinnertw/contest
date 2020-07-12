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
        vector<int> a (2 * n);
        for (int i = 0; i < 2 * n; i++){
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        cout << a[n] - a[n-1] << endl;
    }
    return 0;
}
