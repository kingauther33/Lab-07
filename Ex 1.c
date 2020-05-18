#include <stdio.h>

int main()
{
	float asm1, write, prac;
	input:
	{
		printf("Nhap diem ASM: ");
		scanf("%f", &asm1);
		printf("Nhap diem Writing: ");
		scanf("%f", &write);	
		printf("Nhap diem Practice: ");
		scanf("%f", &prac);	
	}
/////////////////////////////////////////////// 
	if 	((asm1>10) || (asm1 <0)		||
		(write>100) || (write <0) 	||
		(prac>15) || (prac<0))	
		goto input;
	if (asm1>4) 
		printf("Ban da qua mon ASM :)\n");
	else
		printf("Ban truot mon ASM roi :(\n");
	if (write>40) 
		printf("Ban da qua mon Writing :)\n");
	else
		printf("Ban truot mon Writing roi :(\n");
	if (prac>6) 
		printf("Ban da qua mon Practice :)");
	else
		printf("Ban truot mon Practice roi :(");
/////////////////////////////////////////////// 
	return 0;
}
