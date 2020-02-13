#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  if((N==2)||(N==3)||(N==5)){
    cout<<"Prime"<<endl;
    return 0;
  } 
  if(N==1){
    cout<<"Not Prime"<<endl;
    return 0;
  }
  
  int keta[10];
  int i=1;
  while(N>0){ 
    keta[i]=N%10;
    N=N/10;
    i++;
  }
  
  int check=0;  
  for (int k=1;k<i;k++){
    check=check+keta[k];
  }
  if(!(( keta[1]==5)||(keta[1]%2==0)||(check%3==0))){
cout<<"Prime"<<endl;
    return 0;
  }
  cout<<"Not Prime"<<endl;
  
  
  return 0;
}
