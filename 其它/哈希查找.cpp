#include<stdio.h>
struct Hash
{
	int key;
	int count;
};
void InsertHT(Hash ha[], int &n, int k, int p)
{
	int i, adress;
	adress = k%p;
	if (ha[adress].key == -1 || ha[adress].key == -2)
	{
		ha[adress].key = k;
		ha[adress].count = 1;
	}
	else
	{
		i = 1;
		do
		{
			adress = (adress + 1) % p;
			i++;
		} while (ha[adress].key != -1 && ha[adress].key != -2);
		ha[adress].key = k;
		ha[adress].count = 1;
	}
	n++;
}
void CreateHash(Hash ha[], int a[], int n, int m, int p)
{
	int i, n1 = 0;
	for (i = 0; i < m; i++)
	{
		ha[i].key = -1;
		ha[i].count = 0;
	}
	for (i = 0; i < n; i++)
		InsertHT(ha, n1, a[i], m);
}
int SearchHT(Hash ha[], int p, int k)
{
	int i = 0, adress;
	adress = k%p;
	while (ha[adress].key != -1 && ha[adress].key != k)
	{
		i++;
		adress = (adress + 1) % p;
	}
	if (ha[adress].key == k)
		return adress;
	else
		return -1;
}
int main()
{
	Hash ha[100];
	int m, i = 0, n = 1,key;
	int adr, q;
	char ch;
	int a[100];
	scanf("%d", &m);
	scanf("%d%c", &a[i], &ch);
	getchar();
	while (ch==' ')
	{
		i++;
		scanf("%d%c", &a[i], &ch);
		n++;
	}
	scanf("%d", &key);
	CreateHash(ha, a, n, m, m);
	adr = SearchHT(ha, m, key);
	if (adr != -1)
		printf("%d, %d", adr, ha[adr].count);
	else
		printf("-1");
	return 0;
}
