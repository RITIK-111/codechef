#include<bits/stdc++.h>
using namespace std;
int main(){
  vector<int> v = {12,34,54,76,8,0,85,23};
  multiset<int>s={13,2354,6574,5325,532535323,24,65643};
  auto i = *max_element(v.begin(),v.end());
  auto j = *min_element(v.begin(),v.end());
  auto k = accumulate(v.begin(),v.end(),0);
  auto io= accumulate(s.begin(),s.end(),0);
  auto m = *max_element(s.begin(),s.end());
  auto n = *min_element(s.begin(),s.end());
  printf("%d\t%d\t%d\t%d\t%d\t%d",i, j, k , io,m,n);
  return 0;
}
