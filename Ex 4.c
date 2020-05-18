#include <stdio.h>
#include <ctype.h>

int main ()
{
	char ch;
	int chon;
	float capu, egg, dua, sum;
	capu = 50;
	egg = 40;
	dua = 35;
		printf("Menu: \n");
		printf("1. Ca phe Capuchino \n");
		printf("2. Ca phe Trung\n");
		printf("3. Ca phe sua dua\n");
		printf("==========================\n");
		do
		{
			do
			{
				printf("Moi ban chon mon: ");
			scanf("%d", &chon);
				switch (chon)
				{
					case 1:
						printf("Ban da chon mon Ca phe Capuchino voi gia %.3fN\n", capu);
						sum += capu;
						break;
					case 2:
						printf("Ban da chon mon Ca phe Trung voi gia %.3fN\n", egg);
						sum += egg;
						break;
					case 3:
						printf("Ban da chon mon Ca phe Sua dua voi gia %.3fN\n", dua);
						sum += dua;
						break;
					default:
						printf("Ban da chon nham mon, moi ban chon lai\n");
						break;
				}
			}	
			while ((chon<1) || (chon>3));
			printf("Ban co muon chon mon tiep ko, neu muon chon Y, neu khong chon N: \n");
			fflush(stdin);
			scanf("%c", &ch);
			ch = tolower(ch);
		}	
		while (ch == 'y');
		printf("Tong so tien ban phai thanh toan la: %.3fN", sum);		
	return 0;
}
