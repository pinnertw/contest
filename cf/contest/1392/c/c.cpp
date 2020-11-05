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
        bool descent = true;
        long long last = -1;
        long long ans = 0;
        for (int i = 0; i < n; i++){
            long long temp;
            cin >> temp;
            if (temp > last){
                last = temp;
            }
            else{
                ans += last - temp;
                last = temp;
            }
        }
        cout << ans << endl;

 
    }
    return 0;
}
