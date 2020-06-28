#include<bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b) {
   if (b == 0)
      return a;
   return gcd(b, a % b);
}

long long lcm(long long a, long long b){
    return a * b / gcd(a, b);
}

unordered_map<long long, int> decomposition(int K){
    unordered_map<long long, int> maps;
    int k = K;
    while ((k % 2 == 0) && (k != 1)){
        k /= 2;
        if (maps.find(2) != maps.end()) maps[2]++;
        else maps[2] = 1;
    }
    long long prime = 3;
    while ((prime <= (sqrt(K) + 1)) && (k != 1)){
        while ((k % prime == 0) && (k != 1)){
            k /= prime;
            if (maps.find(prime) != maps.end()) maps[prime]++;
            else maps[prime] = 1;
        }
        prime += 2;
    }
    if (k == 1) return maps;
    else {
        maps[k] = 1;
    }
    return maps;
}

int main(){
  long long n, mini;
  cin >> n;
  vector<long long> a(n);
  vector<unordered_map<long long, int> > maps (n);
  long long lcmm;
  for (long long i = 0; i < n; i++){
      cin>>a[i];
      maps[i] = decomposition(a[i]);
  }
  lcmm = a[n-1];
  for (long long i = 0; i < n-1; i++){
      lcmm = lcm(lcmm, a[i]);
  }

  mini = 1;
  unordered_map<long long, int> map = decomposition(lcmm);
  for (auto i = map.begin(); i != map.end(); i++){
      //cout<<mini<<' '<<i->first<<endl;
      long long prime = i->first;
      int k = i->second;
      bool gcd_ = false;
      while (k > 0){
          //cout<<prime<<' '<<k<<endl;
          bool once = false;
          gcd_ = true;
          int mmm = k;
          for (auto j: maps){
              int count = j.count(i->first);
              if (once && (count == 0)){
                  gcd_ = false;
                  break;
              }
              else if (once && (j[i->first] < k)){
                  gcd_ = false;
                  break;
              }
              else if (count == 0){
                  once = true;
                  mmm = 0;
              }
              else if (j[i->first] < k){
                  once = true;
                  mmm = j[i->first];
              }
          }
          if (gcd_) {
              break;
          }
          k--;
      }
      if (k > 0){
          for (int x = 0; x < k; x++){
              mini *= prime;
          }
      }
  }
  cout<<mini;
  return 0;
}
