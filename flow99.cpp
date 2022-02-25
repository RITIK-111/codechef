
#include <iostream>

using namespace std;

int main()
{
    int test_case;
    cin >> test_case ;
    while(test_case ){
        float quantity , price;
        cin >> quantity  >> price;
        if ( quantity > 1000){
            float expense ;
            expense = (quantity * price) * 0.912;
            cout << expense << endl;
            test_case -= 1;
        }
        else{
            cout << (quantity*price)<<endl;
            test_case -= 1;

        }
        
    }
    

    return 0;
}