#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  long long int n,k ;
  cin >> n >>k ;
  int arr[n];
  for(auto i = 0 ; i < n ; i++)
  {
    cin >> arr[i];
  }
  sort(arr,arr+n,greater<int>());
  int j = 1;
  while(k--)
  {
    if(arr[j-1] > arr[j])
    {
     arr[j-1] = floor(arr[j-1]/2);
     j = 1;
   }
   else
   {
     arr[j] = floor(arr[j]/2);
     j=j +1;
   }
  }
  int sum =0;
  for(int j = 0; j < n ; j++)
  {
    sum += arr[j];
  }
cout << sum ;
  return 0;
}
