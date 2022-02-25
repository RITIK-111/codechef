#include<bits/stdc++.h>
using namespace std;
int gcd(int m, int n);
void iseven(int nu);
int lcm(int m , int n);
int main(){
    int a=4364 ,b=9005 ;
    cout << gcd(34,59) << endl;
    cout << gcd(a,b) << endl ;
    iseven(7) ;
    cout << lcm(345,786);
    return 0;
}
void iseven(int nu){
    if (nu % 2 == 0 )
        cout << "yes"<< endl;
    else
        cout << "NO" << endl; 
}
int gcd(int m , int n){
    while(m %n != 0){
        int r = m%n ;
        m = n ;
        n = r;
    }
    return n;
}
int lcm(int m , int n  ){
    return m*n/gcd(m, n);
}
