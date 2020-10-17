#include<stdio.h>
#include<math.h>//math library for pow function

void main()
{
int n,r,flag=3,s=0;
printf("Enter a three digit number");
scanf("%d",&n);

while(n<0);
{
r=n%10;
flag=-1;
s=s+r*pow(flag,10);
n=n/10;
}
printf("%d",&s);

}
