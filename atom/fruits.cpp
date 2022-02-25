#include<bits/stdc++.h>
using namespace std;
int main(){
  int test;
  cin >> test;
  while(test--)
  {
    int n,m ,k ;
    cin >>n >> m>>k;
    while(k--)
    {
      if(n>m)
      {
        m+=1;
      }
      else if (m>n)
      {
        n+=1;
      }else{
        n+=1;
      }
    }
    cout <<abs(n-m)<<"\n";
    }

return 0;
}
