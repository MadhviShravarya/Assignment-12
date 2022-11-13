#include<stdio.h>
int reverse(int);

int main()
{
   int n, reverse_num;
   printf("enter the number \n");
   scanf("%d",&n);
   
  reverse_num= reverse(n);
  printf("%d", reverse_num  );
   return 0;
}
int reverse(int n)
 { 
   int  rev=0;
   while(n>0)
    {
     rev=rev*10 + (n%10);
      n=n/10;    
    }
     return rev;
 }


