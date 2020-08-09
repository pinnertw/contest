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
    long long ans = 1;
    long long fac = 1;
    for (int i = 2; i <= t; i++){
        ans *= 2;
        fac *= i;
        ans %= 1000000007;
        fac %= 1000000007;
    }
    fac -= ans;
    while (fac < 0){
        fac += 1000000007;
    }
    fac %= 1000000007;
    cout << fac << endl;
    return 0;
}
