#include<bits/stdc++.h>
using namespace std;

int digits(long long a){
    int largest = 0;
    int smallest = 9;
    while (a){
        int r = a % 10;
        largest = max(r, largest);
        smallest = min(r, smallest);
        a /= 10;
    }
    return smallest * largest;
}


int main(){
  int t;
  long long a, K;
  cin >> t;
  while (t--){
      cin>>a>>K;
      while (K > 1){
          int dig = digits(a);
          if (dig == 0) break;
          a += digits(a);
          K--;
      }
      cout<<a<<endl;
  }
  return 0;
}
