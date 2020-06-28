#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    vector<char> a (t);
    vector<char> b (t);
    int nb_a = 0;
    int nb_b = 0;
    for (int i = 0 ; i < t; i++){
        cin >> a[i];
        if (a[i] == 1) nb_a++;
    }
    for (int i = 0; i < t; i++){
        cin >> b[i];
        if (b[i] == 1) nb_b++;
    }
    if (nb_a != nb_b) cout << -1 << endl;
    else{

    }
    return 0;
}
