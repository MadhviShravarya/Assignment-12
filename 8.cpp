#include<stdio.h>
void dtob(int);

int main()
{
   int n;
   printf("enter the number to change decimal to binary\n");
   scanf("%d",&n);
   dtob(n);
   return 0;
}
 void dtob(int n)
 {
   if(n>0)
   {
    dtob(n/2);
    printf("%d",n%2);
       
   }
 }


