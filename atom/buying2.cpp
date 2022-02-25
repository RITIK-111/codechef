#include<bits/stdc++.h>
using namespace std ;
 int main(){
   int testcase ; cin >> testcase ;
   while(testcase--)
   {
     long long int n ;
     int k ;
     cin >> n >> k ;
     int arra[n];
     int sum = 0 ;
     for (auto i = 0 ; i < n ; i++)
     {
       cin >> arra[i];
       sum += arra[i];
     }
      int remain = sum % k ;
     if( remain == 0)
     {
       cout << sum /k <<endl ;
     }else
     {
       int count = 0;
       for(auto i = 0 ; i < n ; i++ )
       {
         if(remain >= arra[i])
         {
           count+= 1;
         }
       }
       if (count > 0)
       {
         cout << "-1" << endl ;
       }else
       {
         cout << sum/k<< endl;
       }
     }
   }
   return 0 ;
 }
