#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  vector<int>w;
  int arr[]={12,34,53,43,34,345,5,45,45};
  w.assign(arr,arr+sizeof(arr)/sizeof(arr[2]));
  for(auto i :w){
    cout<< i<<"\n";
  }
  vector<char>charc;
  charc.assign({'r','t','y','u','i'});
  for(auto i:charc){
    printf("%c\n",i);
  }
  vector<int>v(10);
  v.assign(8,100);
  for(auto i = v.begin();i<v.end();i++)
  {
    cout<< *i <<"\n";
  }
  vector<int>::iterator it;
  for(it = v.begin();it<v.end();it++){
    cout << *it<<"\t";
  }
  return 0;
}
