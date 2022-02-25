#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int ln;
  cin >> ln ;
  int arr[ln];
  for(int i = 0 ; i< ln ; i++)
  {
    cin >>arr[i];
  }
  int coun;
  cin >> coun ;
  int sum = 0;
  for(int j = 0 ; j < ln ; j++)
  {
    if(arr[j] == coun )
    {
      sum+= arr[j];
    }
  }
  cout << sum ;
  return 0;
}
