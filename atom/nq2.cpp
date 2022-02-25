#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(NULL);
  cin.tie(0);
  char str[100];
  cin >> str;
  int sum = 0 ,intr=0;
  string s,temp = "";
  for(int i = 0 ; i <= strlen(str);i++)
  {
    if (isdigit(str[i]))
    {
      temp += str[i];
    }
    else
    {
      stringstream geek(temp);
      int intr = 0;
      geek >> intr;
      sum += intr;
      temp = "";
    }
  }
cout << sum ;
  return 0;
}
