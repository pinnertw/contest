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
        int zeros = 0;
        int ones = 0;
        for (int i = 0; i < s.size(); i++){
            if (s[i] == '0') zeros++;
            else ones++;
        }
        int last = abs(zeros - ones);
        if ((max(zeros, ones) - last) % 2 == 1){
            cout << "DA" << endl;
        }
        else cout << "NET" << endl;
    }
    return 0;
}
