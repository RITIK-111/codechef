#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int test ;
  cin >> test;
  while(test--)
  {
    int n , sum = 0 ;
    cin >> n;
    int rank[n];
    for(auto i = 0; i < n ; i++)
    {
      cin >> rank[i];
    }
    sum = 1;
    int gift = 1;
    for(int i =1; i < n ; i++)
    {
      if(rank[i-1]<rank[i])
      {
        gift = gift+1;
        sum = sum+gift;
      }
      else
      {
        gift = 1;
        sum = sum + gift;
      }
    }
    printf("%d\n",sum );  }
return 0;
}
