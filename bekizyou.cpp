#include <bits/stdc++.h>
using namespace std;

int main() {
  long long a, n, p = 1e9 + 7, ans = 1;
  cin >> a >> n;
  for (int i = 0; i < n; i++) ans = (ans * a) % p;
  cout << ans;
  return 0;
}
