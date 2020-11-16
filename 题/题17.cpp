#include<stdio.h>
#include<algorithm>
#include<string.h>
using namespace std;
int dp[1010][1010];
int main()
{
    int t,n,m,x,y;
    scanf("%d",&t);
    while(t--)
    {
        memset(dp,0,sizeof(dp));
        int ans=0;
        scanf("%d %d %d %d",&n,&m,&x,&y);
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=m; j++)
            {
                scanf("%d",&dp[i][j]);
                dp[i][j]+=dp[i-1][j]+dp[i][j-1]-dp[i-1][j-1];
                if(i>=x&&j>=y)
                {
                    ans=max(dp[i][j]-dp[i-x][j]-dp[i][j-y]+dp[i-x][j-y],ans);
                }
            }
        }
        printf("%d\n",ans);
    }
}

