#include<bits/stdc++.h>
using namespace std;
int main(){
  string str;
  cin >> str ;
  str.erase(remove(str.begin() , str.end(), 'a') ,str.end());
  cout << str;
  return 0;
}
