#include<bits/stdc++.h>
using namespace std;
int main(){
  int n , m;
  cin >> n >> m;
  int arr[n],arr1[m];
  for(int i = 0 ; i< n ; i++){
    cin >> arr[i];
  }
  for(int i = 0 ; i< m ; i++){
    cin >> arr1[i];
  }
  set<int>s1;
  for(int i = 0 ; i < n ; i++){
    s1.insert(arr[i]);
  }
  for(int i = 0 ; i < m ; i++){
    s1.insert(arr1[i]);
  }
  int count = 0;
  set<int>::iterator itr;
  itr = s1.begin();
  cout << "arr[] = ";
  while (count < n ) {
    cout << *itr <<" ";
    itr++;
    count+=1;
  }
  cout <<"\n"<<"arr1[] = ";
  while(itr != s1.end()){
    cout <<*itr<<" ";
    itr++;
  }
return 0;
  }
