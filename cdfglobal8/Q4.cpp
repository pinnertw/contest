#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    vector<long long> a(t);
    for (int i = 0; i < t; i++){
        cin >> a[i];
    }
    vector<int> bits (22, 0);
    for (int i = 0; i < t; i++){
        int index = 0;
        while (a[i] > 0){
            if (a[i] % 2 == 1){
                bits[index]++;
            }
            index++;
            a[i] /= 2;
        }
    }
    for (int i = 0; i < t; i++){
        int temp = 0;
        int k = 1;
        for (int j = 0; j < 22; j++){
            if (bits[j] > 0) {
                temp += k;
                bits[j]--;
            }
            k *= 2;
        }
        a[i] = temp;
    }
    long long somme = 0;
    for (int i = 0; i < t; i++){
        somme += a[i] * a[i];
    }
    cout << somme << endl;
    return 0;
}
