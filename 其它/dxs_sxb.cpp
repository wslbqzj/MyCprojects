#include <stdio.h>
typedef struct
{	int  coef;   /*系数部分*/
	int  expn;   /*指数部分*/
} ElemType ;
typedef struct
{	ElemType  data[100];   /*多项式数据*/
	int   length;   /*多项式的项数*/
} poly ;

poly  A,B;
void out(poly x)
{
  int i;
  if(x.length) printf("\n%d X %d",x.data[0].coef,x.data[0].expn);
  for(i=1;i<x.length;i++)
	if(x.data[i].coef>0)
		printf("+ %d X %d",x.data[i].coef,x.data[i].expn);
	else
		printf("- %d X %d",-1*x.data[i].coef,x.data[i].expn);
  printf("\n"); 
}
/*poly zjh(poly x)
{
  
  int i,j;
  ElemType  temp;
  poly zz;
  for (i=0;i<x.length-1 ;i++)
	  for(j=i+1;j<x.length ;j++)
		  if (x.data[i].expn <x.data[j].expn )
		  {
		      temp=x.data[i];
			  x.data[i]=x.data[j];
			  x.data[j]=temp;
		  }
   zz.length =0;
   i=0;
   while(i<x.length )
   {
      j=i+1;
	  while(x.data[i].expn ==x.data[j].expn )
	  {x.data[i].coef +=x.data[j].coef ;
	  j++;}
	  if (x.data[i].coef) 
	  {  k=j-i-1;}
	  else  k=j-i
	  for(n=j;n<x.length;n++)  x.data[n-k]= x.data[n]
	  x.length	-=k;
		  //zz.data[zz.length ]=x.data[i];
	   //zz.length ++;
	  }
	  i=j;
   }
   return zz;
}
*/
poly create()
{	poly x;
	ElemType  temp;
	int i=0,j,k,ce,ep;
	printf("please input a coef and expn( 0  is end)");
	scanf("%d%d",&ce,&ep);
	while (ce)
	{ //x.data[i].coef=ce;x.data[i].expn=ep;i++;
	//scanf("%d%d",&ce,&ep);i++;}	
		
		if (i>0)
		{ for(j=0;j<=i;j++)
			if(x.data[j].expn==ep) 
			  {x.data[j].coef+=ce;break;}
		  if(j>i)
		  {x.data[i].coef=ce;x.data[i].expn=ep;i++;}
		  else
		  {//删除运算
		    if( x.data[j].coef==0) 
			{	for(k=j+1;k<=i;k++) x.data[k-1]=x.data[k];
			    i--;}
		  }
		}
	   else
		  { x.data[i].coef=ce;x.data[i].expn=ep; i++;}
	  
       printf("please input a coef and expn( 0  is end)");
	   scanf("%d%d",&ce,&ep);
	   //scanf("%d%d",&(x.data[i].coef),&(x.data[i].expn));
    }
	x.length=i;
	out(x);
	//x=zjh(x);
	for (i=0;i<x.length-1 ;i++)
	  for(j=i+1;j<x.length ;j++)
		  if (x.data[i].expn >x.data[j].expn )
		  {
		      temp=x.data[i];
			  x.data[i]=x.data[j];
			  x.data[j]=temp;
		  }
	return x;
}

poly add(poly a,poly b)
{int i,j,sumc;
  poly x;
  x.length =0;
  i=j=0;
  while (i<a.length && j<b.length )
  { if(a.data[i].expn==b.data[j].expn)
	 {  sumc =a.data[i].coef+b.data[i].coef;
        if (sumc)
		{
		   x.data[x.length].coef=sumc;
		   x.data[x.length].expn =a.data[i].expn;
		   x.length ++;
		}
		i++;j++;
	 }
  if(a.data[i].expn<b.data[j].expn)
	 {  x.data[x.length]=a.data[i];
		x.length ++;
		i++;
	 }
  if(a.data[i].expn>b.data[j].expn)
	 {  x.data[x.length]=b.data[j];
		x.length ++;
		j++;
	 }
  }
  while (i<a.length )
  {     x.data[x.length]=a.data[i];
		x.length ++;
		i++;
  }
  while (j<b.length )
  {
		x.data[x.length]=b.data[j];
		x.length ++;
		j++;
  }
  return x;
}

poly multy(poly a,poly b)
{
poly  x,y;
ElemType  temp;
int i=0,j;
while (i<a.length)
  {
	temp=a.data[i];
	y=b;
	for (j=0;j<y.length-1 ;j++)
	{	
		y.data[j].expn+=temp.expn; 
	    y.data[i].coef*=temp.coef; 
	}	
    x=add(x,y);
	i++;
	}
return x;
}

void main()
{  poly C;
   A=create();
   out(A);
   B=create();
   out(B);
   C=add(A,B);
   out(C);
   
}