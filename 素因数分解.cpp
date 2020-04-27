#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a,long long b){
    if(a < b)swap(a,b);
    if(b == 0)return a;
    if(a%b==0)return b;
    else return gcd(b, a % b);
}

vector<pair<long long,int>> pf(long long n) {
  vector<pair<long long,int>> res;
  for (long long i = 2; i*i <= n; i++) {
    if (n%i !=0) continue;
    res.emplace_back(i,0);
    while (n%i == 0) {
      n = n / i;
      res.back().second++;
    }
    //cout<<i<<endl;
  }
  if (n != 1) res.emplace_back(n,1);
  return res;
}

int main(){
  long long A,B,temp,ans;
  cin>>A>>B;
  ans=0;
  temp=gcd(A,B); //A,Bの最大公約数を計算 
  //cout<<"gcd"<<temp<<endl;
  auto f=pf(temp);
  ans=f.size()+1;
  cout<<ans<<endl;
  //for(auto i=0;i<f.size();i++){
  //  cout<<f[i].first<<" "<<f[i].second<<endl;
  //}
      
  return 0;
}
