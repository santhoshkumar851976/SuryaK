#include<stdio.h>
int main()
{
    int x,num,rem,total=0;
    num=153;
    x=num;
    while(num>0)
{
    rem=num%10;
    total=total+rem*rem*rem;
    num=num/10;
}
if(x==num)
{
   printf("Armstrong number");
}
else
{
   printf("not Armstrong number");
}
}
