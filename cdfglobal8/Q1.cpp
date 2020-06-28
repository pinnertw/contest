#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    long long a, b, n;
    cin >> t;
    while (t--){
        cin >> a >> b >> n;
        long long swap;
        if (a > b){
            swap=a;
            a=b;
            b=swap;
        }
        int index = 0;
        while (a <= n && b <= n){
            if (index % 2 == 1){
                b += a;
            }
            else {
                a += b;
            }
            index++;
        }
        cout << index << endl;

 
    }
    return 0;
}
