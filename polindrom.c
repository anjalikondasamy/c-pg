#include<stdio.h>
#include<conio.h>
void main()
{
int a,a1,rem,pol;
clrscr();
printf("Enter the number");
scanf("%d",&a);
a1=a;
pol=0;
while(a!=0)
{
rem=a%10;
pol=pol*10+rem;
a/=10;
}
if(a1==pol)
{
printf("\n The number is a palindrome");
}
else
{
printf("\n The numbr is a not palindrome");
}
}
