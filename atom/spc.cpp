#include<bits/stdc++.h>
using namespace std;
int digi(string s,int flag,int large)
{
    if(isdigit(s[0]) && flag != 1)
    {
      int n ;
      stringstream rii(s);
      rii >> n;
      if(n > large)
      {
        large = n;
      }
    }
    return large ;
}
int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  string str;
  getline(cin,str);
  int lent = str.length();
  string s ="";
  int large = 0;
  int flag = 0;
  for(int i  = 0 ; i <lent; i++)
  {
    if(str[i] != ' ')
    {
       s = s+str[i];
      if(str[i] == '9')
      {
        flag = 1;
      }
  }
    else
    {
      large = digi(s,flag,large);
      s= "";
    }
  }
  cout<< digi(s,flag,large);
  return 0 ;
}
