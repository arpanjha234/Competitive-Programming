#include <bits/stdc++.h>
using namespace std;
 
constexpr long long m = 1e9+7;
 
#define endl '\n'
 
int main() {
  // fast-io
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  long long n, res = 1;
  cin >> n;
 
  for(int i = 0; i < n; i++){
    res = ((long long)(res * 2) % m);
  }
  
  cout << res << endl;
  return 0;
}
