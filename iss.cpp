
#include <iostream>
using namespace std;
int gcd(int A,int B){
    if(B != 0 )
        return gcd(B,A%B);
    else
        return A;
    //while(A % B!= 0)
    //{
      //  int r = A %B ;
        //A = B;
        //B = r;
    //}
    //return B;
}
int main()
{
    int test_case;
    cin >> test_case;
    while(test_case !=0 )
    {
        int k ;
        cin >> k ;
        int maxsum=0;
        int i = 1;
        while (i!=2*k+1)
        {
            maxsum = maxsum + gcd(k+i*i,k+(i+1)*(i+1)) ;
            i+=1;
        }
        cout << maxsum << endl ;
        test_case = test_case - 1;
    }
    return 0;
}
