#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
 
int main() {
  // fast-io
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  long long n, x = 0, sum1 = 0, sum2 = 0, res = 0;
  cin >> n;
 
  for(int i = 0; i < n; i++){
    cin >> x;
    sum1 += x;
    x = 0;
  }
 
  sum2 = n * (n + 1) / 2;

  res = (sum2 - sum1);
  
  cout << res << endl;
  return 0;
}
