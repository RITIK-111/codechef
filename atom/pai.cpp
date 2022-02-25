#include<bits/stdc++.h>
using namespace std;
bool prime(int a)
{
  int i = a;  int flag = 0;
  if(i < 0 or i ==1)
  {
    return false;
  }
  else
  {
    for(int j = 2 ; j <= i/2;j++)
    {
      if(i%j==0)
      {
        flag+=1;
      }
    }
  }
  if(flag == 0 )
  {
    return true;
  }else{
    return false;
  }

}
int paiir(int a , int b )
{
  if(prime(b))
  {
    return 1;
  }
}
int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int lwr,upr;cin >> lwr>>upr;
  int count = 0;
  for(int i = lwr ; i <= upr ; i++)
  {
    if(prime(i))
    {
      count +=paiir(i,i+6);
    }
  }
  cout << count;
return 0;
}
