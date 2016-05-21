#include <stdio.h>
#include "f.h"
int a[10];
int main()
{
	void f(int start,int has,int m,int n);
	int n,m;
	scanf("%d%d",&n,&m);
	f(0,0,m,n);
	return 0;
}