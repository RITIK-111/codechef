#include<bits/stdc++.h>
using namespace std;
int gcd(int a ,int b){
  if( b == 0)
    return a;
  return gcd(b,a%b);
}
int prime(int i)
{
  if (i == 1 or i == 2)
  {
    return i;
  }
  for(int j = 3 ; j < int(sqrt(i));j= j+2 )
  {
    if(i % j ==0)
    {
      return 0;
    }
  }
  return i;
}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int no1, no2;
  cin >> no1 >> no2;
  int i = gcd(no1,no2);
  cout <<"The HCF and LCM of the "<< no1 <<" "<<no2<<" is "<<i<<" and "<<(no1*no2)/i<<"\n";
  cout << prime(18);
  return 0;
}
