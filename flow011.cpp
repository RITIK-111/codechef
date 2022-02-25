#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{   
    int test_case;
    cin >> test_case;
    while(test_case--){
        double basic_salary;
        double  gross_salary;
        cin >> basic_salary;
        if (basic_salary >= 1500){
            gross_salary = basic_salary + 500 +( 0.98 * basic_salary) ;
            cout <<fixed<<setprecision(2)<<gross_salary << endl;
        }
        else{
            gross_salary = basic_salary *2;
            cout << gross_salary << endl ;
        }
    }
    return 0;
}
