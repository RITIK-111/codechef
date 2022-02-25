#include<bits/stdc++.h>
using namespace std ;
int main(){
  int n ;
  cin >> n ;
  int attay_[n];
  for(int i = 0 ; i < n ; i ++)
  {
    attay_[i] = rand();
  }
  for(int i = 0 ; i < n ; i ++)
  {
    cout << attay_[i]<<endl ;
  }

  return 0;
}
