#ifndef basic_h
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define basic_h
char *errormsg[256];
//process control block
struct pcb
{
int pid; //process id
int ppid; //parent process id
int prio; //priority 优先权
int state; //state
int lasttime; //last execute time
int tottime; //totle execute time
};
//process node
struct pnode
{
pcb *node;
pnode *sub;
pnode *brother;
pnode *next;
};
//信号量
struct semphore
{
char name[5]; //名称
int count; //计数值
int curpid; //当前进程id
pnode *wlist; //等待链表
};
#define geterror(eno) printf("%s\n",errormsg[eno])
void initerror()
{
errormsg[0] = (char *)malloc(20);
errormsg[0]="error command!";
errormsg[1] = (char *)malloc(20);
errormsg[1]="error parameter!";
}
//get a substring in string s
char * substr(char *s,int start,int end)
{
char *s1;
int len = strlen(s);
if(start<0 || end>=len || start>end)
return NULL;
s1=(char *)malloc(end-start+2);
for(int i=0;i<=end-start;i++)
s1[i] = s[i+start];
s1[i]='\0';
return s1;
}
//find the location of c in string s
int instr(char *s,char c)
{
int i;
for(i=0;i<strlen(s);i++)
if(s[i]==c)
return i;
return -1;
}
//change the string to array data
int * strtoarray(char *s)
{
int *a,count,i,x1;
char c, *s1,*s2;
if(!s)
{
printf("string can't be null!\n");
return NULL;
}
count=0;
s1=s;
for(i=0;i<strlen(s1);i++)
{
if(s1[i]==',')
count++;
}
count++;
a = (int *)malloc(count);
c=',';
for(i=0;i<count;i++)
{
x1 = instr(s1,c);
if(x1>=0)
s2=substr(s1,0,x1-1);
else
s2=s1;
a[i]=atoi(s2);
if(c==',')
s1=substr(s1,x1+1,strlen(s1)-1);
}
return a;
}
#endif



pnode *proot; //system process tree root
pnode *plink; //system process link head
void deletepc(pnode *parent,pnode *currect) //delete process
{
if (currect->sub==NULL) //if the sub of the process which will be delete is NULL
{
if(parent->sub==currect)
{
parent->sub=currect->brother;
}
else
{
for (pnode *p=parent->sub;p->brother!=currect;p=p->brother);
p->brother=currect->brother;
}
pnode *tempperent;
for (tempperent=plink;tempperent;tempperent=tempperent->next) //delete the process from the plink
{
if (tempperent->next->node->pid==currect->node->pid)
{
tempperent->next=tempperent->next->next;
break;
}
}
}
else //recursion transfer
{
deletepc(currect,currect->sub);
deletepc(parent,currect);
}
}
int createpc(int *para) //create process
{
//add your code here
pnode *p,*p1,*pp;
int pflag;
pflag=0;
for(p=plink;p;p=p->next)
{
if(p->node->pid == para[0]) //check if this pid is already exist
{
printf("pid %d is already exist!\n",para[0]);
return -1;
}
if(p->node->pid == para[1]) //find parent pcb
{
pflag=1;
pp = p;
}
}
if(!pflag)
{
printf("parent id %d is not exist!\n",para[1]);
return -2;
}
//init new pcb
p1 = new pnode;
p1->node=new pcb;
p1->node->pid = para[0];
p1->node->ppid = para[1];
p1->node->prio = para[2];
p1->sub=NULL;
p1->next=NULL;
p1->brother=NULL;
//add to process tree
if(!pp->sub)
pp->sub=p1;
else
{
for(p=pp->sub;p->brother;p=p->brother);
p->brother=p1;
}
// add to process link
for(p=plink;p->next;p=p->next);
p->next=p1;
return 0;
}
//show process detail
void showdetail()
{
//add your code here
pnode *p,*p1;
p=plink;
for(;p;) //print all pcb info
{
printf("%d(prio %d): ",p->node->pid,p->node->prio);
p1 = p->sub;
for(;p1;) //print sub pcb
{
printf("%d(prio %d) ",p1->node->pid,p1->node->prio);
p1 = p1->brother;
}
printf("\n");
p = p->next;
}
printf("\n");
}
//don't change
void main()
{
initerror();
short cflag,pflag;
char cmdstr[32];
proot = new pnode;
proot->node=new pcb;
proot->node->pid=0;
proot->node->ppid=-1;
proot->node->prio=0;
proot->next=NULL;
proot->sub=NULL;
proot->brother=NULL;
plink=proot;
for(;;)
{
cflag=0;
pflag=0;
printf("cmd:");
scanf("%s",cmdstr);
if(!strcmp(cmdstr,"exit")) //exit the program
break;
if(!strcmp(cmdstr,"showdetail"))
{
cflag = 1;
pflag = 1;
showdetail();
}
else
{
int *para;
char *s,*s1,*s2;
s = strstr(cmdstr,"createpc"); //create process
s2 = strstr(cmdstr,"deletepc"); //delete process
if(s)
{
cflag=1;
para = (int *)malloc(3);
//getparameter
s1 = substr(s,instr(s,'(')+1,strlen(s)-2); //get param string
para=strtoarray(s1); //get parameter
createpc(para); //create process
pflag=1;
}
else if (s2)
{
cflag=1;
para = (int *)malloc(2);
//getparameter
s1 = substr(s2,instr(s2,'(')+1,strlen(s2)-2); //get param string
para=strtoarray(s1); //get parameter
pnode *pp=plink;
pnode *pc=plink;
pnode *p,*p1;
bool findflag=false;
for (p=plink;p;p=p->next)
{
if((p->node->pid)==para[0]) //search the process which will be delete from plink
{
for (p1=plink;p1;p1=p1->next)
{
if((p1->node->pid)==p->node->ppid) //search the parent process
{
pp=p1;
pc=p;
break;
}
}
findflag=true;
break;
}
}
if (findflag)
{
if (pp==pc) //if the process will be delete is 0 process
{
printf("you cann't delete the 0 process!\n");
}
else
deletepc(pp,pc); //delete process
}
else
geterror(2);
pflag=1;
}
}
if(!cflag)
geterror(0);
else if(!pflag)
geterror(1);
}
}