#include<stdio.h>
void square(int);

int main()
{
   int n;
   printf("enter the limit::");
   scanf("%d",&n);
   square(n);
   return 0;
}
 void square(int n)
 {
   if(n>0)
   {
    square(n-1);
    printf("%d\n",n*n);
       
   }
 }


