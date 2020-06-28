#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector<int> a(2 * n);
        vector<int> odds;
        vector<int> evens;
        for (int i = 0; i < 2 * n; i++){
            cin >> a[i];
            if (a[i] % 2 == 1){
                odds.push_back(i);
            }
            else evens.push_back(i);
        }
        int throw1, throw2;
        int n1 = odds.size();
        int n2 = evens.size();
        if (n1 == 0) {
            throw1= 0;
            throw2 = 1;
        }
        else if (n1 % 2 == 0){
            throw1 = odds[0];
            throw2 = odds[1];
        }
        else{
            throw1 = odds[0];
            throw2 = evens[0];
        }
        if (n == 2){
            cout << 1 << ' ' << 2 << endl;
        }
        else{
            int index = 0;
            for (auto j : odds){
                if (j != throw1 && j != throw2){
                cout << j + 1 << ' ';
                if (index % 2 == 1) cout << endl;
                index++;
                }
            }
            for (auto j : evens){
                if (j != throw1 && j != throw2){
                cout << j + 1 << ' ';
                if (index % 2 == 1) cout << endl;
                index++;
                }
            }
        }
    }
    return 0;
}
