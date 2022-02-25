#include<bits/stdc++.h>
using namespace std;
class Gek
{
 public:
   int id;
   string name;
   void printna ()
   {
     cout << "Praise uou ritik "<< name<<"\n" ;
   }
   Gek()
   {
     cout <<"praiseyou brother \n";
   }
   Gek(string name)
   {
     cout << "praise you "<< name  << "time ";
   }
   ~Gek(){
     cout << " I am  coming inside your house ";
   }
};
int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  Gek obj;
  obj.name = "ritu ";
  obj.printna();
  obj.id = 4 ;

  return 0 ;
}
