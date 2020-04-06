#include <bits/stdc++.h>
using namespace std;

long long A,B,X;

int GetDigit(long long num){
    int digit=0;
    while(num!=0){
        num /= 10;
        digit++;
    }
    return digit;
}

int binarySearch(long long X){
    long long left=0;
    long long right = 1000000001;
    while(right - left > 1){
        long long m = (left + right) / 2;
        if( (A*m+B*GetDigit(m))>X){
          right = m;
      //cout<<m<<" "<<left<<" "<<right<<endl;
        }
        else left = m;
    }
    return left;
}

int main() {

  cin>> A>>B>>X;
  long long ans=binarySearch(X);
  cout<<setprecision(19)<<ans<<endl;
  return 0;
}

