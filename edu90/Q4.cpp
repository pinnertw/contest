#include<bits/stdc++.h>
using namespace std;

long long maxss(vector<int>& array){
    long long max_so_far = 0;
    long long max_ending_here = 0;
    for (auto j: array){
        max_ending_here += j;
        if (max_ending_here < 0) max_ending_here = 0;
        if (max_so_far < max_ending_here) max_so_far = max_ending_here;
    }
    return max_so_far;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector<int> a (n);
        vector<int> b;
        vector<int> c;
        for (int i = 0; i < n; i++){
            cin >> a[i];
            if (i != 0 && i % 2 == 0){
                b.push_back(- a[i] + a[i-1]);
            }
            else if (i != 0){
                c.push_back(a[i] - a[i-1]);
            }
        }
        long long somme = 0;
        for (int i = 0; i < n; i++){
            if (i % 2 == 0) somme += a[i];
        }
        cout << somme + max(maxss(b), maxss(c)) << endl;
    }
    return 0;
}
