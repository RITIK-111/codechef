#include<bits/stdc++.h>
using namespace std ;
int main(){
  int c ;
  cin >> c;
  long int factorial = 1 ;
  for(auto i = 1 ; i <= c ; i++){
    factorial = factorial * i;
  }
  cout << factorial << endl ;
  return 0 ;
}
int fact( int no ){
  int factor = 1;
  if (no = 0){
    cout << factor ;
  }
  while (no--){
    factor = factor * no ;
  }
  cout << factor << endl ;
}
