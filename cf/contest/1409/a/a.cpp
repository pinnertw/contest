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
        int a, b;
        cin >> a >> b;
        if (a > b) swap(a, b);
        if (a == b) cout << 0 << endl;
        else cout << (b - a - 1)/ 10 + 1<< endl;
        //cout << b << ' ' << a << ' ' <<(b - a - 1) / 10 << endl;
 
    }
    return 0;
}
