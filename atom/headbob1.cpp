#include<bits/stdc++.h>
using namespace std;
int main(){
  int testcase;
  cin >> testcase ;
  while(testcase--){
    int n ;
    cin >> n ;
    string c1; cin >> c1;
    string c_ind = "I";
    string c_not = "Y";
    size_t found1 = c1.find(c_ind);
    size_t found2 = c1.find(c_not);
    if(found1 != string::npos){
      cout << "INDIAN" << endl;
    }else if (found2 != string::npos){
      cout << "NOT INDIAN"<< endl;
    }else{
      cout << "NOT SURE" <<endl ;}}
    return 0 ;}
