#include <bits/stdc++.h>
using namespace std;

//gcd(a,b)で最大公約数を返す関数　ユークリッドの互除法

int gcd(int a, int b) {
  if(a < b) return gcd(b, a);
  int r;
  while ((r=a%b)) {
    a = b;
    b = r;
  }
  return b;
}

int main(){
  int a,b;
  cin >>a>>b;
  int ans=gcd(a,b);
  cout<<ans<<endl;
  return 0;
}
