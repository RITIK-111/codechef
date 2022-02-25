#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double number;
    cout <<"The number to check the sqrt of it : ";
    cin >> number;
    double square_root = sqrt(number) ;
    cout << "Square root of "<< number << " is "<< square_root << endl;
    return 0;

}