#include<bits/stdc++.h>
using namespace std;
void sub_array_sum(int arr[] , int n , int sum ){
  int curnt_sum = arr[0];
  int start = 0 ;
  for(auto j = 1 ; j <= n ; j++){
    while(curnt_sum > sum && start <j-1)
    {
      curnt_sum = curnt_sum - arr[start++];
    }
    if(curnt_sum == sum )
    {
      cout << start+1 << " "<< j ;
      return;
    }
    if(j < n ){
      curnt_sum += arr[j];
    }
  }
cout << -1;
}
int main(){
  int test;
  cin >> test;
  while(test--){
    int n, sum ;
    cin >> n >> sum ;
    int arr[n];
    for(auto i = 0 ; i < n ; i++){
      cin >> arr[i];
    }
    sub_array_sum(arr , n , sum);
  }
  return 0;
}
