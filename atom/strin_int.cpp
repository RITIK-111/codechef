#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(NULL);
cin.tie(0);
char str[1000];
cin >> str;
vector<char>newss;
char space[] = " ";
for(int i =0 ; i<strlen(str);i++){
  if(65<=str[i] && str[i]<=90)
  {
    newss.push_back(space[0]);
    newss.push_back(str[i]+32);

}else{
  newss.push_back(str[i]);
}
}
int count = 1;
for(unsigned int i = 0;i<newss.size();i++)
{
  if(count == 1)
  {
  count = 0 ;
}else{
  cout << newss[i];
}
}
return 0;
}
