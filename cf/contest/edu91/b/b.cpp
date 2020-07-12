#include<bits/stdc++.h>
using namespace std;
#define triche ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    triche;
    int t;
    cin >> t;
    while (t--){
        string st;
        cin >> st;
        int r=0, s=0, p=0;
        for (int i = 0; i < st.size(); i++){
            if (st[i] == 'R') r++;
            if (st[i] == 'S') s++;
            if (st[i] == 'P') p++;
        }
        char q;
        if (r >= s && r >= p) q = 'P';
        else if (s >= r && s >= p) q = 'R';
        else q = 'S';
        for (int i = 0; i < st.size(); i++){
            cout << q;
        }
        cout << endl;

          
 
    }
    return 0;
}
