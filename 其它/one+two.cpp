#include<stdio.h>
#include<string.h>
int cmp(char str[10])
{    
	if(strcmp(str,"zero")==0) return 0;    
	else if(strcmp(str,"one")==0) return 1;    
	else if(strcmp(str,"two")==0) return 2;    
	else if(strcmp(str,"three")==0) return 3;   //���з��صĶ���һ����ÿ��Ӣ����ĸ��Ӧ���ص�ֵ 
	else if(strcmp(str,"four")==0) return 4;    
	else if(strcmp(str,"five")==0) return 5;    
	else if(strcmp(str,"six")==0) return 6;    
	else if(strcmp(str,"seven")==0) return 7;    
	else if(strcmp(str,"eight")==0) return 8;    
	else if(strcmp(str,"nine")==0) return 9;       
	return 0;
}
int main()
{    
	int count=0,i=10,a=0,temp=0;    
	char str[10];    
	while(~scanf("%s",str))    
	{        
		if(strcmp(str,"=")==0)        
		{            
			if(count==2)           //  
				a=a+temp;          //
			else if(count==1)      // ��ʱa �ǼӺ�ǰ���� 
				a=a+temp/10;       //
			if(a==0)             
				return 0;             
			else               
				printf("%d\n",a);             
			a=0;             
			temp=0;             
			i=10;             
			count=0;        
		}         
		else if(strcmp(str,"+")==0)         
		{            
			if(count==2)     //���count==2��ȷ�����������λ������count==1����һλ��          
				a=temp;            
			if(count==1)             
				a=temp/10;            
			count=0;            
			i=10;            
			temp=0;         
		}         
		else                      //��ִ��������� �������+��=��ִ��    
		{            
			count++;            
			temp=temp+i*cmp(str);        //���õĺ���cmp(s)���ص���һ����           
			i=i/10;         
		}    
	}
}
