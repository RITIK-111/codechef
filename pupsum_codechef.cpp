#include<iostream>
using namespace std ;
int main ()
{
    int test_case;
    cin >> test_case;
    while(test_case--)
    {
        int D,N;
        cin >> D >> N;
        long long int sum ;
        while(D--){
            sum = (N * (N+1))/2;
            N = sum ;
            
        }
        cout << sum << endl;
        
    }
    return 0;
}