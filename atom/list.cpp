#include<list>
#include<iostream>
#include<iterator>
using namespace std;
int main()
{
  list<int >r1;
  for (int i = 1; i < 11 ;i++){
    r1.push_back(i*3);
  }
  list <int>::iterator itr ;
  for (itr =r1.begin();itr != r1.end() ; itr++){
    cout << *itr<<"\n";
  }
  for(itr = r1.begin() ; itr!= r1.end() ;itr++){

  }
  cout << "THe front of the list := "<<r1.front()<<"\n";
  cout << "THe front of the list := "<<r1.back()<<"\n";
  return 0;
}
