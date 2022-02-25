#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n ;
  cin >> n;
  vector<int>bit;
  int i = 0 ;
  while(n>0){
    bit.push_back(n%2);
    n = n /2;
  }
  for(auto itr = bit.rbegin() ; itr !=bit.rend() ;itr++){
    cout<<*itr;
  }

    return 0;
}
