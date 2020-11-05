#include<bits/stdc++.h>
using namespace std;
#define triche ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define vvi vector<vector<int>>
#define vvl vector<vector<long long>>
#define vi vector<int>
#define vl vector<long long>
int main(){
    triche;
    int t;
    cin >> t;
    while (t--){
        long long a, b, x, y, n;
        cin >> a >> b >> x >> y >> n;
        vl ans(4);
        ans[0] = max(a - n, x) * b;
        ans[1] = a * max(b - n, y);
        ans[2] = LONG_MAX;
        ans[3] = LONG_MAX;
        if (n > a - x) ans[2] = x * (b - (n - a + x));
        if (n > b - y) ans[3] = (a - (n - b + y)) * y;

        if (n >= a - x + b - y) {
            cout << x * y << endl;
            //cerr << x * y << endl;
        }
        else{
            long long minn = LONG_MAX;
            for (int i = 0; i < 4; i++){
                minn = min(minn, ans[i]);
            }

        cout << minn << endl;
        //cerr << ans[0] << endl;
        }
    }
    return 0;
}
