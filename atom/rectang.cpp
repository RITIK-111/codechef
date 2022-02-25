#include<bits/stdc++.h>
using namespace std;
int main(){
  int test;
  cin >> test;
  while(test--){
    int a,b,c,d;
    cin >> a>>b>> c>>d;
   if((a ==b and c ==d) or (a==c and b ==d) or (b==c and a ==d ))
   {
      cout<<"YES" <<"\n";
    }
    else {
      cout << "NO"<<"\n";
    }
  }
return 0;
}
