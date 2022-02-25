#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  string str ;
  getline(cin , str);
  vector<char> new1(str.length());
  copy(str.begin(), str.end(), new1.begin());
  for( char c:new1){
    if(c == ' '){
      cout<<".xyz.";
    }
    else{
      cout<<c;
    }
  }
  return 0;
}
