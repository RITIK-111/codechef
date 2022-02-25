#include<bits/stdc++.h>
using namespace std;
int gcd(int a , int b){
  if(a==0)
  {
    return b ;
  }
  return gcd(b%a,a);
}
int gcc_arr(int arr[], int n ){
  int result = arr[0];
  for(auto i = 1 ; i < n ; i++){
    result = gcd(result , arr[i]);
    if(result == 1)
    {
      return 1;
    }
  }
  return result;
}
int main(){
  int y ;
  cin >>  y ;
  int arr[y];
  for(auto k = 0; k < y ; k++)
  {
    cin >> arr[k];
  }

  cout<<gcc_arr(arr , y);
  return 0;
}
