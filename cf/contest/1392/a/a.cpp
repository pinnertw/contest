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
        int a = -1;
        bool ans = false;
        for (int i = 0; i < n; i++){
            int temp;
            cin >> temp;
            if (a == -1){
                a = temp;
            }
            else if (a != temp){
                ans = true;
            }
        }
        if (!ans) cout << n << endl;
        else cout << 1 << endl;
 
    }
    return 0;
}
