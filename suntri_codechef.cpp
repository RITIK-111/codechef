#include<iostream>
using namespace std ;
int main ()
{
    int test_case;
    cin >> test_case;
    while(test_case--){
        int length;
        cin >> length;
        int side = 2;
        int valid = (length/2) - 1;
        if (valid >= 1)
        { 
            int sum = (valid * (valid +1))/2;
            cout << sum << endl;
        }
        else{
            cout << 0 << endl;
        }
    }
    return 0;
}