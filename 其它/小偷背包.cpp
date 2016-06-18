#include<stdio.h>
#include<string.h>
int vis[2000],n,m,flag,num[2000];
void dfs(int weigh)
{
	if(flag) return ;
	if(weigh==n) 
	{
		flag=1;
		return ;
	}
	for(int i=0;i<m;i++)
	{
		if(flag) return ;
		if(vis[i]==0&&num[i]+weigh<=n)
		{
			vis[i]=1;
			dfs(weigh+num[i]);
			vis[i]=0;
		}
	}
}
int main()
{
	while(~scanf("%d%d",&n,&m))
	{
		for(int i=0;i<m;i++) scanf("%d",&num[i]);
		flag=0;
		memset(vis,0,sizeof(vis));
		dfs(0);	
		if(flag) printf("yes!");
		else printf("no!");
	}
	return 0;
}