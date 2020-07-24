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
        int n, m;
        cin >> n >> m;
        priority_queue<int> a;
        long long happiness = 0;
        int local_max = 0;
        int local_min = 0;
        for (int i = 0; i < m; i++){
            int temp;
            int temp2;
            cin >> temp >> temp2;
            a.push(temp);
            local_max = max(local_max, temp2);
            if (local_max == temp2){
                local_min = max(local_min, temp);
            }
            else if (local_max < temp2){
                local_min = temp;
            }
        }
        int both1 = 0;
        int both2 = 0;
        bool flag = false;
        while (n--){
            int temp = a.top();
            a.pop();
            if (temp > local_max){
                happiness += temp;
                if (temp == local_min) flag = true;
            }
            else if (both1 + temp > both2 + (!flag)? local_min : local_max){
                both1 += temp;
                if (!flag){
                    flag = true;
                    both2 += local_min;
                }
                else{
                    both2 += local_max;
                }
            }
            else{
                break;
            }
        }

        cout << happiness << endl;
    }
    return 0;
}
