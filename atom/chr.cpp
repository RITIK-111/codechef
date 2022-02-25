#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int lwr,upr ; cin >>lwr>>upr ;
  int count  = 0 ;
  for(int i =lwr;i<=upr;i++)
  {
    bool visited[10]={false};
    int num = i ;
    while(num){
      if(visited[num%10])
      {
        break;
      }
      visited[num%10]=true;
      num = num /10;
    }
    if (num==0)
    {
      count+=1;
    }
  }
  if(count > 0 )
  {
    cout <<count;
  }
  else{
    cout << "No unique Number";
  }
  return 0 ;
}
