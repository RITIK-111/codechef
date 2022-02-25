#include<bits/stdc++.h>
using namespace std;
int main(){
    int m ,n ;
    cin >> m >> n ;
    while(m % n != 0){
        int r = m%n ;
        m = n ;
        n = r;
    }
    cout << n << endl;
    return 0;
}