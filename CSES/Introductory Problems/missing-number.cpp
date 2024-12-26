#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
 
int main() {
  // fast-io
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  i64 n, x = 0, sum1 = 0, sum2 = 0, res = 0;
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
