#include<bits/stdc++.h>
using namespace std;
int main(){
  int testcase;
  cin >> testcase ;
  while(testcase--){
    int n ;
    cin >> n ;
    string c1; cin >> c1;
    int count_i = 0 ; int  count_y = 0;
    for(auto i = 0; i < c1.length() ; i++)
    {
      if (c1.at(i)=='Y')
      {
          count_y+=1;
          break;
      }else if(c1.at(i) == 'I')
      {
          count_i+=1;
          break;
      }
    }
    if(count_i > 0 and count_y == 0 )
    {
      cout << "INDIAN"<<endl;
    }
    else if(count_y >0 and count_i == 0)
    {
      cout << "NOT INDIAN" << endl ;
    }
    else
    {
      cout << "NOT SURE" << endl;
    }

    }
    return 0 ;
  }
