#include<bits/stdc++.h>
using namespace std;
struct ritik{
  int x, y;
};
struct ritik1{
  int ri , ui ;
};
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  struct ritik pi = { 90,89 };//inorder to initialise the data memebers ;
  cout <<pi.x <<"\n"<< pi.y <<"\n";
  pi.x = 13;// ". is used ot acsess the structure members"
  pi.y = 15;
  cout <<pi.x <<"\n"<< pi.y <<"\n";
  struct ritik1 rit[2] ={{1,2},{3,4}};
  cout << rit[0].ui<<"\n"<<rit[0].ri<<"\n"<<rit[1].ri<<"\n"<<rit[1].ui<<"\n";
  ofstream myfile;
  myfile.open("input.txt");
  if(myfile.is_open())
  {
  myfile<<"rgujhj 0";
  }
  myfile.close();
  return 0;
}
