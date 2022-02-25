#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int  ln ;cin >> ln;
  int arr[ln];
  int sum = 0;
  for(int i= 0 ; i < ln ; i++){
    cin >> arr[i];
    sum += arr[i];
  }
 cout << sum ;
return 0;
}
