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
        int x, y, z;
        cin >> x >> y >> z;
        bool ans = false;
        int a, b, c;
        if (x == y){
            if (x >= z){
                ans = true;
                a = x;
                b = z;
                c = z;
            }
        }
        if (y == z){
            if (y > x){
                ans = true;
                a = x;
                b = x;
                c = y;
            }
        }
        if (z == x){
            if (x > y){
                ans = true;
                a = y;
                b = x;
                c = y;
            }
        }
        if (ans)
        cout << "YES\n" << a << ' ' << b << ' ' << c << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
