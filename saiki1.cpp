#include <bits/stdc++.h>
using namespace std;

int tasu(int n){
  if(n==0) return 0;
  return n+tasu(n-1);
}

int main(){
  int n;
  cin>>n;
  cout<<tasu(n)<<endl;
  return 0;
}
