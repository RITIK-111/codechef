#include<bits/stdc++.h>
int main()
{ int i=0, binary_index=0, temp, j, b_temp[17], binary[17];
unsigned long int sum=0;
 printf("\nEnter packet data\n");
for(i=0;i<10;i++)
{ scanf("%x",&temp);
sum=sum+temp; }
//finding binary of sum
while( sum!=0 )
{ int bit;
bit=sum%2; binary[binary_index]=bit;
binary_index++; printf(" %d ", bit);
sum=sum/2; }
//reversing
for(i=0;i<=binary_index;i++)
{ b_temp[i]=binary[i]; }
j=0;
for(i=binary_index;i>=0;i--)
{ binary[j] = b_temp[i]; j++; }
printf("\n\nAns before adding carry bit:\n");
for(i=0;i<=binary_index;i++)
{ printf(" %d",binary[i]); }
printf("\n\nAns after adding carry bit:\n");
if(binary_index>16)
{
// adding carry bit
temp=1;
for(i=binary_index;i>1;i--)
{ if(binary[i]==1 && temp==1) {binary[i]=0;temp=1;}
else if(binary[i]==0 && temp==1) {binary[i]=1;temp=0;break;}
else if(binary[i]==0 && temp==0) {binary[i]=0;temp=0;break;}
else if(binary[i]==1 && temp==0) {binary[i]=1;temp=0;break;}
}
for(i=2;i<=binary_index;i++)
{ printf(" %d",binary[i]); }
// complementing ans
for(i=0;i<=binary_index;i++)
{ if(binary[i]==0)
binary[i]=1;
else if(binary[i]==1)
binary[i]=0; }
printf("\n\nAns after 1's complement:\n");
for(i=2;i<=binary_index;i++)
{ printf(" %d",binary[i]); }
}
else
{ // complementing ans
for(i=0;i<=binary_index;i++)
{ if(binary[i]==0)
binary[i]=1;
else if(binary[i]==1)
binary[i]=0; }
printf("\n\nAns after 1's complement:\n");
for(i=2;i<=binary_index;i++)
{ printf(" %d",binary[i]); }
}}
