#include<bits/stdc++.h>
using namespace std;
int main(){
  int t, n, x;
  cin >> t;
  while (t--){
      cin >> n >> x;
      int temp;
      int nb_odd = 0;
      for (int i = 0; i < n; i++){
          cin >> temp;
          if (temp % 2 == 1) nb_odd++;
      }
      int nb_even = n - nb_odd;
      if (nb_odd == 0){
          cout<<"No"<<endl;
      }
      else if (nb_even == 0 && (x % 2 == 0)){
          cout<<"No"<<endl;
      }
      else{
          if (nb_odd % 2 == 0) nb_odd--;
          if (x > nb_odd + nb_even){
              cout<<"No"<<endl;
          }
          else cout<<"Yes"<<endl;
      }


  }
  return 0;
}
