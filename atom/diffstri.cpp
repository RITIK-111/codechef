#include<bits/stdc++.h>
using namespace std;
int main(){
  int test;
  cin >> test;
  while(test--)
  {
    string new1 ,new2;
    cin >> new1 >> new2;
    int count =0 ;
    for(int i =0 ; i < new1.length() ; i++){
      if(new1[i] == new2[i] ){
        count +=1;
      }
    }
    cout << count << " " << new1.length() <<"\n";

  }
  return 0;
}
