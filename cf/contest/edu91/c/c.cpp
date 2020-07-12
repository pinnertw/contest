#include<bits/stdc++.h>
using namespace std;
#define triche ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    triche;
    int t;
    cin >> t;
    while (t--){
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        for (int i = 0; i < n; i ++){
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        int index_max = n;
        int nb_team = 0;
        for (int i = n-1; i >= 0; i--){
            if ((index_max - i) * a[i] >= x){
                nb_team++;
                index_max = i;
            }
        }
        cout << nb_team << endl;
 
    }
    return 0;
}
