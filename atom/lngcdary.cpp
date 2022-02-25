#include<bits/stdc++.h>
using namespace std;
void amxmra(int arr[] , int n ){
  int len = 0;
  for(auto i = 0; i < n ; i++)
  {
    int gcc = 0 ;
    for(auto j = i ; j < n ; j++)
    {
      gcc = __gcd(gcc , arr[j]);
      if(gcc > 1)
      {
        len = max(len ,j-i+1);
      }else
      {
        break;
      }
    }
  }
  printf("%d\n",len);
}
int main(){
  int n ;
  cin >> n;
  int arr[n];
  for(auto i  = 0 ; i < n ; i++)
  {
    cin >> arr[n];
  }
  amxmra(arr, n);
  return 0;

}
