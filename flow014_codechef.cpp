#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{   
    int test_case;
    cin >> test_case;
    while(test_case--){
        double Hardness, c_content , tensile;
        cin >> Hardness >> c_content >> tensile ;
        if(Hardness > 50 and c_content < 0.7 and tensile > 5600){
            cout << 10 << endl ;
        }
        else if(Hardness > 50 and c_content < 0.7 ){
            cout << 9 << endl ;
        }
        else if( c_content < 0.7 and tensile > 5600){
            cout << 8 << endl;
        }
        else if(Hardness > 50  and tensile > 5600){
            cout << 7 << endl;
        }
        else if(Hardness > 50 or  c_content < 0.7 or  tensile > 5600){
            cout << 6 << endl ;
        }
        else{
            cout << 5 << endl;
        }
        }
    return 0;
}