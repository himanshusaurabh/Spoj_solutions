#include<stdio.h>
int main()
{
int a[200],n,num,index,m,i,temp,j,k,mid;
scanf("%d",&n);
while(n--)
{
scanf("%d",&num);
a[0]=1;
m=1;
 
for(j=1;j<=num;j++)
{
temp=0;
index=0;
for(k=1;k<=m;k++)
{
mid=a[index]*j+temp;
a[index++]=mid%10;
temp=mid/10;
}
while(temp>0)
{
a[index++]=temp%10;
temp/=10;
m++;
}
}
for(i=m-1;i>=0;i--)
printf("%d",a[i]);
printf("\n");
}
return 0;
 
}
