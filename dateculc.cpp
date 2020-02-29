#include <bits/stdc++.h>
using namespace std;

bool leap(int year){
    return (!(year%4)&&year%100||!(year%400));
}
int main(){
  int y,m,d,t;
  char ch;
  int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    cin>>y>>ch>>m>>ch>>d;
    if (leap(y))
    a[2]++;
    while (y%(d*m))
    {
        ++d;
        if (d>a[m]){
            m++;
            d=1;
        }
        if (m>12){
            ++y;
            m=1;
        }   
    }
    cout<<y<<'/'<<m/10<<m%10<<'/'<<d/10<<d%10<<endl;
    return 0;
}
