#include <stdio.h>
#include <time.h>
#include <string.h>

void tampilkan_kalender() {

	 time_t DETIK;
	 struct tm *info;
     char buffer[100];
	 char HARI[20];

	 time( &DETIK );  //mengumpulkan informasi jumlah detik

	 //merubah format data  ( localtime( ))
	 //dari JUMLAH DETIK menjadi KALENDER
	 info = localtime( &DETIK );
	 //merubah info menjadi TEKS

     strftime(buffer,100," %d %B %Y - %H:%M:%S", info);
	 // printf("Hari ke %ld \n", info.tm_wday);

	strftime(HARI,10,"%A", info);
	if ( strcmp(HARI,"Monday") == 0 ) {
			printf("\n Hari ini SENIN ");
			printf(" Pada Tanggal: | %s |\n", buffer );
	}
	if ( strcmp(HARI,"Tuesday") == 0 ) {
			printf("\n Hari ini SELASA ");
			printf(" Pada Tanggal: | %s |\n", buffer );
	}
	if ( strcmp(HARI,"Wednesday") == 0 ) {
			printf("\n Hari ini RABU ");
			printf(" Pada Tanggal: | %s |\n", buffer );
	}
	if ( strcmp(HARI,"Thursday") == 0 ) {
			printf("\n Hari ini KAMIS ");
			printf(" Pada Tanggal: | %s |\n", buffer );
	}
	if ( strcmp(HARI,"Friday") == 0 ) {
			printf("\n Hari ini JUM'AT ");
			printf(" Pada Tanggal: | %s |\n", buffer );
	}
	if ( strcmp(HARI,"Saturday") == 0 ) {
			printf("\n Hari ini SABTU ");
			printf(" Pada Tanggal: | %s |\n", buffer );
	}
	if ( strcmp(HARI,"Sunday") == 0 ) {
			printf("\n Hari ini MINGGU ");
			printf(" Pada Tanggal: | %s |\n", buffer );
	}
}

int main ()
{
  time_t AWAL=0, AKHIR=0;

	time( &AWAL );
	while (1) {
		time( &AKHIR );
		if ( AKHIR - AWAL > 0 ) {
			//tampilkan tanggal
			tampilkan_kalender();
			AWAL = AKHIR;
		}

	}

   return(0);
}
