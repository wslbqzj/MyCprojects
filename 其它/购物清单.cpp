#include<stdio.h>
#include<string.h>
int main()
{
	int p;
	scanf("%d",&p);
	{
		char a[10000][20],b[10000][20];
		int q,i,j,k,L1,L2,l,z,x=0,h=0,n=0,c[100],f=0;

		for(i=0;i<p;i++)
		{
			getchar();
			scanf("%s",&a[i]);
		}

		scanf("%d",&q);

	    for(i=0;i<q;i++)
		{
			getchar();
			scanf("%s",&b[i]);
		}

		for(i=0;i<q;i++)
		{
			L1=strlen(b[i]);
			for(j=0;j<p;j++)
			{
			
				L2=strlen(a[j]);
				for(k=0;k<L1;k++)
				{
					//if(a[j][k]==b[i][0])
					for(l=0;l<L2;l++)
					{
						f=0;
						n=0;
						if(b[i][0]==a[j][l])
						{
							//k++;
						//	n=1;
							for(z=l;z<L2&&z<l+L1;z++)
							{
								if(b[i][k]==a[j][z])
								{
									k++;
									n++;
								}
								else
								{
									break;
								}
							}
							if(n!=L1)
							{
								break;
							}
							else
							{
								x++;
								f=1;
								n=0;
								break;
							}
                          
						}
						if(f==1) 
							break;
					}
				}
			}
			c[h]=x;
			h++;
			x=0;
		}
		for(i=0;i<q;i++)
		{
			printf("%d\n",c[i]);
		}
	//	printf("\n");
	}
	return 0;
}
