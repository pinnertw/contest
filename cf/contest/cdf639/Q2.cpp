#include<bits/stdc++.h>
using namespace std;

#define sizemax 26000
vector<int> h (sizemax);

void complete(){
    h[0] = 0;
    h[1] = 2;;
    for(int i = 2; i < sizemax; i++){
        h[i] = h[i-1] + 3 * i - 1;
    }
    return;
}


int main(){
  int t, n, size;
  complete();
  cin >> t;
  while (t--){
      cin>>n;
      size = 0;
      for (int i = sizemax-1; i > 0; i--){
          if (h[i] <= n){
              n -= h[i];
              size += 1;
          }
      }
      cout<<size<<endl;

  }
  return 0;
}

