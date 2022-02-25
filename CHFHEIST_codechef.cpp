

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long long int test_case; cin >> test_case;
    while(test_case){
        long long int D,d,P,Q;
        cin >> D >> d >> P >> Q;
        long long int total=0;
        if(D % d == 0){
            long long int  n = D /d;
            total = D * P + ((n*(n-1))/2)* Q * d;
        }
        else{
            long long int n = D/d;
            total = ( n*P*d +(n*(n-1)/2)* Q * d + ((P+n*Q)*(D-(n*d))));
        }
        cout << total << endl ;
        test_case--;
    }
    return 0;
}
