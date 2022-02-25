#include<bits/stdc++.h>
using namespace std;
int main(){
  char string1[20];
  int i, length;
  int flag =0 ;
  cin >> string1;
  length = strlen(string1);
  for(auto i =0 ; i<length ; i++){
    if(string1[i] != string1[length-i-1]){
      flag  =1 ;
      cout << "Not paliindrome"<<"\n";
      break;
    }
  }if( flag ==0){
    cout<<"paliindrome"<<"\n";
  }
  return 0;
}
