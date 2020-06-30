#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--){
        long long n, k;
        cin >> n >> k;
        map<long long, long long> b;
        for (int i = 0; i < n; i++){
            //cout << i << endl;
            int temp;
            cin >> temp;
            temp = temp % k;
            if (temp < 0) temp += k;
            if (temp != 0) b[temp]++;
        }
        long long maxx = 0;
        long long index_max = 0;
        for (auto m: b){
            if (maxx < m.second){
                maxx = m.second;
                index_max = m.first;
            }
        }
        //cout << k *  maxx << ' ' << index_max << ' ' << endl;
        if (index_max == 0)
            cout << 0 << endl;
        else 
            cout << k * (maxx) - index_max + 1<< endl;
    }
    return 0;
}
