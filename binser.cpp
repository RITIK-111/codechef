
#include <bits/stdc++.h>
using namespace std;

int binarysearch(int arr[],int l,int r,int x)
{
    if (r >= l){
        int mid = l + (r - 1) / 2;

        if (arr[mid] == x)
            return mid;

        if (arr[mid] > x)
            return binarysearch(arr,l,mid-1,x);

      return binarysearch(arr,mid+1,r,x)  ;
    }
    return -1;
}

int main(void)
{
  int arr[] = {2,3,4,5,12,43,65};
  int x= 10 ;
  int n = sizeof(arr)/ sizeof(arr[1]);
  int result = binarysearch( arr, 0, n-1, x);
	(result == -1) ? cout << "Element is not present in array"
				: cout << "Element is present at index " << result;
    return 0;
}
