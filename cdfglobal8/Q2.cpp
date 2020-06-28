#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long k;
    cin >> k;

    vector<int> a(10, 1);
    string s = "codeforces";
    long long product=1;
    int index = 0;
    while (product < k){
        product /= a[index];
        product *= (a[index] + 1);
        a[index]++;
        index = (index + 1) % 10;
    }
    for (int i = 0; i < 10; i++){
        while (a[i]--){
            cout << s[i];
        }
    }
    return 0;
}
