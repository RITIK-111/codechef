#include<bits/stdc++.h>
using namespace std;
int main(){
  int testcase ;
  cin >> testcase ;
  while(testcase--)
  {
    string str1,str2;
    cin >> str1 ;
    cin  >>  str2;
    int count = 0;
    int len1 = str1.length();
    int len2 = str2.length();
    if(len2 > len1 )
    {
     for (auto i = 0 ; i <len1 ; i++)
     {
       for(auto j = 0 ; j < len2 ; j++)
       {
          if(str1.at(i) == str2.at(j))
          {
            count+=1;
            break;
          }
       }
     }
   }else
   {
     for (auto i = 0 ; i <len2 ; i++)
     {
       for(auto j = 0 ; j < len1 ; j++)
       {
          if(str2.at(i) == str1.at(j))
          {
            count+=1;
            break;
          }
       }
     }
   }
 cout << count <<endl;
   }
  return 0 ;
}
