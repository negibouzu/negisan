#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >>N;
  vector <int> a(N);
  for(int i=0;i<N;i++){
    cin>>a[i];
  }
  do{
    for(int i=0;i<N;i++){
      cout<<a[i]<<" ";
    }
    cout<<endl;
  }
  while(next_permutation(a.begin(),a.end()));
  return 0;
}


        
