#include<bits/stdc++.h>
using namespace std;
int main(){
  int n1,n2,n3 ;
  cin >> n1 >> n2 >> n3 ;
  int arra1[n1],arra2[n2],arra3[n3];
  vector<int>aaa;
  int t = max ( n1 , n2);
  t = max(t,n3);

  for (auto i = 0 ; i < n1 ; i++){
    cin >> arra1[i];
    aaa.pushback(arra1[i]);
  }
  for (auto i = 0 ; i < n2 ; i++){
    cin >> arra2[i];
    aaa.pushback(arra2[i]) ;
  }
  for (auto i = 0 ; i < n3 ; i++){
    cin >> arra3[i];
    aaa.pushback(arra3[i]);
}
for(int i : copy){
  if(count(list.begin() ,list.end() ,i) >= 2)
  {
    lat.push_back(i);
    //remove(list.begin(),list.end(),i);
  }
}
cout << lat.size()<<endl;
for(int j : lat){
  cout << j <<endl;
}
  return 0 ;
}
