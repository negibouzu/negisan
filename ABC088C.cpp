#include <bits/stdc++.h>
using namespace std;

int main(){
  int C[3][3];
  for (int i=0;i<3;i++){
    for (int j=0;j<3;j++){
      cin>>C[i][j];
    }
  }
  int flagA=1;
  int flagB=1;
  if(!((C[0][1]-C[0][0]==C[1][1]-C[1][0])&&(C[0][1]-C[0][0]==C[2][1]-C[2][0]))){
    flagA=0;
  }
  if(!((C[0][1]-C[0][2]==C[1][1]-C[1][2])&&(C[0][1]-C[0][2]==C[2][1]-C[2][2]))){
    flagA=0;
  }
  
  if(!((C[1][0]-C[0][0]==C[1][1]-C[0][1])&&(C[1][0]-C[0][0]==C[1][2]-C[0][2]))){
    flagB=0;
  }
  if(!((C[1][0]-C[2][0]==C[1][1]-C[2][1])&&(C[1][0]-C[2][0]==C[1][2]-C[2][2]))){
    flagB=0;
  }
  
  if((flagA==1)&&(flagB==1)){
    cout<<"Yes"<<endl;
    return 0;
  }
  cout<<"No"<<endl;

  return 0;
}
  
