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
        long long x, y, k;
        cin >> x >> y >> k;
        cout << k + (k * (y + 1) - 2) / (x - 1) + 1 << endl;
 
    }
    return 0;
}
