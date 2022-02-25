#include<bits/stdc++.h>
using namespace std;
void fibbonacci(int no)
{
  auto first = 0,second = 1;
  //cout << first << endl << second << endl ;
  no = no - 2 ;
  int temp = 0 ;
  while (no--)
  {
    temp = first + second ;
    //cout << temp << endl;
    first  = second ;
    second = temp ;
    //no -=1 ;
  }
  cout << temp << endl;
}

int main() {
  int n ;
  cin >> n ;
  fibbonacci(n);
  return 0;
}
