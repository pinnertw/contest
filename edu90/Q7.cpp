#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, k, m;
    cin >> n >> k >> m;
    unordered_map <int, unordered_set<int> > points;
    map <int, int> paths;
    for (int i = 0; i < m; i++){
        int x, y;
        cin >> x >> y;

        if (points[x].count(y) > 0){
            points[x].erase(y);
            if (paths.count(abs(x - k) + y) > 0){
                paths[abs(x - k) + y]--;
            }
        }
        else{
            points[x].insert(y);
            if (paths.count(abs(x-k) + y) > 0){
                paths[abs(x-k) + y]++;
            }
            else{
                paths[abs(x-k) + y] = 1;
            }
        }
        long long cumsum = 0;
        int temp = 0;
        long long cum;
        for (auto j: paths){
            if (temp == 0){
                cumsum = j.second;
                temp = j.first;
                cum = cumsum + temp;
            }
            else{
                if (j.first - temp > cumsum){
                    cumsum = j.second;
                    temp = j.first;
                }
                else{
                    cumsum -= j.first - temp;
                    cumsum += j.second;
                    temp = j.first;
                }
                cum = cumsum + temp;
            }
        }
        if (cum - n - 1 > 0) cout << cum - n - 1 << endl;
        else cout << 0 << endl;
    }
    return 0;
}
