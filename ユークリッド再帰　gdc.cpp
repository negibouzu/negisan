#include <bits/stdc++.h>
using namespace std;

//gcd(a,b)で最大公約数を返す関数　ユークリッドの互除法


int gcd(long long a, long long b) {

  if(a < b) return gcd(b, a);
     if (b == 0) return a;
    else return GCD(b, a % b);
}


int main(){
  long long a,b;
  cin >>a>>b;
  long long ans=gcd(a,b);
  cout<<ans<<endl;
  return 0;
}
