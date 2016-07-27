#include <iostream>
#include <cstdio>

using namespace std;


int binomial(int n,int k)
{
    if(k==0||k==n)  return 1;
    return binomial(n-1,k-1)+binomial(n-1,k);

}

int binomial2(int n,int k)
{
    int dp[n+1][k+1];int i,j;
    for(i=0;i<=n;i++)
        {
            dp[i][0]=1;
            if(i>=1&&i<=k)  dp[0][i]=0;
        }
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=k;j++)
            {
                dp[i][j]=dp[i-1][j]+dp[i-1][j-1];
            }
        }

    return dp[n][k];
}

int binomial3(int n,int k)
{
    int dp[2][k+1];int i,j;
    for(i=0;i<=k;i++)
        {
           dp[0][i]=0;
        }
        for(i=1;i<=n;i++)
        {   dp[1][0]=1;
            dp[0][0]=1;
            for(j=1;j<=k;j++)
            {
                if(i&1)    dp[1][j]=dp[0][j]+dp[0][j-1];
                else       dp[i&1-1][j]=dp[1][j]+dp[1][j-1];
            }
        }

    return dp[n&1][k];
}


int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    if(n>=k&&n>=0&&k>=0)    printf("%d\n",binomial3(n,k));
    else printf("Wrong input");

    return 0;
}
