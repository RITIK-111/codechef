#include<bits/stdc++.h>
using namespace std;
int reit(int no)
{
  multiset<int> digit;
  while(no!=0)
  {
    digit.insert(no%10);
    no = no/10 ;
  }
  int flag = 0 ;
  for(auto x:digit)
  {
    if(digit.count(x)>1)
    {
      flag += 1;
      break;
    }
  }
  if(flag==1)
  {
    return 0;
  }
  else
  {
    return 1;
  }
}
int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n1, n2 ;
  cin >> n1>> n2 ;
  int count = 0;
  for(auto i = n1 ; i <= n2 ; i++)
  {
    count += reit(i);
  }
  cout << count;
}
