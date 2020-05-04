#include <bits/stdc++.h>
using namespace std;
int N;
void dfs(vector<char> A){
    if(A.size()==N+1){
        for(int i=0;i<A.size();i++){
            cout<<A[i];
        }
        cout<<endl;
        return;
    }
    A.push_back(A.back());
    while(A.back()<='F'){
        dfs(A);
        A.back()=A.back()+1;
    }
}
int main(){
    N=5;
    dfs(vector<char>(1,'A'));
    
}
