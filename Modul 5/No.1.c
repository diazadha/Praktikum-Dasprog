# include <stdio.h>

/************************************
Program matriks
Deskripsi : Membuat matriks dengan kolom dan baris ditentukan oleh user
IS : User siap memasukkan jumlah baris dan kolom dan angka/huruf
FS : Matriks terbentuk sesuai keinginan

Dibuat oleh
Nama : Diaz Adha Asri Prakoso
Tanggal :  14 Desember 2018
**************************************/
void main (void)

{	int m, n, i, j;
	char b[100];
	 
	printf ("Masukan jumlah baris = ");
	scanf ("%d",&m);
	printf ("Masukan jumlah kolom = ");
	scanf ("%d",&n);
	printf("Masukkan huruf/angka = ") ;
	scanf ("%s", &b) ;
	
	
	i = 1;
	while (i <= m)
	{
		j=1;
		while (j<=n)
		{
			printf (" %s",&b);
			j++;
		}
		printf("\n");
		i++;
	}
	system ("PAUSE") ;

}
