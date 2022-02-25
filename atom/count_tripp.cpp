#include<bits/stdc++.h>
using namespace std;
int main(){
  int n ;
  cin >> n;
  set<int> s1;
  int temp =0 ;
  for(int i = 0 ; i < n ;i++){
    cin >> temp;
    s1.insert(temp);
  }
  int count =0 ;
  set<int>::iterator itr ;
  int first = *itr ;
  itr++;
  int second = *itr;
  itr++;
  for(itr = advance(s1.begin() , 3); itr!= s1.end() ; itr++){
     cout << *itr;
  }

  return 0;

}
