#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  set<int  > s1;
  s1.insert(40);
  s1.insert(404);
  s1.insert(402);
  s1.insert(430);
  s1.insert(440);
  s1.insert(403);
  set<int>::iterator itr;
  for(itr = s1.begin() ; itr!=s1.end() ;itr++){
    cout << *itr<<"\n";
  }
  itr  = s1.begin();
  advance(itr , 2);
  cout << *itr<<"\n";
  set<int>s2(s1.begin(),s1.end());
  itr = s2.begin();
  advance(itr , 3);
  cout << *itr <<"\n";
  itr = s2.find(403);
  cout<<*itr;

  return 0;
}
