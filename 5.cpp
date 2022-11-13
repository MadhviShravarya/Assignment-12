#include<stdio.h>
int printeven(int);

int main()
{
   int n;
   printf("enter the limit::");
   scanf("%d",&n);
   printeven(n);
   return 0;
}
 int printeven(int n)
 {
   if(n>0)
   {
    printeven(n-1);
    printf("%d\n",2*n);
   }
 }

