#include <bits/stdc++.h>
#pragma GCC optimize("O3, unroll-loops")
using namespace std;

#define endl '\n'

constexpr int mod = 1e9 + 7;
 
int main() {
  // fast-io
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int n;
  cin >> n;
 
  int dp[n + 10] = {0};
 
  // base-case
  dp[0] = dp[1] = 1;
 
  for(int i = 2; i <= n; i++){
    for(int j = 1; j <= min(i, 6); j++){
      // dp[i] = number of ways to construct sum n
      dp[i] = ((dp[i - j] + dp[i]) % mod);
    }
  }
 
  cout << dp[n] << endl;
  return 0;
}
