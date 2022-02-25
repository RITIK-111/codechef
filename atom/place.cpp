#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int no_cse, no_ece, no_mec;
  cin>> no_cse>>no_ece>>no_mec;
  if(no_cse < 0 or no_ece < 0 or no_mec < 0){
    printf("Input is Invalid\n");
    return 0;
  }
  if((no_cse == no_ece) and (no_mec == no_ece)){
    printf("None of the department has got the highest placement\n");
  }
  if(no_cse > no_mec and no_cse > no_ece){
    printf("CSE\n");
    return 0;
  }
  if(no_cse < no_mec and no_mec> no_ece){
    printf("MECH\n");
    return 0;
  }
  if(no_ece > no_mec and no_cse < no_ece){
    printf("ECE\n");
    return 0;
  }
  if(no_cse > no_ece and no_cse == no_mec){
    printf("CSE\nMECH");
    return 0;
  }
  if(no_cse > no_mec and no_cse == no_ece){
    printf("CSE\nECE");
    return 0;
  }
  if(no_mec > no_cse and no_mec == no_ece){
    printf("ECE\nMECH");
    return 0;
  }
return 0;
}
