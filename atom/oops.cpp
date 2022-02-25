#include<bits/stdc++.h>
using namespace std;
class Vehicle{
  public:
    int fuel ;
    int capa;
    void fuelcapacity(int fuel){
      cout << "The fuel capacity is\n"<< fuel;
    }
    void capacity(int capa){
      cout << "The  capacity is\n"<<capa;
    }
    void breakappp(){
      cout << "break are applied";
    }
};
class honda:public Vehicle
{
public:
//  int fuel;
  //int capa;
  honda(){
  cout <<" details of honda are showing now\n";
}
};
int main(){
  ios_base::sync_with_stdio(0);;
  cin.tie(0);
  honda oj;
  oj.fuel = 23;
  oj.capa = 45;
  oj.breakappp();
  oj.fuelcapacity(oj.fuel);
  oj.capacity(oj.capa);
return 0 ;
}
