#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(NULL);
  cin.tie(NULL);
  char arr[16][10]={"break", "case", "continue", "default", "defer", "else", "for","func", "goto", "if", "map", "range", "return", "struct", "type", "var"};
  char str[20];
  cin >> str;
  int flag = 0 ;
  for (int i = 0 ; i < 16 ; i++){
    if (strcmp(str,arr[i])==0)
    {
       flag = 1;
       break;
    }
  }
  if(flag == 1)
  {
    cout << str << "  is a keyword"<<"\n";
  }
  else{
    cout << str<< " is not keyword"<<"\n";
  }

return 0;
}
