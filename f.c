#include "f.h"

void f(int start,int has,int m,int n)
{
	int i;
	if (has==m)
	{	printf("%d ",a[0]);
		for (i=1;i<m;i++)
			printf("%d ",a[i]);
		printf("\n");
		return;
	}
	for (i=start+1;i+m<=n+has+1;i++)
	{
		a[has]=i;
		f(i,has+1,m,n);
	}
}