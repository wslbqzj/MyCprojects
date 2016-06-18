#include <stdio.h>
#include<malloc.h>
#include<string.h>
#define MAXBIT      100
#define MAXVALUE  10000
#define MAXLEAF     30
#define MAXNODE    MAXLEAF*2 -1

typedef struct 
{
    int bit[MAXBIT];
    int start;
} HCodeType;        
typedef struct
{
    int weight;
    int parent;
    int lchild;
    int rchild;
} HNodeType;       


void HuffmanTree (HNodeType HuffNode[MAXNODE],  int n)
{ 
   
    int i, j, m1, m2, x1, x2;
    
    for (i=0; i<2*n-1; i++)
    {
        HuffNode[i].weight = 0;
        HuffNode[i].parent =-1;
        HuffNode[i].lchild =-1;
        HuffNode[i].lchild =-1;
    } 

   
    for (i=0; i<n; i++)
    {
        scanf ("%d", &HuffNode[i].weight);
    } 
    for (i=0; i<n-1; i++)
    {
        m1=m2=MAXVALUE;  
        x1=x2=0;
      
        for (j=0; j<n+i; j++)
        {
            if (HuffNode[j].weight < m1 && HuffNode[j].parent==-1)
            {
                m2=m1; 
                x2=x1; 
                m1=HuffNode[j].weight;
                x1=j;
            }
            else if (HuffNode[j].weight < m2 && HuffNode[j].parent==-1)
            {
                m2=HuffNode[j].weight;
                x2=j;
            }
        }
            
        HuffNode[x1].parent  = n+i;
        HuffNode[x2].parent  = n+i;
        HuffNode[n+i].weight = HuffNode[x1].weight + HuffNode[x2].weight;
        HuffNode[n+i].lchild = x1;
        HuffNode[n+i].rchild = x2;
    } 
}
int main(void)
{
    HNodeType HuffNode[MAXNODE];         
    HCodeType HuffCode[MAXLEAF],  cd;       
    int i, j, c, p, n;
	char a[100];
    scanf ("%d", &n);
	scanf("%s",a);
    HuffmanTree (HuffNode, n);
    for (i=0; i < n; i++)
    {
        cd.start = n-1;
        c = i;
        p = HuffNode[c].parent;
        while (p != -1)   
        {
            if (HuffNode[p].lchild == c)
                cd.bit[cd.start] = 0;
            else
                cd.bit[cd.start] = 1;
            cd.start--;       
            c=p;                    
            p=HuffNode[c].parent;   
        }
        for (j=cd.start+1; j<n; j++)
        { HuffCode[i].bit[j] = cd.bit[j];}
        HuffCode[i].start = cd.start;
    } 
    for (i=0; i<n; i++)
    {
        for (j=HuffCode[i].start+1; j < n; j++)
        {
            printf ("%d", HuffCode[i].bit[j]);
        }
        //if(i<n-1)
			printf("\r\n");
    }
    
    return 0;
}