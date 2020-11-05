#include<bits/stdc++.h>
using namespace std;
#define triche ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define vvi vector<vector<int>>
#define vvl vector<vector<long long>>
#define vi vector<int>
#define vl vector<long long>
int main(){
    triche;
    int n;
    cin >> n;
    unsigned long long int base = 1;
    for (int i = 0; i < n; i++){
        unsigned long long int loc = base;
        for (int j = 0; j < n; j++){
            cout << loc / 2 << ' ';
            loc *= 2;
        }
        cout << endl;
        base *= 2;
    }
    cout.flush();
    int q;
    cin >> q;
    for (int i = 0; i < q; i++){
        long long k;
        cin >> k;
        int x= 1, y = 1;
        cout << x << ' ' << y << endl;
        for (int j = 1; j < 2 * n - 1; j++){
//            cerr << k % 3 << endl;
            if (k % 2 == 0){
                x += 1;
            }
            if (k % 2 == 1){
                y += 1;
            }
            k /= 2;
            cout << x << ' ' << y << endl;
        }
    }

    return 0;
}
