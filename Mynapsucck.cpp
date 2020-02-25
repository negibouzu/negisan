#include <bits/stdc++.h>
using namespace std;

int main() {
  int N,maxW;
  int W[110];
  int V[110];
  int dp[110][100010]={0};
  
  cin>>N>>maxW;
  
  for (int i=0;i<N;i++){
    cin>>W[i]>>V[i];
  }
  
  for (int i=0;i<110;i++){
    for(int sum_W=0;sum_W<100010;sum_W++){
      if(sum_W-W[i]>=0){
        dp[i+1][sum_W-W[i]]=max(dp[i+1][sum_W],dp[i][sum_W]+V[i]);
      }
      dp[i+1][sum_W]=max(dp[i+1][sum_W],dp[i][sum_W]);
    }
  }
  cout<<dp[N][maxW]<<endl;
  return 0;
}

    
  
    

  
                       
                   



  
    

  
                       
                   




    

                  
