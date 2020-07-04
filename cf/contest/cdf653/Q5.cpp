#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, k;
    cin >> n >> k;
    vector<int> T_both;
    vector<int> T_a;
    vector<int> T_b;
    int t, a, b;
    for (int i = 0; i < n; i++){
        cin >> t >> a >> b;
        if (a && b) T_both.push_back(t);
        else if (a) T_a.push_back(t);
        else if (b) T_b.push_back(t);
    }
    sort(T_both.begin(), T_both.end());
    sort(T_a.begin(), T_a.end());
    sort(T_b.begin(), T_b.end());
    long long time = 0;
    int index_both = 0;
    int index_a = 0;
    int index_b = 0;
    for (int i = 0; i < k; i++){
        //cout << books << ' ' << time << endl;
        int time_both; 
        int time_add;
        // time both
        if (index_both >= T_both.size()){
            time_both = INT_MAX;
        }
        else{
            time_both = T_both[index_both];
        }
        // time add
        if (index_a >= T_a.size() || index_b >= T_b.size()){
            time_add = INT_MAX;
        }
        else{
            time_add = T_a[index_a] + T_b[index_b];
        }
        // end
        if (time_add == INT_MAX && time_both == INT_MAX){
            time = -1;
            break;
        }
        // add time
        if (time_both > time_add){
            time += time_add;
            index_a++;
            index_b++;
        }
        else{
            time += time_both;
            index_both++;
        }
    }
    cout << time << endl;
    return 0;
}
