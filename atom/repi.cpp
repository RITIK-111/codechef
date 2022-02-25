#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int temp,n1;
  cin >> temp;
  n1 = temp;
  multiset<int> digit;
  while(n1!=0)
  {
    digit.insert(n1%10);
    n1 = n1/10;
  }
  int flag = 0;
  for(auto x:digit)
  {
    if(digit.count(x) > 1)
    {
      flag += 1 ;
      break;
    }
  }
  if(flag!=0)
  {
    printf("Digit contain repiting digit %d",temp);
  }else
  {
    printf("Digit does not contain repiting digit %d",temp);
  }


  return 0;
}
