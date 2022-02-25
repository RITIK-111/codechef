#include<bits/stdc++.h>
using namespace std;
int main() {
  vector<int>vi={12,342,122,324,14,3346,5,664};
  sort(vi.begin(),vi.end());
  for(auto i : vi){
    cout << i<<" ";
  }
  cout <<"\n";
  reverse(vi.begin() , vi.end());
  for(auto i : vi){
    cout << i<<" ";
  }
  cout <<"\n";
  random_shuffle(vi.begin(),vi.end());
  for(auto i : vi){
    cout << i<<" ";
  }
return 0;
}
