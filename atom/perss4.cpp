#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int arr[] ={1,2,3,4,5,6,7,8,9,0};
  int num ; cin >> num;
  if(num % 2==0)
  {
    for(int i = 0 ; i <= num ; i++){
      if (arr[i]%2 == 0){
        printf("%d ",arr[i]);
      }
    }
  }
  else
  {
    for(int i = 0 ; i <= num ; i++){
      if (arr[i]%2 != 0){
        printf("%d ",arr[i]);
      }
    }
  }
return 0;
}
