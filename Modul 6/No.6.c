#include <stdio.h>

/*************************************
Program elemenarray
Deskripsi : Menjumlahkan elemen array A dan array B
IS : User siap menginput elemen array A dari 1 sampai 16 dan array B dari 1 sampai 16 
FS : Tampil di layar jumlah dari array A dan B

Dibuat oleh :
Nama : Diaz Adha Asri Prakoso
Tanggal : 24 Desember 2018
**************************************/

void main (void)

{	int R[16], S[16], y, a, z, h,i;

	printf ("Untuk array pertama A, masukan:\n");
	y=0;
	for (a=1; a<=4; a++)
	{
		printf ("elemen array ke 1 dan %d : ", a);
		scanf ("%d", &R[y]);
		y++;
	}
	for (a=1; a<=4; a++)
	{
		printf ("elemen array ke 2 dan %d : ", a);
		scanf ("%d", &R[y]);
		y++;
	}
	for (a=1; a<=4; a++)
	{
		printf ("elemen array ke 3 dan %d : ", a);
		scanf ("%d", &R[y]);
		y++;
	}
	for (a=1; a<=4; a++)
	{
		printf ("elemen array ke 4 dan %d : ", a);
		scanf ("%d", &R[y]);
		y++;
	}
	z=0;
	printf ("Untuk array kedua B, masukkan:\n");
	for (a=1; a<=4; a++)
	{
		printf ("elemen array ke 1 dan %d : ", a);
		scanf ("%d", &S[z]);
		z++;
	}
	for (a=1; a<=4; a++)
	{
		printf ("elemen array ke 2 dan %d : ", a);
		scanf ("%d", &S[z]);
		z++;
	}
	for (a=1; a<=4; a++)
	{
		printf ("elemen array ke 3 dan %d : ", a);
		scanf ("%d", &S[z]);
		z++;
	}
	for (a=1; a<=4; a++)
	{
		printf ("elemen array ke 4 dan %d : ", a);
		scanf ("%d", &S[z]);
		z++;
	}
	printf ("\n");
	
	h=0;
	i=0;
	for (a=1; a<=4; a++)
	{
		printf ("Isi dari array ketiga C pada elemen 1 dan %d adalah %d\n", a, R[h]+S[i]);
		h++;
		i++;
	}
	for (a=1; a<=4; a++)
	{
		printf ("isi dari array ketiga C pada elemen 2 dan %d adalah %d\n", a, R[h]+S[i]);
		h++;
		i++;
	}
	for (a=1; a<=4; a++)
	{
		printf ("isi dari array ketiga C pada elemen 3 dan %d adalah %d\n", a, R[h]+S[i]);
		h++;
		i++;
	}
	for (a=1; a<=4; a++)
	{
		printf ("isi dari array ketiga C pada elemen 4 dan %d adalah %d\n", a, R[h]+S[i]);
		h++;
		i++;
	}
	system ("PAUSE");
	
	
}
