#include<bits/stdc++.h>
using namespace std;
#define triche ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    triche;
    int n;
    cin >> n;
    vector<int> a(n), p(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
        p[i] = i;
    }
    sort(p.begin(), p.end(), [&a](int x, int y) {return a[x] < a[y];});
    vector<pair<int, int> > ans;

    for (int i = n - 1; i >= 0; i--){
        for (int j = 1; j <= i; j++){
            if (p[j] < p[j-1]){
                ans.push_back({p[j] + 1, p[j-1] + 1});
                swap(p[j], p[j-1]);
            }
        }
    }

    cout << ans.size() << endl;
    for (auto i: ans){
        cout << i.first << ' ' << i.second << endl;
    }

    return 0;
}
