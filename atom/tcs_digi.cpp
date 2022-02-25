#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n,k;cin>> n>>k;
  int rot = k%n;
  int arr[n];
  for(auto i = 0 ; i < n;i++)
  {
    cin>>arr[i];
  }
  cout << arr[0]<<" ";
  int k1,k3;
  k1  =k3= rot-1 ;
  while(rot--)
  {
    cout<<arr[k1++]<<" ";

  }
for(int i = 1 ; i < n-k3-1 ;i++){
    cout << arr[i];
  }
  return 0 ;
}
