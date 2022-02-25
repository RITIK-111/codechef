#include<bits/stdc++.h>
using namespace std;
int main(){
  int n ; cin >> n;
  int arr[n];
  for(int i = 0  ; i < n ; i++){
    cin >> arr[i];
  }
  sort(arr, arr+n);
   int first = arr[0];
   int second = arr[1];
   int third = arr[2];
   int count=0;
   int i = 2;
  while(i != n){
    if(first+ second == third)
    {
      count +=1;
    }
    i++;
    first = second ;
    second = third ;
    third = arr[i];

  }
  return count;
  return 0 ;
}
