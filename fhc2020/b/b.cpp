#include<bits/stdc++.h>
using namespace std;
#define triche ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define vvi vector<vector<int>>
#define vvl vector<vector<long long>>
#define vi vector<int>
#define vl vector<long long>
#define vb vector<bool>
int main(){
    triche;
    int T;
    int t;
    cin >> t;
    T = t;
    while (t--){
        int n;
        cin >> n;
        vb colour (n);
        char temp;
        for (int i = 0; i < n; i++){
            cin  >> temp;
            if (temp == 'A'){
                colour[i] = true;
            }
        }


 
        char ans = 'Y';
        cout << "Case #" << T - t << ": " << ans << endl;
    }
    return 0;
}
