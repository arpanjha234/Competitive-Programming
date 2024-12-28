#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
 
int main() {
  // fast-io
  ios::sync_with_stdio(0);
  cin.tie(0);
 
  int n, q;
  cin >> n >> q;
 
  int x[n + 10];
  long long psum[n + 10];
  
  for(int i = 1; i <= n; i++){
    cin >> x[i];
    psum[i] = psum[i - 1] + x[i];
  }
 
  while(q--){
    int a, b;
    cin >> a >> b;

    long long res = psum[b] - psum[a - 1];
    
    cout << res << endl;
  }
  return 0;
}
