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
        vector<bool> seen (n, false);
        vi ans;
        for (int i = 0; i < 2 * n; i ++){
            int temp;
            cin >> temp;
            if (!seen[temp - 1]) {
                seen[temp - 1] = true;
                ans.push_back(temp);
            }
        }
        for (auto i: ans){
            cout << i << ' ';
        }
        cout << endl;
 
    }
    return 0;
}
