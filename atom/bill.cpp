#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int p_pizza = 100 , p_puff = 20 ,p_coldink = 10;
  int n_pizz, puff , drinks;
  cin>> n_pizz >> puff >> drinks;
  printf("Bill Details\n");
  printf("No of pizzas:%d\n",n_pizz);
  printf("No of puffs:%d\n",puff);
  printf("No of cooldrinks:%d\n",drinks);
  int total = p_pizza * n_pizz + p_puff * puff + p_coldink * drinks;
  printf("Total price=%d\n",total);
  printf("ENJOY THE SHOW!!!\n");
  return 0;
}
