#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n ; cin >> n ;
    int nU[n];
    for (auto i = 0; i < n ; i ++ ){
        cin >> nU[i];
    }
  //  for (auto i = n ; i >= 0 ; i++){
    //    cout << nU[i];
    cout << nU[-1] << endl;
    return 0;
}
