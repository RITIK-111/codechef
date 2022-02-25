#include<bits/stdc++.h>
using namespace std;
int main(){
  int testcase ;
  cin >> testcase ;
  while(testcase--)
  {
    int p ;
    cin >> p;
    int arra[p];
    for (auto i = 0; i < p ; i++)
    {
      cin >> arra[i];
    }
    if(p == 1 )
    {
      cout<< 1 << endl;
    }
    else{
          int count = 1;
          for (auto j = 1 ; j < p ; j++)
          {
            if(arra[j-1] > arra[j] )
            {
              count = count +1;
            }
            else{
              arra[j] = arra[j-1];
            }
          }
          cout << count<< endl;
    }
  }
  return 0;
}
