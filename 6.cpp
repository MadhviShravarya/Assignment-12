#include<stdio.h>
void printeven(int);

int main()
{
   int n;
   printf("enter the limit::");
   scanf("%d",&n);
   printeven(n);
   return 0;
}
 void printeven(int n)
 {
   if(n>0)
   {
    printf("%d\n",2*n);
         printeven(n-1);
    
    
   }


 }

