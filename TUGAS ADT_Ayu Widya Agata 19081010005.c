#include <stdio.h>
#include <stdlib.h>

// program data kependudukan
typedef struct
{
		char Alamat[20];
        char RT[5];
        char RW[5];
        char Kel[30];
        char kec[20];
        char kota[20];
	
        char nik[20];
        char nama[30];
        char tempatLhr[20];
        char tanggalLahir[20];
        char jenisKelamin[10];
        char gol[2];
        char agama[10];
        char status[15];
        char pekerjaan[15];
        char kewarganegaraan[7];

}KTP;//tipe KTP

//deklarasi variabel
KTP input();
void output(KTP saya);

int main()
{
	  printf("\n\t\t\t Program Sederhana Mengenai ADT\n\n");

          KTP saya;
          printf("\t\t\tSilahkan input data dibawah ini: \n");
          printf("Input NIK\t\t\t: "); 
		  fflush(stdin); gets(saya.nik);
          printf("Input Nama\t\t\t: "); 
		  fflush(stdin); gets(saya.nama);
          printf("Input Tempat Lahir\t\t: "); 
		  fflush(stdin); gets(saya.tempatLhr);
          printf("Input Tanggal Lahir(dd mm yyyy)\t: "); 
		  scanf("%d",&saya.tanggalLahir);
          printf("Input Jenis Kelamin\t\t: "); 
		  fflush(stdin); gets(saya.jenisKelamin);
          printf("Input Golongan darah\t\t: "); 
		  fflush(stdin); gets(saya.gol);
          printf("Input Alamat\t\t\t: "); 
		  fflush(stdin); gets(saya.Alamat);
          printf("Input RT\t\t\t: "); 
		  scanf("%d",&saya.RT);
		  printf("Input RW\t\t\t: "); 
		  scanf("%d", &saya.RW);
          printf("Input Kel/Desa\t\t\t: "); 
		  fflush(stdin); gets(saya.Kel);
          printf("Input Kecamatan\t\t\t: "); 
		  fflush(stdin); gets(saya.kec);
          printf("Input Kab/Kota\t\t\t: "); 
		  fflush(stdin); gets(saya.kota);
          printf("Input Agama\t\t\t: "); 
		  fflush(stdin); gets(saya.agama);
          printf("Input Status Perkawinan\t\t: "); 
		  fflush(stdin); gets(saya.status);
          printf("Input Pekerjaan\t\t\t: "); 
		  fflush(stdin); gets(saya.pekerjaan);
          printf("Input Kewarganegaraan\t\t: "); 
		  fflush(stdin); gets(saya.kewarganegaraan);


          puts("-----------------------------------------------------");
          puts(" DATA KEPENDUDUKAN ");
          puts("");
          printf("NIK\t\t\t: %s\n",saya.nik);
          printf("Tempat/Tgl Lahir\t: %s,%d\n",saya.tempatLhr,saya.tanggalLahir);
          printf("Jenis Kelamin\t\t: %s\n",saya.jenisKelamin);
          printf("Golongan Darah\t\t: %s\n",saya.gol);
          printf("Alamat\t\t\t: %s\n",saya.Alamat);
          printf("\t RT/RW \t\t: %d/%d\n",saya.RT,saya.RW);
          printf("\t Kel/Desa \t: %s\n",saya.Kel);
          printf("\t Kecamatan\t: %s\n",saya.kec);
          printf("\t Kabupaten/Kota\t: %s\n",saya.kota);
          printf("Agama\t\t\t: %s\n",saya.agama);
          printf("Status Perkawinan\t: %s\n",saya.status);
          printf("Pekerjaan\t\t: %s\n",saya.pekerjaan);
          printf("Kewarganegaraan\t\t: %s\n",saya.kewarganegaraan);
          
return 0;
}
