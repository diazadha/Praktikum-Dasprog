#include <stdio.h>

/**********************************************
Program Nilai
Deskripsi : Mengetahui grade dari sebuah nilai yang diinput
IS : User siap menginput nilai
FS : Di layar tertulis grade nilai

Dibuat oleh :
Nama : Diaz Adha Asri Prakoso
Tanggal : 24 Oktober 2018
**********************************************/

void main (void)

//KAMUS
{	float Nilai;
//ALGORITMA	
	printf ("Masukkan Nilai = ");
	scanf ("%f", &Nilai);
	
	if (Nilai<80)
	{
		if (Nilai>=70)
		{
			printf ("Grade B\n");
		}
		else //Nilai < 70
		{
			if (Nilai>=60&&Nilai<70)
			{
				printf ("Grade C\n");
			}
			else //Nilai < 60 OR Nilai >= 70
			{
				if (Nilai>=50&&Nilai<60)
				{
					printf ("Grade D\n");
				}
				else //Nilai < 50 OR Nilai >= 60
				{
					printf ("Grade E\n");
				}
			}
		}
	}
	else //Nilai >= 80
	{
		printf ("Grade A\n");
	}
		
	system ("PAUSE");		

}
