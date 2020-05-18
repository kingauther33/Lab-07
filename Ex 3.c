#include <stdio.h>

void main ()
{
	int i, j, row;
	printf("Moi ban nhap so hang muon hien thi: ");
	scanf("%d", &row);
	printf("===============================\n");
	for (i=1; i<=row; i++)
	{
		for (j=1; j<=i; j++)
			printf("%d ",j);
		if (i<row) 
		    printf("\n");
	}
}
