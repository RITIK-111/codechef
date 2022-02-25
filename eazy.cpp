#include <bits/stdc++.h>

using namespace std;
int polycal(int j[], int x){
    int exact =0;
    for (int i = 0 ; i < sizeof(j)/sizeof(j[0]) ; i++ ){
        exact = exact + pow(x,i)* j[i];
    }
    return exact % 998244353;
}
int main()
{   int n,m,a,d;
    cin >> n >> m >> a >> d;
    int j[m+1];
    for(int i  = 0 ;  i<=m+1 ; i++){
        cin >> j[i];
    }
    for (int i = 1 ; i< n+1 ; i++){
        int  x = a + (i-1)*d;
        cout << polycal(j ,x );
    }
    
} 
