#include<bits/stdc++.h>
using namespace std;
int main(){
  int n, x;
  cin>>n >> x;
  vector<int> a (n);

  for (int i = 0; i < n; i++){
      cin>>a[i];
  }
  long long max_sum = 0;

  int left;
  int date = a[n-1];
  long long sum = a[n-1] * (a[n-1] + 1) / 2;

  for (int i = n - 1; i >= 0; i--){
      if (i != n - 1){
          date -= a[i + 1];
          sum -= a[i+1] * (a[i+1] + 1) / 2;
      }
      while (date + a[left] <= x){
          date += a[left];
          sum += a[left] * (a[left] + 1) / 2;
          left--;
          if (left == -1) left = n-1;
      }
      if (left == i){
          left--;
          if (left == -1) left = n - 1;
          date = a[i];
          sum = a[i] * (a[i] + 1) / 2;
      }
      long long temp = x - date;
      long long temp2 = temp * (a[left] + a[left] - temp + 1) / 2;
      if (sum + temp2 > max_sum) max_sum = sum + temp2;

      if (a[i] >= x){
          temp = x * (a[i] + a[i] - x + 1) / 2;
          if (temp > max_sum) max_sum = temp;
      }
      //cout<<i<<' '<<sum<<' '<<max_sum<<' '<<endl;
  }

  cout<<max_sum<<endl;
  return 0;
}
