#include<bits/stdc++.h>
using namespace std;
int main(){
  int n1,n2,n3 ;
  cin >> n1 >> n2 >> n3 ;
  vector<int> list={23,30,42,57,90,21,23,35,57,90,92,21,23,30,57,90} ,copy,lat;
  //int t;
  //for(auto i = 0 ;i < (n1+n2+n3) ;i++)
  //{
  //  cin >> t ;
  //  list.push_back(t);
// }
 if (n1 > n2 and n1 > n3)
 {
   for(auto i =list.begin() i < list.begin()+n1 ;i++ ){
   //for(int i : list(list.begin(), list.begin()+n1)){
     if(count(list.begin()+n1 ,list.end() ,i) >= 1)
     {
       lat.push_back(i);
       remove(list.begin(),list.end(),i);
     }
   }
   cout << lat.size()<<endl;
   for(int j : lat){
     cout << j <<endl;
   }

 }else if (n2 > n2 and n2 > n3)
 {
    for(auto i =list.begin()+n1; i < list.begin()+n1+n2 ;i++ ){
   //for(int i : list(list.begin()+n1, list.begin()+n1+n2)){
     if(count(list.begin()+n1 ,list.end() ,i) >= 1)
     {
       lat.push_back(lista.at(

       ));
       remove(list.begin(),list.end(),i);]
     }
   }
   cout << lat.size()<<endl;
   for(int j : lat){
     cout << j <<endl;
   }

 }else (n3 > n2 and n3 > n1)
 {
   for(auto i =list.begin()+n1+n2 i < list.end() ;i++ )
   //for(int i : list(list.begin()+n1+n2, list.end()))
   {
     if(count(list.begin() ,list.end()-n3 ,i) >= 1)
     {
       lat.push_back(i);
       remove(list.begin(),list.end(),i);
     }
   }
   cout << lat.size()<<endl;
   for(int j : lat){
     cout << j <<endl;
   }

 }
  //copy = list;
  //sort(copy.begin(), copy.end());
  //auto last = unique(copy.begin() , copy.end());
  //copy.erase(last ,copy.end());
  //for(int h : copy){
    //cout<<h;
  //}
  for(int i : copy){
    if(count(list.begin() ,list.end() ,i) >= 2)
    {
      lat.push_back(i);
      remove(list.begin(),list.end(),i);
    }
  }
  cout << lat.size()<<endl;
  for(int j : lat){
    cout << j <<endl;
  }
  return 0;
}
