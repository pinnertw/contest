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
        int n;
        cin >> n;
        unordered_map<int, int> a;
        int maxx = 0;
        for (int i = 0; i < n; i++){
            int temp;
            cin >> temp;
            if (a.count(temp) > 0){
                a[temp]++;
            }
            else 
                a[temp] = 1;
            if (a[temp] > maxx) maxx = a[temp];
        }
        int s = 0;
        int l = 0;
        for (auto j: a){
            if (j.second != maxx){
                s += j.second;
            }
            else l++;
        }
        cout << l + s / (maxx - 1) - 1<< endl;
 
    }
    return 0;
}
