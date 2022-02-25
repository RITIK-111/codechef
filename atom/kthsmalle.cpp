#include<bits/stdc++.h>
using namespace std ;
void kth_small(int arr[] , int n , int k)
{
  sort(arr,arr+n);
  cout<<arr[k-1];
}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int test ;
  cin >> test ;
  while(test--){
    int n , k ;
    cin >> n >> k ;
    int arr[n];
    for(int i = 0 ; i < n ; i++)
    {
      cin >> arr[i];
    }
    kth_small(arr ,n,k);
  }
return 0 ;
}
