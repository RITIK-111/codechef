#include"bits/stdc++.h"
using namespace std;
int main(){

  list<int> r1;
  while(cin >> x){
    r1.push_back(x);
  }
  list<int>::iterator itr;
  for(itr  = r1.begin(); itr != r1.end() ; itr++){
    cout << *itr<<"\n";
  }
  return 0;
}
