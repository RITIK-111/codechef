#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int test_case; cin >> test_case;
    while(test_case){
        int x_ml,x_gm,X_ml,X_gm;
        cin >> x_ml >> x_gm >> X_ml >> X_gm ;
        int total = floor((X_ml/x_ml))+floor((X_gm/x_gm));
        cout << total << endl ;
        test_case--;
    }
    return 0;
}