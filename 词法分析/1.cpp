#include<stdio.h>
#include<ctype.h>
#include<string.h>
#define keywordSum 8
char *keyword[keywordSum]={"if","else","for","while","do","int","read","write"};
//定义纯单分界符
char singleword[50]="+-*(){};,:";
//定义双分界符的首字符
char doubleword[10]="><=!";
char Scanin[300],Scanout[300];
//用于接收输入输出文件
FILE *fin,*fout;
int TESTscan()
{
	char ch,token[40];
	int es=0,j,n;
	printf("请输入源程序文件名（包括路径):");
	scanf("%s",Scanin);
	printf("请输入词法分析输出文件名（包括路径):");
	scanf("%s",Scanout);
	if((fin=fopen(Scanin,"r"))==NULL)
	{
		printf("\n打开词法分析输入文件出错!\n");
		return(1);
	}
	if((fout=fopen(Scanout,"w"))==NULL)
	{
		printf("\n创建词法分析文件出错!\n");
		return(2);
	}
	ch=getc(fin);
	while(ch!=EOF)
	{
		while(ch==' '||ch=='\n'||ch=='\t')  ch=getc(fin);
		if(isalpha(ch))
		{
			token[0]=ch;j=1;
			ch=getc(fin);
			while(isalnum(ch))
			{
				token[j++]=ch;
				ch=getc(fin);
			}
			token[j]='\0';
			//查保留字
			n=0;
			while((n<keywordSum)&&strcmp(token,keyword[n]))  n++;
			if(n>=keywordSum)
				fprintf(fout,"%s\t%s\n","ID",token);
			else
				fprintf(fout,"%s\t%s\n",token,token);
		}
		else if(isdigit(ch))
		{
			token[0]=ch;j=1;
			ch=getc(fin);
			while(isdigit(ch))
			{
				token[j++]=ch;
				ch=getc(fin);
			}
			token[j]='\0';
			fprintf(fout,"%s\t%s\n","NUM",token);
		}
		else if(strchr(singleword,ch)>0)
		{
			token[0]=ch;token[1]='\0';
			ch=getc(fin);
			fprintf(fout,"%s\t%s\n",token,token);
		}
		else if(strchr(doubleword,ch)>0)
		{
			token[0]=ch;
			ch=getc(fin);
			if(ch=='=')
			{
				token[1]=ch;token[2]='\0';
				ch=getc(fin);
			}
			else
				token[1]='\0';
			fprintf(fout,"%s\t%s\n",token,token);
		}
		else if(ch=='/')
		{
			ch=getc(fin);
			if(ch=='*')
			{
				char ch1;
				ch1=getc(fin);
				do 
				{ch=ch1;ch1=getc(fin);}
				while((ch!='*'||ch1!='/')&&ch1!=EOF);
				ch=getc(fin);
			}
			else
			{
				token[0]='/';token[1]='\0';
				fprintf(fout,"%s\t%s\n",token,token);
			}
		}
	     else
		{
		     token[0]=ch;token[1]='\0';
		      ch=getc(fin);
		      es=3;
		      fprintf(fout,"%s\t%s\n","ERROR",token);
		 }
	}
	fclose(fin);
	fclose(fout);
	return(es);
}



void main()
{
	int es=0;
	es=TESTscan();
	if(es>0)  printf("词法分析有错，编译停止!");
	else
		printf("词法分析成功!\n");
}
