#include<stdio.h>
int main()
{
int i,n;
int arr[10];
int pos=0,neg=0;
printf("enter the number of elemets in an array");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
for(i=0;i<n;i++)
{
if(arr[i]<0)
{
pos=pos+arr[i];
}
if(arr[i]>0)
{
neg=neg+arr[i];
}
}
printf("the sum of array elemets are %d",pos);
printf("the sum of array elemets are %d",neg);
return 0;
}
