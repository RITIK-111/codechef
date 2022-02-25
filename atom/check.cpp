#include<bits/stdc++.h>
using namespace std;
int main()
{ int i=1, temp1,r ;
  char hex[50];
unsigned long int sum=0;
 printf("Enter packet data\n");
for(int i=0;i<10;i++)
{
  scanf("%x",&temp1);
  sum=sum+temp1;
}
int temp = sum ;
while (temp != 0)
{
    r = temp % 16;
    if (r < 10)
        hex[i++] = r + 48;
    else
        hex[i++] = r + 55;
    temp = temp / 16;
}
str =
for(int j= i ; j> 0;j--)
{
  hex[j];
}
return 0 ;
}
