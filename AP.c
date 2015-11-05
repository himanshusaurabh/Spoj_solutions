#include <stdio.h>

int main(void) {

long long int p,q,s,n,a,d,i;int t;
scanf("%d",&t);
while(t-->0)
{scanf("%lld %lld %lld",&p,&q,&s);
	n=2*s/(p+q);
	d=(q-p)/(n-5);
	a=p-2*d;
	printf("%lld \n",n);
	for(i=0;i<n;i++)
	{printf("%lld ",(a+i*d));}
	printf("\n");
	
}
	return 0;
}
