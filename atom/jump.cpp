#include<bits/stdc++.h>
using namespace std ;
int main(){
  long long int a ;
  cin >> a ;
  int remain = a%6;
  if(remain == 1 or remain == 3 or remain == 0)
  {
    cout << "yes" ;
  }else{
    cout << "no";
  }
  return 0;
}
