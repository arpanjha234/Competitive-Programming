#include <bits/stdc++.h>
using namespace std;
 
#define endl '\n'
 
int main() {
  // fast-io
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int n, res = 0;
  cin >> n;
 
  for(int i = 5; (n / i) >= 1; i *= 5){
	  res += (n / i);
  }
 
  cout << res << endl;
  return 0;
}
