#include <stdio.h>
#include <ctype.h>

int main ()
{
	char ch;
	int id, pass;
	long int tien, tongtien, du;
	tongtien = 0;
	printf("Nhap so tien du trong tai khoan cua ban (Nghin): ");
	scanf("%d", &du);
	do
	{
		printf("Moi ban nhap ten tai khoan: ");
		scanf("%d", &id);
		printf("Moi ban nhap mat khau: ");
		scanf("%d", &pass);
		if ((id == 123) && (pass == 1234))
		{
			do
			{
				printf("Moi ban nhap so tien muon rut (Nghin): ");
				scanf("%d", &tien);
				if ((du-tien) >= 0)
				{
					du -= tien;
					printf("So tien du trong tai khoan cua ban la: %d \n", du);
					printf("Ban co muon rut them tien khong? (Y/N): ");
					tongtien += tien;
					fflush(stdin);
					ch = getchar();
					ch = tolower(ch);
				}
				else
				{
					printf("So tien du trong tai khoan khong du de ban rut so tien vua nhap.\n");
					printf("So tien du trong tai khoan cua ban la: %d\n", tien);
					printf("Neu ban muon rut tiep chon (Y), khong thi chon (N)");
					fflush(stdin);
					ch = getchar();
					ch = tolower(ch);
				}
			} while (ch == 'y');
		}
		else
			printf("Ban nhap sai ten tai khoan hoac mat khau, moi nhap lai.\n");
	} while ((id != 123) || (pass != 1234));
	printf("Tong so tien ban vua rut ra la: %dN", tongtien);
	return 0;
}
