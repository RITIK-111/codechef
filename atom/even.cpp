#include<bits/stdc++.h>
typedef long long int lld;
#define mod 1000000007
using namespace std;
bool pali(string s){
  if(s.length()==1) return true;
  string s1 = s ;
  reverse(s1.begin() , s1.end());
  return (s1==s);
}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  string s1,s2,s3 ,s;
  cin >> s;
  auto l = s.length();
  for(int i = 1 ; i < s.length(); i++)
  {
    s1= s.substr(0,i);
    if(pali(s1))
    {
      for(int j= 1 ; j < l-i ; j++)
      {
        s2 = s.substr(i,j) ;
        s3 = s.substr(i+j,l-i-j);
        if(pali(s2) && pali(s3))
        {
          cout << s1<<"\n"<< s2 <<"\n"<< s3<<"\n" ;
           return 0 ;
        }
      }
    }
  }
  cout << "imposible" ;
  return 0;
}
