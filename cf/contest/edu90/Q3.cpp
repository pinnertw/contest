#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--){
        string s;
        cin >> s;
        long long n = s.size();
        int cumsum = 0;
        int cumsum_min = 0;
        long long index_last = -1;
        long long res = n;
        for (long long i = 0; i < n; i++){
            if (s[i] == '+') {
                if (cumsum < cumsum_min){
                    res += (i - index_last) * (i + index_last + 1) / 2;
                    cumsum_min = cumsum;
                }
                index_last = -1;
                cumsum++;
            }
            else {
                cumsum--;
                if (cumsum < cumsum_min && index_last == -1){
                    index_last = i;
                }
            }
        }
        if (cumsum < cumsum_min){
            res += (n - index_last) * (n + index_last + 1) / 2;
        }
        cout << res << endl;

 
    }
    return 0;
}
