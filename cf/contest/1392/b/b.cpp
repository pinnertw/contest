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
        long long n, k;
        cin >> n >> k;
        vl a(n);
        long long a_max = LONG_MIN;
        long long a_min = LONG_MAX;
        long long a0 = LONG_MIN;
        for (int i = 0; i < n; i++){
            cin >> a[i];
            if (a[i] > a_max){
                a_max = a[i];
            }
            if (a[i] < a_min){
                a_min = a[i];
            }
        }
        if (a_max == a_min){
            for (int i = 0; i < n; i++){
                a[i] = 0;
            }
        }
        else if (k % 2 == 1){
            for (int i = 0; i < n; i++){
                a[i] = a_max - a[i];
            }
        }
        else{
            for (int i = 0; i < n; i++){
                a[i] = a[i] - a_min;
            }
        }
        for (int i = 0; i < n; i++){
            cout << a[i] << ' ' ;
        }
        cout << endl;
 
    }
    return 0;
}
