#include<bits/stdc++.h>
using namespace std;
#define triche ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)

void swap(int& a, int& b){
    int temp = a;
    a = b;
    b = temp;
}
    
int main(){
    triche;
    vector<int> piles(3);
    cin >> piles[0] >> piles[1] >> piles[2];
    cout << "First" << endl;
    cout.flush();

    vector<int> order{0, 1, 2};
    sort(order.begin(), order.end(), [&piles](int a, int b){return piles[a] < piles[b];});

    cout << 2 * piles[order[2]] - piles[order[1]] - piles[order[0]] << endl;
    cout.flush();
    int pile;
    cin >> pile;
    if (pile == order[0] + 1){
        cout << piles[order[2]] - piles[order[1]] << endl;
        cout.flush();
    }
    else if (pile == order[1] + 1){
        cout << piles[order[2]] - piles[order[0]] << endl;
        cout.flush();
    }
    else{
        cout << 6 * piles[order[2]] - 3 * piles[order[0]] - 3 * piles[order[1]] << endl;
        cout.flush();
        cin >> pile;
        if (pile == order[0] + 1){
            cout << 3 * piles[order[2]] - piles[order[0]] - 2 * piles[order[1]] << endl;
            cout.flush();
        }
        else{
            cout << 3 * piles[order[2]] - piles[order[1]] - 2 * piles[order[0]] << endl;
            cout.flush();
        }
    }
    cin >> pile;


    return 0;
}
