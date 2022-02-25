#include<bits/stdc++.h>
using namespace std;
bool contnin(string s)
{
   int count = 0;
   for(unsigned int i= 0;i<sizeof(s);i++)
   {
     if(s[i]==57)
     {
       count +=1;
     }
   }
   if(count==0)
   {
      return 1;
   }
}

int mai(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int test;
  cin >> test;
  while(test--)
  {
    char str[100];
    cin >> str;
    string st ="";
    for(int i = 0 ; i< strlen(str);i++)
    {
      if(str[i]!=32)
      {
      st = st + str[i];
      }
      else
      {
        if(contnin(st))
        {
          cout << st;
          st ="";
        }
      }
    }
  }
  return 0;
}
