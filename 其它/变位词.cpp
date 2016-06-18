#include<stdio.h>
#include<string.h>
int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{ 
		int i,str[26]={0},rst[26]={0},L,l1,l2;
		char a[100],b[100];
		scanf("%s %s",a,b);
		l1=strlen(a);
		l2=strlen(b);
		if(l1!=l2)
		{
			printf("No\n");
		}
		else
		{
			L=l1;
			for(i=0;i<L;i++)
			{
				if(a[i]=='a')
					str[0]++;
				else if(a[i]=='b')
					str[1]++;
				else if(a[i]=='c')
					str[2]++;
				else if(a[i]=='d')
					str[3]++;
				else if(a[i]=='e')
					str[4]++;
				else if(a[i]=='f')
					str[5]++;
				else if(a[i]=='g')
					str[6]++;
				else if(a[i]=='h')
					str[7]++;
				else if(a[i]=='i')
					str[8]++;
				else if(a[i]=='j')
					str[9]++;
				else if(a[i]=='k')
					str[10]++;
				else if(a[i]=='l')
					str[11]++;
				else if(a[i]=='m')
					str[12]++;
				else if(a[i]=='n')
					str[13]++;
				else if(a[i]=='o')
					str[14]++;
				else if(a[i]=='p')
					str[15]++;
				else if(a[i]=='q')
					str[16]++;
				else if(a[i]=='r')
					str[17]++;
				else if(a[i]=='s')
					str[18]++;
				else if(a[i]=='t')
					str[19]++;
				else if(a[i]=='u')
					str[20]++;
				else if(a[i]=='v')
					str[21]++;
				else if(a[i]=='w')
					str[22]++;
				else if(a[i]=='x')
					str[23]++;
				else if(a[i]=='y')
					str[24]++;
				else 
					str[25]++;
			}
			for(i=0;i<L;i++)
			{
				if(b[i]=='a')
					rst[0]++;
				else if(b[i]=='b')
					rst[1]++;
				else if(b[i]=='c')
					rst[2]++;
				else if(b[i]=='d')
					rst[3]++;
				else if(b[i]=='e')
					rst[4]++;
				else if(b[i]=='f')
					rst[5]++;
				else if(b[i]=='g')
					rst[6]++;
				else if(b[i]=='h')
					rst[7]++;
				else if(b[i]=='i')
					rst[8]++;
				else if(b[i]=='j')
					rst[9]++;
				else if(b[i]=='k')
					rst[10]++;
				else if(b[i]=='l')
					rst[11]++;
				else if(b[i]=='m')
					rst[12]++;
				else if(b[i]=='n')
					rst[13]++;
				else if(b[i]=='o')
					rst[14]++;
				else if(b[i]=='p')
					rst[15]++;
				else if(b[i]=='q')
					rst[16]++;
				else if(b[i]=='r')
					rst[17]++;
				else if(b[i]=='s')
					rst[18]++;
				else if(b[i]=='t')
					rst[19]++;
				else if(b[i]=='u')
					rst[20]++;
				else if(b[i]=='v')
					rst[21]++;
				else if(b[i]=='w')
					rst[22]++;
				else if(b[i]=='x')
					rst[23]++;
				else if(b[i]=='y')
					rst[24]++;
				else 
					rst[25]++;
			}
			for(i=0;i<26;)
			{
				if(str[i]!=rst[i])
				{
					printf("No\n");
					break;
				}
				else
				{
					i++;
				}
			}
			if(i==26)
			{
				printf("Yes\n");
			}
		}
	}
	return 0;
}