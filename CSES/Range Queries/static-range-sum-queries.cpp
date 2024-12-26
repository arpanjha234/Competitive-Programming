#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

#define endl '\n'
 
int main() {
  // fast-io
  ios::sync_with_stdio(0);
  cin.tie(0);
 
  int n, q;
  cin >> n >> q;
 
  int x[n + 10];
  i64 psum[n + 10];
  
  for(int i = 1; i <= n; i++){
    cin >> x[i];
    psum[i] = psum[i - 1] + x[i];
  }
 
  while(q--){
    int a, b;
    cin >> a >> b;

    i64 res = psum[b] - psum[a - 1];
    
    cout << res << endl;
  }
  return 0;
}
