#include<bits/stdc++.h>
using namespace std;
int maxm(itn array[]){
  int size  = sizeof (array) / sizeof (array[1]);
  sort(array , array+ size);
  return array[size-1]-array[1];
}
int main(){
  itn array[] = {12 ,34 ,54 ,56,65};
  int diff = maxm(array);
  return 0;
}
