#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  int maxNo;
  cin >> n >> maxNo;
  list<int> r1;
  int temp;
  for(int i =0 ; i < n ; i++){
    cin>>temp;
    r1.push_back(temp);
  }

  int f,s;
  list<int>r2;
  f = r1.front();
  r1.pop_front();
 while(!r1.empty())
 {
   s =  r1.front();
   if(f > s)
   {
     r2.push_back(s);
     r1.pop_front();
   }else
   {
     r2.push_back(f);
     f = s;
     r1.pop_front();
   }
 }
 while(!r2.empty()){
   cout << r2.front()<<"\n";
   r2.pop_front();
 }
  return 0;
 }
