#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--){
        int n;
        int move = 0;
        char temp;
        stack<char> ss;
        cin >> n;
        for (int i = 0; i < n; i++){
            //cout << i << endl;
            cin >> temp;
            if (temp == ')' && ss.empty()){
                move++;
            }
            else if (temp == ')' && ss.top() == '('){
                ss.pop();
            }
            else {
                ss.push('(');
            }
        }
        cout << move << endl;
 
    }
    return 0;
}
