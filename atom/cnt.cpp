#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n , k;
  cin >> n >> k;
  int arr[n];
  for(auto i = 0 ; i < n ; i++)
  {
    cin >> arr[i];
  }
  int min_r;
  int max_r;
  int real = 0;
  for(auto j = 0 ; j< n ; j++)
  {
    min_r= arr[j]-k;
    max_r = arr[j]+k;
    int count = 0;
    for(int k = 0; k<n;k++)
    {
      if(arr[k] >= min_r and arr[k] <= max_r)
      {
        count+=1;
        if(count>=2)
        {
          real+=1;
            break;
        }

      }
    }
  }
  cout << real ;
  return 0;
}
