#include<bits/stdc++.h>
using namespace std;
int ispirme(int i){
  if(i == 1)
  {
    return 0;
  }else
  {
    for(auto j = 2 ; j<sqrt(i) ;i++)
    {
      if(i%j == 0)
      {
        return 0;
        break;
      }
      return 1;
    }
  }
}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n ;
  cin >> n;
  int arr[n];
  for(auto j = 1 ; j <= n ; j++){
    if(ispirme(j)){

    }
  }

}
