#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  float no_lit , distance , gallon , mile , average, ave_ame;
  cin >> no_lit >> distance;
  if (no_lit <=0){
    printf("%f is not valid\n",no_lit);
    return 0;
  }else if(distance <=0 ){
    printf("%f is not valid \n",distance);
    return 0;
  }
  gallon = no_lit * 0.2642;
  mile = distance * 0.6214;
  average = (no_lit * 100 )/distance;
  ave_ame = mile / gallon;
  printf("%.2f \t %.2f\n", average ,ave_ame );
  return 0;
}
