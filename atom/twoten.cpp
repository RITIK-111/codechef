#include<bits/stdc++.h>
using namespace std;
int main(){
  int test; cin >> test;
  while(test--){
    long long int x;
    cin>>x;
    if(x%10 == 0) cout<< 0 <<'\n';
    else if(x%10==5) cout <<1<<"\n";
    else cout <<-1<<"\n";
  }
}
