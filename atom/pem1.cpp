#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int len;
  int start ;
  int end;
  cin >> len>> start>> end;
  int arr[len];
  for(int i = 0 ; i< len; i++){
    cin >> arr[i];
  }
  for(int i =0 ; i < len ; i++)
  {
    if(arr[i]>=start && arr[i]<end)
    {
      cout <<i<<" ";
    }
  }
  return 0;}
