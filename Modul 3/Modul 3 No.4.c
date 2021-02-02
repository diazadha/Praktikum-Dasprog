#include <stdio.h>

/**********************************************
Program Logistik
Deskripsi : Mengetahui kesimpulan barang dari perusahaan logistik
IS : User siap menginput dimensi kotak besar dan jumlah kotak kecil
FS : Di layar tertulis Siap kirim atau tambah kotak besar atau masih ada ruang atau tambah kotak kecil

Dibuat oleh :
Nama : Diaz Adha Asri Prakoso
Tanggal : 24 Oktober 2018
**********************************************/

void main (void)

//KAMUS
{	int a, b, c, d, kotakbesar, panjang, lebar, tinggi, kotakkecil;
//ALGORITMA	
	printf ("Panjang dimensi kotak besar = ");
	scanf ("%d", &a);
	printf ("Lebar dimensi kotak besar = ");
	scanf ("%d", &b);
	printf ("Tinggi dimensi kotak besar = ");
	scanf ("%d", &c);
	printf ("Jumlah kotak kecil = ");
	scanf ("%d", &d);
	
	kotakbesar = a * b * c;	
	
	printf ("Kotak besar = %d Cm\n\n", kotakbesar);
	
	panjang = 4;
	lebar = 3;
	tinggi = 3;
	
	kotakkecil = panjang * lebar * tinggi *d;
	
	printf ("**************************INFORMATION*******************************\n"
			"Jumlah ukuran 1 kotak kecil : \n"
			"Panjang = 4 Cm \nLebar = 3 Cm \nTinggi = 3 Cm\n"
			"Jadi, 1 kotak kecil menghabiskan ruang kotak besar sebesar 36 cm\n"
			"********************************************************************\n\n");
	
	printf ("Ukuran kotak kecil seluruhnya = %d Cm\n\n", kotakkecil);
	
	printf ("*************KESIMPULAN*************\n");
	if (kotakkecil!=kotakbesar||a<4||b<3||c<3)
	{
		if (kotakkecil<kotakbesar&&a>=4&&b>=3&&c>=3)
		{
			printf ("Masih ada ruang, tambah kotak kecil\n");
		}
		else //kotakkecil>kotakbesar
		{
			if (kotakkecil>kotakbesar)
			{
			printf ("Tambah kotak besar\n");
			}
			else //kotakkecil<kotakbesar OR a<4 OR b<3 OR c<3 
			{
			printf ("Kotak kecil tidak dapat masuk ke kotak besar\n");
			}
		}
	}
	else //kotakkecil=kotakbesar AND a>=4 AND b>=3 AND c>=3
	{
		printf ("Siap kirim\n");
	}
	printf ("************************************\n\n");
	
	
	
	system ("PAUSE");
	
	
	
	
}
