#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  
  while(cin>>N){
    if(N==0){
      return 0;
    }
    int dp[N];
    dp[1]=1;
    dp[2]=2;
    dp[3]=4;
    if(N<4){
      cout<<1<<endl;
      continue;
    }
    for (int i=4;i<N+1;i++){
      dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
    }
    cout<<dp[N]/3650+1<<endl;
  }
  return 0;
}
