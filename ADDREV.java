import java.util.*;
import java.lang.*;

class Main
{
	public static void main (String[] args) throws java.lang.Exception
	{Scanner sc=new Scanner(System.in);
	long x,y,z,i,j,k,l,m,n;j=sc.nextLong();
	while(j-->0)
	{k=sc.nextLong();
	l=sc.nextLong();
	m=reverse(k);
	n=reverse(l);
	i=reverse(m+n);
	System.out.println(i);
		
	}
		
	}
	public static long reverse(long i)
	{long j,k;j=0;
		while(i!=0)
		{k=i%10;
			j=j*10+k;
			i=i/10;
		}
		return j;
	}
	
}
