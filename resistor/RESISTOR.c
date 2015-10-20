#include <stdio.h>//IRWAN PRAMONO
#include <math.h>//D400150067
#include <string.h>
void hitung_3gelang(){
	float g1=0,g2=0,g3=0,rg3,hasil;
	int n=0;
	char warna[30];
	for(n=1; n<=3; n++){
		printf("Masukan warna gelang %d : ",n);
		scanf("%s",warna);

		if(strcmp(warna,"hitam")==0){
			switch(n){
				case 1: g1=0; break;
				case 2: g2=0; break;
				case 3: g3=0; break;
			}
		}else if(strcmp(warna,"coklat")==0){
			switch(n){
				case 1: g1=1; break;
				case 2: g2=1; break;
				case 3: g3=1; break;
			}
		}else if(strcmp(warna,"merah")==0){
			switch(n){
				case 1: g1=2; break;
				case 2: g2=2; break;
				case 3: g3=2; break;
			}
		}else if(strcmp(warna,"orange")==0){
			switch(n){
				case 1: g1=3; break;
				case 2: g2=3; break;
				case 3: g3=3; break;
			}
		}else if(strcmp(warna,"kuning")==0){
			switch(n){
				case 1: g1=4; break;
				case 2: g2=4; break;
				case 3: g3=4; break;
			}
		}else if(strcmp(warna,"hijau")==0){
			switch(n){
				case 1: g1=5; break;
				case 2: g2=5; break;
				case 3: g3=5; break;
			}
		}else if(strcmp(warna,"biru")==0){
			switch(n){
				case 1: g1=6; break;
				case 2: g2=6; break;
				case 3: g3=6; break;
			}
		}else if(strcmp(warna,"ungu")==0){
			switch(n){
				case 1: g1=7; break;
				case 2: g2=7; break;
				case 3: g3=7; break;
			}
		}else if(strcmp(warna,"abu-abu")==0){
			switch(n){
				case 1: g1=8; break;
				case 2: g2=8; break;
				case 3: g3=8; break;
			}
		}else if(strcmp(warna,"putih")==0){
			switch(n){
				case 1: g1=9; break;
				case 2: g2=9; break;
				case 3: g3=9; break;
			}
		}else if(strcmp(warna,"emas")==0){
			switch(n){
				case 1: g1=0; break;
				case 2: g2=0; break;
				case 3: g3=-1; break;
			}
		}else if(strcmp(warna,"perak")==0){
			switch(n){
				case 1: g1=0; break;
				case 2: g2=0; break;
				case 3: g3=-2; break;
			}
		}else if(strcmp(warna,"tak-berwarna")==0){
			switch(n){
				case 1: g1=0; break;
				case 2: g2=0; break;
				case 3: g3=0; break;
			}
		}
	}
	printf("==============================\n");
	hasil = ((g1*10) +g2)* pow(10,(float)g3);
	rg3 = pow(10,(float)g3);
	printf("Gelang 1 : %2.1f\nGelang 2 : %2.1f\nGelang 3 : %2.2f\n",g1,g2,rg3);
	printf("Nilai Resisitor R = %3.2f Ohm",hasil);
}
void hitung_4gelang(){
	float rg3,g1=0,g2=0,g3=0,g4=0,hasil;
	int n=0;
	const char persen = '%';
	char warna[30];
	for(n=1; n<=4; n++){
		printf("Masukan warna gelang %d : ",n);
		scanf("%s",warna);

		if(strcmp(warna,"hitam")==0){
			switch(n){
				case 1: g1=0; break;
				case 2: g2=0; break;
				case 3: g3=0; break;
				case 4: g4=0; break;
			}
		}else if(strcmp(warna,"coklat")==0){
			switch(n){
				case 1: g1=1; break;
				case 2: g2=1; break;
				case 3: g3=1; break;
				case 4: g4=1; break;
			}
		}else if(strcmp(warna,"merah")==0){
			switch(n){
				case 1: g1=2; break;
				case 2: g2=2; break;
				case 3: g3=2; break;
				case 4: g4=2; break;
			}
		}else if(strcmp(warna,"orange")==0){
			switch(n){
				case 1: g1=3; break;
				case 2: g2=3; break;
				case 3: g3=3; break;
				case 4: g4=0; break;
			}
		}else if(strcmp(warna,"kuning")==0){
			switch(n){
				case 1: g1=4; break;
				case 2: g2=4; break;
				case 3: g3=4; break;
				case 4: g4=0; break;
			}
		}else if(strcmp(warna,"hijau")==0){
			switch(n){
				case 1: g1=5; break;
				case 2: g2=5; break;
				case 3: g3=5; break;
				case 4: g4=0.5; break;
			}
		}else if(strcmp(warna,"biru")==0){
			switch(n){
				case 1: g1=6; break;
				case 2: g2=6; break;
				case 3: g3=6; break;
				case 4: g4=0.25; break;
			}
		}else if(strcmp(warna,"ungu")==0){
			switch(n){
				case 1: g1=7; break;
				case 2: g2=7; break;
				case 3: g3=7; break;
				case 4: g4=0,10; break;
			}
		}else if(strcmp(warna,"abu-abu")==0){
			switch(n){
				case 1: g1=8; break;
				case 2: g2=8; break;
				case 3: g3=8; break;
				case 4: g4=0.05; break;
			}
		}else if(strcmp(warna,"putih")==0){
			switch(n){
				case 1: g1=9; break;
				case 2: g2=9; break;
				case 3: g3=9; break;
				case 4: g4=0; break;
			}
		}else if(strcmp(warna,"emas")==0){
			switch(n){
				case 1: g1=0; break;
				case 2: g2=0; break;
				case 3: g3=-1; break;
				case 4: g4=5; break;
			}
		}else if(strcmp(warna,"perak")==0){
			switch(n){
				case 1: g1=0; break;
				case 2: g2=0; break;
				case 3: g3=-2; break;
				case 4: g4=10; break;
			}
		}else if(strcmp(warna,"tak-berwarna")==0){
			switch(n){
				case 1: g1=0; break;
				case 2: g2=0; break;
				case 3: g3=0; break;
				case 4: g4=20; break;
			}
		}
	}
	printf("==============================\n");
	hasil = ((g1*10)+g2) * pow(10,(float)g3);
	rg3 = pow(10,(float)g3);
	printf("Gelang 1 : %2.2f\nGelang 2 : %2.2f\nGelang 3 : %.2f\n",g1,g2,rg3);
	printf("Nilai Resisitor R = %.2f Ohm\n",hasil);
	printf("Nilai Toleransi = %2.2f %c",g4,persen);
}
void hitung_5gelang(){
	float rg4,g1=0,g2=0,g3=0,g4=0,g5=0,hasil;
	int n=0;
	const char persen = '%';
	char warna[30];
	for(n=1; n<=5; n++){
		printf("Masukan warna gelang %d : ",n);
		scanf("%s",warna);

		if(strcmp(warna,"hitam")==0){
			switch(n){
				case 1: g1=0; break;
				case 2: g2=0; break;
				case 3: g3=0; break;
				case 4: g4=0; break;
				case 5: g5=0; break;
			}
		}else if(strcmp(warna,"coklat")==0){
			switch(n){
				case 1: g1=1; break;
				case 2: g2=1; break;
				case 3: g3=1; break;
				case 4: g4=1; break;
				case 5: g5=1; break;
			}
		}else if(strcmp(warna,"merah")==0){
			switch(n){
				case 1: g1=2; break;
				case 2: g2=2; break;
				case 3: g3=2; break;
				case 4: g4=2; break;
				case 5: g5=2; break;
			}
		}else if(strcmp(warna,"orange")==0){
			switch(n){
				case 1: g1=3; break;
				case 2: g2=3; break;
				case 3: g3=3; break;
				case 4: g4=3; break;
				case 5: g5=0; break;
			}
		}else if(strcmp(warna,"kuning")==0){
			switch(n){
				case 1: g1=4; break;
				case 2: g2=4; break;
				case 3: g3=4; break;
				case 4: g4=4; break;
				case 5: g5=0; break;
			}
		}else if(strcmp(warna,"hijau")==0){
			switch(n){
				case 1: g1=5; break;
				case 2: g2=5; break;
				case 3: g3=5; break;
				case 4: g4=5; break;
				case 5: g5=0.5; break;
			}
		}else if(strcmp(warna,"biru")==0){
			switch(n){
				case 1: g1=6; break;
				case 2: g2=6; break;
				case 3: g3=6; break;
				case 4: g4=6; break;
				case 5: g5=0.25; break;
			}
		}else if(strcmp(warna,"ungu")==0){
			switch(n){
				case 1: g1=7; break;
				case 2: g2=7; break;
				case 3: g3=7; break;
				case 4: g4=7; break;
				case 5: g5=0.1; break;
			}
		}else if(strcmp(warna,"abu-abu")==0){
			switch(n){
				case 1: g1=8; break;
				case 2: g2=8; break;
				case 3: g3=8; break;
				case 4: g4=0; break;
				case 5: g5=0; break;
			}
		}else if(strcmp(warna,"putih")==0){
			switch(n){
				case 1: g1=9; break;
				case 2: g2=9; break;
				case 3: g3=9; break;
				case 4: g4=0; break;
				case 5: g5=0; break;
			}
		}else if(strcmp(warna,"emas")==0){
			switch(n){
				case 1: g1=0; break;
				case 2: g2=0; break;
				case 3: g3=0; break;
				case 4: g4=-1; break;
				case 5: g5=5; break;
			}
		}else if(strcmp(warna,"perak")==0){
			switch(n){
				case 1: g1=0; break;
				case 2: g2=0; break;
				case 3: g3=0; break;
				case 4: g4=-2; break;
				case 5: g5=10; break;
			}
		}else if(strcmp(warna,"tak-berwarna")==0){
			switch(n){
				case 1: g1=0; break;
				case 2: g2=0; break;
				case 3: g3=0; break;
				case 4: g4=0; break;
				case 5: g5=20; break;
			}
		}
	}
	printf("==============================\n");
	hasil = (((g1*100)+g2*10)+g3) * pow(10,(float)g4);
	rg4 = pow(10,(float)g4);
	printf("Gelang 1 : %2.2f\nGelang 2 : %2.2f\nGelang 3 : %2.2f\nGelang 4 : %.2f\n",g1,g2,g3,rg4);
	printf("Nilai Resisitor R = %.2f Ohm\n",hasil);
	printf("Nilai Toleransi = %.2f %c",g5,persen);
}
void hitung_6gelang(){
	float rg4,g1=0,g2=0,g3=0,g4=0,g5=0,hasil;
	int n=0,g6=0;
	const char persen = '%';
	char warna[30];
	for(n=1; n<=6; n++){
		printf("Masukan warna gelang %d : ",n);
		scanf("%s",warna);

		if(strcmp(warna,"hitam")==0){
			switch(n){
				case 1: g1=0; break;
				case 2: g2=0; break;
				case 3: g3=0; break;
				case 4: g4=0; break;
				case 5: g5=0; break;
				case 6: g6=250; break;
			}
		}else if(strcmp(warna,"coklat")==0){
			switch(n){
				case 1: g1=1; break;
				case 2: g2=1; break;
				case 3: g3=1; break;
				case 4: g4=1; break;
				case 5: g5=0; break;
				case 6: g6=100; break;
			}
		}else if(strcmp(warna,"merah")==0){
			switch(n){
				case 1: g1=2; break;
				case 2: g2=2; break;
				case 3: g3=2; break;
				case 4: g4=2; break;
				case 5: g5=2; break;
				case 6: g6=50; break;
			}
		}else if(strcmp(warna,"orange")==0){
			switch(n){
				case 1: g1=3; break;
				case 2: g2=3; break;
				case 3: g3=3; break;
				case 4: g4=3; break;
				case 5: g5=0; break;
				case 6: g6=15; break;
			}
		}else if(strcmp(warna,"kuning")==0){
			switch(n){
				case 1: g1=4; break;
				case 2: g2=4; break;
				case 3: g3=4; break;
				case 4: g4=4; break;
				case 5: g5=0; break;
				case 6: g6=25; break;
			}
		}else if(strcmp(warna,"hijau")==0){
			switch(n){
				case 1: g1=5; break;
				case 2: g2=5; break;
				case 3: g3=5; break;
				case 4: g4=5; break;
				case 5: g5=0.5; break;
				case 6: g6=20; break;
			}
		}else if(strcmp(warna,"biru")==0){
			switch(n){
				case 1: g1=6; break;
				case 2: g2=6; break;
				case 3: g3=6; break;
				case 4: g4=6; break;
				case 5: g5=0.25; break;
				case 6: g6=10; break;
			}
		}else if(strcmp(warna,"ungu")==0){
			switch(n){
				case 1: g1=7; break;
				case 2: g2=7; break;
				case 3: g3=7; break;
				case 4: g4=7; break;
				case 5: g5=0.1; break;
				case 6: g6=5; break;
			}
		}else if(strcmp(warna,"abu-abu")==0){
			switch(n){
				case 1: g1=8; break;
				case 2: g2=8; break;
				case 3: g3=8; break;
				case 4: g4=8; break;
				case 5: g5=0.05; break;
				case 6: g6=1; break;
			}
		}else if(strcmp(warna,"putih")==0){
			switch(n){
				case 1: g1=9; break;
				case 2: g2=9; break;
				case 3: g3=9; break;
				case 4: g4=9; break;
				case 5: g5=0; break;
				case 6: g6=0; break;
			}
		}else if(strcmp(warna,"emas")==0){
			switch(n){
				case 1: g1=0; break;
				case 2: g2=0; break;
				case 3: g3=0; break;
				case 4: g4=-1; break;
				case 5: g5=5; break;
				case 6: g6=0; break;
			}
		}else if(strcmp(warna,"perak")==0){
			switch(n){
				case 1: g1=0; break;
				case 2: g2=0; break;
				case 3: g3=0; break;
				case 4: g4=-2; break;
				case 5: g5=10; break;
				case 6: g6=0; break;
			}
		}else if(strcmp(warna,"tak-berwarna")==0){
			switch(n){
				case 1: g1=0; break;
				case 2: g2=0; break;
				case 3: g3=0; break;
				case 4: g4=20; break;
				case 5: g5=0; break;
				case 6: g6=0; break;
			}
		}
	}
	printf("==============================\n");
	hasil = (((g1*100)+g2*10)+g3) * pow(10,(float)g4);
	rg4 = pow(10,(float)g4);
	printf("Gelang 1 : %2.2f\nGelang 2 : %2.2f\nGelang 3 : %2.2f\nGelang 4 : %.2f\n",g1,g2,g3,rg4);
	printf("Nilai Resisitor R = %.2f Ohm\n",hasil);
	printf("Nilai Toleransi = %.2f %c\n",g5,persen);
	printf("Temperatur = %dppm/K",g6);

}
int main(){
	int gelang = 0;

	while((gelang<3) || (gelang>6)){
		printf("Masukan jumlah gelang : ");
		scanf("%d",&gelang);
		printf("==============================\n");
		if((gelang<3) || (gelang>6)){
			printf("\nMasukan gelang 3 s/d 6\n");
		}
		if(gelang==3){
			hitung_3gelang();
		}else if(gelang==4){
			hitung_4gelang();
		}else if(gelang==5){
			hitung_5gelang();
		}else if(gelang==6){
			hitung_6gelang();
		}
	}
	return 0;
}
