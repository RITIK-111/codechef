#include<bits/stdc++.h>
using namespace std;
int main(){
  int n ;
  cin >> n;
  int arr[n] ;
  for(int i = 0 ; i < n ; i++)
  {
    cin >> arr[i];
  }
  int max_so_far = INT_MIN , max_ending_here =0;
  for(int j = 0 ; j < n ; j++)
 {
   max_ending_here = max_ending_here + arr[j];
   if(max_so_far < max_ending_here){
     max_so_far = max_ending_here;
   }
   if(max_ending_here < 0){
     max_ending_here = 0 ;
   }
 }
  cout << max_so_far;

return 0;
}
