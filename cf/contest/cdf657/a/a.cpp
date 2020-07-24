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
        string s;
        cin >> s;
        string t = "abacaba";
        int count = 0;
        int count2 = 0;
        int index = -1;
        for (int i = 0; i <= s.size() - t.size(); i++){
            bool count_ = true;
            bool count2_ = true;
            for (int j = 0; j < t.size(); j++){
                if (s[i + j] == '?'){
                    count_ = false;
                    continue;
                }
                else if (s[i + j] != t[j]){
                    count_ = false;
                    count2_ = false;
                    break;
                }
            }
            if (count_) {
                count++;
            }
            if (count2_){
                count2++;
                index = i;
            }
        }
        if (count > 1){
            cout << "No" << endl;
        }
        else if (count2 > 0){
            cout << "Yes" << endl;
            if (count == 0){
                for (int j = 0; j < t.size(); j++){
                    s[index + j] = t[j];
                }
            }
            for (int i = 0; i < s.size(); i++){
                if (s[i] == '?') s[i] = 'd';
            }
            cout << s << endl;
        }
        else {
            cout << "No" << endl;
        }
    }
    return 0;
}
