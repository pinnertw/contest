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
        vector<int> a(n);
        vector<int> mex(n+1);
        for (int i = 0; i < n; i++){
            cin >> a[i];
            mex[a[i]]++;
        }
        vector<int> ans;
        for (int k = 0; k < 2 * n; k++){
            int mex_loc;
            for (int i = 0; i <= n; i++){
                if (mex[i] == 0) {
                    mex_loc = i;
                    break;
                }
            }
            if (mex_loc == n) {
                int j = -1;
                for (int i = 0; i < n; i++){
                    if (a[i] != i) {
                        j = i;
                        break;
                    }
                }
                if (j == -1) break;
                ans.push_back(j + 1);
                mex[a[j]]--;
                a[j] = n;
                mex[n]++;
            }
            else{
                ans.push_back(mex_loc + 1);
                mex[a[mex_loc]]--;
                mex[mex_loc]++;
                a[mex_loc] = mex_loc;
            }
        }
        cout << ans.size() << endl;
        for (auto i: ans){
            cout << i << ' ';
        }
        cout << endl;
 
    }
    return 0;
}
