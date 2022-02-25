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

  for(itr = s1.begin() ; itr!= s1.end()  ; ++itr)
  {
    if (count < n)
    {
      arr[count] = *itr;
      count+=1;
    }else
    {
      arr1[count-n] = *itr;
      count+=1;
    }
    }
  cout << "arr[] = ";
  for(int i =  0 ;  i < n ; i++){
    cout << arr[i] << " ";
  }
  cout <<"\n" <<"arr1[] = ";
  for(int i =  0 ;  i < m ; i++){
    cout << arr1[i] << " ";
  }
return 0;
  }
