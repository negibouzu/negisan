#include <bits/stdc++.h>
using namespace std;

int modPow(long long a, long long n, long long p) {
  if (n == 1) return a % p;
  if (n % 2 == 1) return (a * modPow(a, n - 1, p)) % p;
  long long t = modPow(a, n / 2, p);
  return (t * t) % p;
}

int main() {
  long long a, n, p = 1e9 + 7;
  cin >> a >> n;
  cout << modPow(a, n, p);
  return 0;
}

//汎用系

#include <iostream>
using namespace std;

// a^n mod を計算する　＊＊＊
long long modpow(long long a, long long n, long long mod) {
    long long res = 1;
    while (n > 0) {
        if (n & 1) res = res * a % mod;
        a = a * a % mod;
        n >>= 1;
    }
    return res;
}

int main() {
    // 3^45 mod. 1000000007 を計算してみる
    cout << modpow(3, 45, 1000000007) << endl;
}
    
    
