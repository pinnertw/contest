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
        int l, r;
        long long m;
        cin >> l >> r >> m;
        int bc_min = m - (r - l);
        int bc_max = m + (r - l);
        int n, bc;
        int a;
        for (a = l; a <= r; a++){
            n = m / a;
            if (n > 0 && (bc_min <= n * a) && (n * a <= bc_max)){
                bc = m - n * a;
                break;
            }
            else if ((bc_min <= (n + 1) * a) && ((n + 1) * a <= bc_max)){
                bc = m - (n + 1) * a;
                break;
            }
        }
        int b, c;
        if (bc >= 0) b = l + bc, c = l;
        else b = l, c = l - bc;
        cout << a << ' ' << b << ' ' << c << endl;
 
    }
    return 0;
}
