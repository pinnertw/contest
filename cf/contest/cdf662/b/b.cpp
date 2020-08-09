#include<bits/stdc++.h>
using namespace std;
#define triche ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define vvi vector<vector<int>>
#define vvl vector<vector<long long>>
#define vi vector<int>
#define vl vector<long long>
int main(){
    triche;
    int n;
    cin >> n;
    unordered_map <int, int> storage;
    vvi numbers (9);
    for (int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        if (storage.count(temp) > 0){
            storage[temp]++;
        }
        else storage[temp] = 1;
    }
    for (auto j: storage){
        if (j.second >= 8) numbers[8].push_back(j.first);
        else if (j.second >= 6) numbers[6].push_back(j.first);
        else if (j.second >= 4) numbers[4].push_back(j.first);
        else if (j.second >= 2) numbers[2].push_back(j.first);
    }
    int q;
    cin >> q;
    for (int i = 0; i < q; i++){
        char event;
        int length;
        cin >> event >> length;
        if (storage.count(length) > 0){
            int i;
            if (storage[length] >= 8){ 
                i = 8;
                numbers[i].erase(find(numbers[i].begin(), numbers[i].end(), length));
            }
            else if (storage[length] >= 6){ 
                i = 6;
                numbers[i].erase(find(numbers[i].begin(), numbers[i].end(), length));
            }
            else if (storage[length] >= 4){
                i = 4;
                numbers[i].erase(find(numbers[i].begin(), numbers[i].end(), length));
            }
            else if (storage[length] >= 2){
                i = 2;
                numbers[i].erase(find(numbers[i].begin(), numbers[i].end(), length));
            }
        }

        if (event == '+'){
            if (storage.count(length) > 0){
                storage[length]++;
            }
            else storage[length] = 1;
        }
        else {
            storage[length]--;
        }
        if (storage[length] >= 8) numbers[8].push_back(length);
        else if (storage[length] >= 6) numbers[6].push_back(length);
        else if (storage[length] >= 4) numbers[4].push_back(length);
        else if (storage[length] >= 2) numbers[2].push_back(length);

        if (numbers[8].size() > 0){
            cout << "yes" << endl;
        }
        else if (numbers[6].size() > 0 && (numbers[2].size() + numbers[4].size() > 0)){
            cout << "yes" << endl;
        }
        else if ((numbers[6].size() + numbers[4].size() > 0) && (numbers[2].size() > 1)){
                cout << "yes" << endl;
        }
        else if (numbers[6].size() + numbers[4].size() >= 2){
            cout << "yes" << endl;
        }
        else cout << "no" << endl;
        }
    return 0;
}
