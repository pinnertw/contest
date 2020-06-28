#include<bits/stdc++.h>
using namespace std;
int main(){
  int N, S;
  cin >> N >> S;
  if (S / 2 >= N){
      cout<<"YES"<<endl;
      cout<<S-2 * N + 2<<' ';
      for (int i = 1;  i < N; i++){
          cout<<2<<' ';
      }
      cout<<endl;
      cout<<1<<endl;
  }
  else{
      cout<<"NO"<<endl;
  }
  return 0;
}
