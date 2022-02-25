#include<bits/stdc++.h>
using namespace std;
int main(){
  int n ;cin >>n;
  int arr[n];
  for(auto i = 0 ; i< n;i++)
  {
    cin >> arr[i];
  }
  int best=0,sum = 0;
  for(auto k = 0; k < n ; k++)
  {
    sum = max(arr[k] , sum+arr[k]);
    best = max(best , sum);
  }
  printf("%d\n",best);
  return 0;
}
