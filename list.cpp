#include<bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin>>N;
  list<int> a;
  int temp;
  for(int i=0;i<N;i++){
    cin>>temp;
    a.push_back(temp);
  }
  for(auto itr = a.begin(); itr != a.end(); ++itr) {
     cout << *itr << endl;
  }  
  return 0;
}

  
 
