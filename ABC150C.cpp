#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector <int> a(N);
  vector <int> b(N);
  vector <int> c(N);
  int A,B;
  for (int i=0;i<N;i++){
    cin>>a[i];
  }
  for (int i=0;i<N;i++){
    cin>>b[i];
  }
  for (int i=0;i<N;i++){
    c[i]=i+1;
  }
  int count=0;
    do{
          if(c==a){
            A=count;
          }
          if(c==b){
            B=count;
          }
          count++;
        }while(next_permutation(c.begin(),c.end()));
  cout<<abs(B-A)<<endl;
    return 0;
}
