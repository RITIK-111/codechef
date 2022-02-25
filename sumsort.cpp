#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{   
    int test_case;
    cin >> test_case;
    while(test_case){
        long long int N ; cin >> N ;
        long long a[N];
        for(int i= 0 ; i< N ; i++){
            cin >> a[i];
        } 
        sort(a,a+N);
        int sum = a[0]+a[1];
        cout << sum << endl;
        }
    return 0;
}
