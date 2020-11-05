#include<bits/stdc++.h>
using namespace std;
#define triche ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define vvi vector<vector<int>>
#define vvl vector<vector<long long>>
#define vi vector<int>
#define vl vector<long long>
bool cmp(int a, int b){
    return a > b;
}

int main(){
    triche;
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vi a (n);
        vi l (n, INT_MAX);
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        for (int i = 0; i < n; i++){
            int temp;
            cin >> temp;
            if (temp) {
                l[i] = a[i];
                a[i] = INT_MAX;
            }
        }
        sort(a.begin(), a.end(), cmp);
        int index = 0;
        int indexl = 0;
        while (index < n){
            if (a[index] == INT_MAX){
                index++;
            }
            else{
                break;
            }
        }
        while (indexl < n){
            if (l[indexl] != INT_MAX){
                indexl++;
            }
            else{
                break;
            }
        }
        while (true){
            if (index == n || a[index] == INT_MAX){
                break;
            }
            else{
                l[indexl] = a[index];
                index++;
                indexl++;
                while (indexl < n && (l[indexl] != INT_MAX)){
                    indexl++;
                }
            }
        }
        for (int i = 0; i < n; i++){
            cout << l[i] << ' ';
        }
        cout << endl;
    }
    return 0;
}
