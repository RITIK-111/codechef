#include"bits/stdc++.h"
using namespace std;
int main(){
   int no;
   char ref,coup,circ;
   cin >>no>>ref >>coup>>circ;
   if(no > 40 or no < 5)
   {
     printf("Minimum of 5 and Maximum of 40 Tickets\n");
     return 0;
   }
   if(circ !='k' or circ!='q')
   {
     printf("Invalid Input\n");
     return 0 ;
   }


 }
