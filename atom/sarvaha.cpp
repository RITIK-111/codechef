#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  int maxNo;
  cin >> n >> maxNo;
  list<int> r1;
  int temp;
  for(int i =0 ; i < n ; i++){
    cin>>temp;
    r1.push_back(temp);
  }
  r1.sort();
  int maxSum =0 ;
  int count =0;
  while(count != maxNo){
    maxSum += r1.back();
    r1.pop_back();
    count +=1 ;
  }

  cout << maxSum << "\n";
  return 0;
}
