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
        sort(a.begin(), a.end());
        int ind = 0;
        int ans = 0;
        int index = 0;
        while (true){
            if (index == a.size()){
                ans += ind;
                break;
            }
            if (a[index] > ind){
                ans += ind;
                break;
            }
            else ind = a[index] + 1;
            index++;
        }
        index = 0;
        int count = 0;
        for (int i = 0; i < ans + 1; i++){
            while (true){
                //cout << i << ' ' << count << ' ' << a[index] << endl;
                if (a[index] == i) {
                    count++;
                    index++;
                }
                else {
                    break;
                }
            }
            if (count < 2){
                ans += i;
                break;
            }
            count = 0;
        }
        cout << ans << endl;
    }
    return 0;
}
