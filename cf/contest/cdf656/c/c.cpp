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
        int n;
        cin >> n;
        vi a(n);
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        bool descent = false;
        int ans = 0;
        for (int i = n-1; i >=1; i--){
            if (descent && (a[i-1] > a[i])){
                ans = i;
                break;
            }
            if (!descent && (a[i-1] <= a[i])){
                descent = true;
            }
        }
        cout << ans << endl;

 
    }
    return 0;
}
