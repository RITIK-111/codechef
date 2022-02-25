// Online C compiler to run C program online

#include<bits/stdc++.h>
#include "mpi.h"
int main(int argc, char **argv)
{
int ierr, num_procs, my_id;
ierr = MPI_Init(&argc, &argv);
FILE *fptr,*fp2;

char ch;
int wrd=1,charctr=1;
char fname[20];

ierr = MPI_Comm_rank(MPI_COMM_WORLD, &my_id);
ierr = MPI_Comm_size(MPI_COMM_WORLD, &num_procs);

printf("\n\n Copy and Count the number of words and characters in a file:\n");
printf("---------------------------------------------------------\n");
strcpy(fname , "text.txt");
printf( "Name : %s\n", fname);

fptr=fopen(fname,"r");

if(fptr==NULL)
{
58

CS431 - Distributed Computing (BTECH Fi n al Year ) Computer Science & Engineering

printf(" File does not exist or can not be opened.");
}
else
{
ch=fgetc(fptr);
printf(" The content of the file %s are : ",fname);
while(ch!=EOF)
{
printf("%c",ch);
if(ch==' '||ch=='\n')
{
wrd++;
}
else
{
charctr++;
}
ch=fgetc(fptr);
}
printf("\n The number of words in the file %s are : %d\n",fname,wrd-2);

printf(" The number of characters in the file %s are : %d\n\n",fname,charctr-
1);

fp2 = fopen("xyz.txt", "w");
while((ch = getc(fptr)) != EOF)
putc(ch, fp2);
}
fclose(fptr);
printf("Hello world! %i out of %i p\n", my_id, num_procs);
ierr = MPI_Finalize();
}
