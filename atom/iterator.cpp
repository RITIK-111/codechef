#include<vector>
#include<iostream>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  vector<int> v = {12,32,43,43,12};
  for(vector<int>::iterator it = v.end()-1 ; it != v.begin()-1 ; it-- ){
    cout << *it <<"\t";
  }
  return 0;
}
