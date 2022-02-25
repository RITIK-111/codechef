#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int a = 1 ;
  int b = 1 ;
  int index ;
  cin >> index;
  index = index - 2;
  int num ;
  while(index--)
  {
     num = a+b;
     a = b ;
     b = num;
  }
  cout << num ;
}
