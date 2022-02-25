#include<bits/stdc++.h>
using namespace std;
void  outpu(int arra_1[])
{
  int size = sizeof(arra_1)/sizeof(arra_1[0]);
  for (auto i = 0 ; i < size ;i++)
  {
    if (arra_1[i] % 5 == 4)
    {
      cout << arra_1[i];
    }
  }
}
int main(){
  int arra_1[] = {19 ,10 ,44, 3 ,11 ,129};
  outpu(arra_1);
  return 0 ;
}
