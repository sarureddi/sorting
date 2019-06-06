#include<stdio.h>
#include<conio.h>
int main()
{
int i,j,n,num[30];
printf("enter the value n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(num[i]>num[j])
{
a=num[i];
num[i]=num[j];
num[j]=a;
}
printf("the numbers in sorted ");
for(i=0;i<n;i++)
printf("%d",&num)
}
}
© 2019 GitHub, Inc.
