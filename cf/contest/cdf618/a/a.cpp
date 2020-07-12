#include<bits/stdc++.h>
using namespace std;
#define triche ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    triche;
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int count_zero = 0;
        int sum = 0;
        for (int i = 0; i < n; i++){
            int temp;
            cin >> temp;
            if (temp == 0) count_zero++;
            sum += temp;
        }
        if (count_zero + sum == 0) count_zero++;
        cout << count_zero << endl;
    }
    return 0;
}
