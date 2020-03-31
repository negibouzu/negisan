#include <bits/stdc++.h>
using namespace std;

// n個の整数からいくつか選んで足し合わせてｍ個の整数がそれぞれ作れるか
//計算量は2^n


int n,A[50];
int solve( int i, int m){
  if(m==0) return 1;//作れた 
  if(i>=n) return 0;//もう材料がなくつくれない
  int res= (solve(i+1,m)||solve(i+1,m-A[i]));//A[i]を選ぶかどうか
  return res;
}

    
int main() {
  int q,M,i;
  cin>>n;
  for (i=0;i<n;i++) cin >>A[i];
  cin>>q;
  for (i=0;i<q;i++){
    cin>>M;
    if(solve(0,M)) cout<<"yes"<<endl;
    else cout<<"no"<<endl;
  }
  return 0;
}
