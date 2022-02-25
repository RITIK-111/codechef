#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  vector<int>foo;
  int arr[] ={123,34,54,67565,534,342,25,4};
  foo.assign(arr,arr+8);
  for(auto i : foo)
  {
    cout << i;
  }
  cout<<foo.at(8);
  cout << foo.back()<<"\n";
  foo.clear();
  foo.push_back(20);
  foo.push_back(30);
  cout<<foo[1];
  int r = foo.back();
  cout << r;
  return 0;
}
