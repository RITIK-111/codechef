#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  string plaintext;
  cin >> plaintext;
  string keyword ;
  cin >> keyword;
  int kl =keyword.length();
  for(int i = 0 ; i < plaintext.length();i++)
  {
    char c = (((plaintext[i] % 65)+(keyword[i%kl]%65))%26)+65;
    cout << c ;
  }
  return 0;
}
