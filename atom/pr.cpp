#include<bits/stdc++.h>
using namespace std;
int main(){
   for (auto i = 0 ; i <= 10000 ; i++){
     if(i % 15 ==0){
       cout << "Raja Software"<< endl ;
     }
     if (i % 3 == 0 ){
       cout << "Raja "<<endl ;
     }
     if (i % 5 == 0){
       cout << "Software"<<endl;
     }
   }
   return 0 ;
}
