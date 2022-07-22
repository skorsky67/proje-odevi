#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#include <process.h>
#include <time.h>
#include <conio.h>



struct sorular{

char  soru[200];
char  sikA[50];
char  sikB[50];
char  sikC[50];
char  sikD[50];
char  dogrucevap[50];
int no;

}soru;
struct sorular sorum[50];
struct oyuncu{
	char oyuncu_adi[50];
	char cevap[50];
	int puan;
	int temp;
}oyuncu;
struct oyuncu dizi[10];


// Fonksiyonlar

    void delay(float number_of_seconds) 
{ 
    // Converting time into milli_seconds 
    int milli_seconds = 1000 * number_of_seconds; 
  
    // Storing start time 
    clock_t start_time = clock(); 
  
    // looping till required time is not achieved 
    while (clock() < start_time + milli_seconds) ;}
    void xy(int x, int y){
	COORD coord;
	coord.X=x;
	coord.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void soru_ekle();
void soru_sil();
void soru_goster();
void soru_guncelle();
void oyna();
void skorlar ();
void admin_girisi ();
void kullanici_girisi ();
void cikis ();
void tire();
void bosluk();
void loading();
void adminselam();
int main (){

	int n;
	system("COLOR 0E");
	for(n=0;n<13;n++){
		printf("*********************************************************************************************\n");
		delay(0.1);	
	
	}
	delay(0.1);
	printf("****************************   GENEL KULTUR OYUNUMUZA HOSGELDINIZ  **************************\n");
	delay(0.1);
	
	for(n=0;n<13;n++){
	
	    printf("*********************************************************************************************\n");
		delay(0.1);
	}
	
	delay(2);
	
	system("CLS");
	loading();
	system("COLOR 0E");
	xy(52,15);
	printf("\t***MENU*** ");
	xy(52,16);
	printf("1-Admin Girisi\n");
	xy(52,17);
	printf("2-Kullanici Girisi\n");
	xy(52,18);
	printf("3-Cikis\n");
	xy(51,19);
	printf(" Lutfen islemi seciniz:");
			
	
	switch(getch()){
 case '1':{ // Admin girisi
 system("cls");
 adminselam();
 admin_girisi();
  break;
 }
 case '2':{ //Kullanýcý girisi
 system("cls");
	loading();
 kullanici_girisi();
  break;
 }
 case '3':{ // Cikis
 		system("cls");
 			xy(52,15);
				printf("\n                                                     cikis yapiliyor       ");
				delay(0.5);
				printf(".");
				delay(0.5);
				printf(".");
				delay(0.5);
				printf(".");
				delay(0.5);
				printf("\a.");
				system("CLS");
				exit(1);
  break;
 }
 default:{
  printf("Hatali Giris");
  exit(1);
  break;
 }
}
while(1);
 getch();
 return 0;	
}

// ADMÝN GÝRÝSÝ
void admin_girisi() {
	int sifre;
	printf("BIR SIFRE GIRINIZ :");
	scanf("%d",&sifre);
	system("CLS");

	if(sifre == 30793035){
		while(1){
		char secim;
		system("COLOR 0E");
		xy(52,14);
		printf("***ADMIN GIRISI MENUSU***");
		xy(52,15);
		printf("1-soru ekle\n ");
		xy(52,16);
		printf("2-soru sil\n");
		xy(52,17);
		printf("3-soru goster\n");
		xy(52,18);	
		printf("4-soru guncelle\n");
		xy(52,19);	
		printf("5-oyun oyna\n");
		xy(52,20);
		printf("6-skorlar\n");
		xy(52,21);
		printf("7-cikis\n");
		xy(51,22);
		printf("Lutfen nasil giris yapacaginizi seciniz:   ");
		secim=getchar();
		system("CLS");
		
		switch (secim){
			
			case '1':
				loading();
				soru_ekle();break;
			case '2':
				loading();
				soru_sil();break;
			case '3':
				loading();
				soru_goster();break;
			case'4':
				loading();
				soru_guncelle();break;	
			case '5':
				loading();	
				oyna();break;
			case '6':
				loading();	
				skorlar();break;
			
			case '7':
				xy(52,15);
				printf("\n                                                     cikis yapiliyor       ");
				delay(0.5);
				printf(".");
				delay(0.5);
				printf(".");
				delay(0.5);
				printf("\a.");
				system("CLS");
				exit(1);
				break;
			default:{

				break;
				}	
			}	
		}
		}else{
				system("CLS");
				xy(52,15);
				printf("\aHATALI GIRIS YAPTINIZ TEKRAR DENEYINIZ :(");
				delay(2.0);
				system("CLS");
				exit(1);	
		}
	}

void kullanici_girisi (){
	int no;
	system("CLS");

		while(1){
		char secim;
		system("COLOR 0E");
		xy(54,14);
		printf("***KULLANICI GIRISI MENUSU***");
		xy(54,15);
		printf("1-oyun oyna\n ");
		xy(54,16);
		printf("2-en yukek 3 skoru goster\n");
		xy(54,17);
		printf("3-cikis\n");
		xy(53,18);	
		printf("Lutfen nasil giris yapacaginizi seciniz: ");
		
		secim=getchar();
		system("CLS");
		switch(secim){
			case '1':
				loading();
				oyna();
				break;
			case '2':
				loading();	
				skorlar();
				break;
			case '3':
				
				printf("\n\n\n\n\n\n\n\n\n\n\n\n");
				printf("\n                                                     cikis yapiliyor       ");
				delay(0.5);
				printf(".");
				delay(0.5);
				printf(".");
				delay(0.5);
				printf("\a.");
				system("CLS");
				exit(1);
				break;
			default:{

				break;
			}					
		}
		
	}
	
		

	
	
}

// soru ekle
void soru_ekle() {
	system("COLOR 0E");
	printf("************************************************************************************************************************ \n");
	printf("************************************************************************************************************************ \n");
	printf("************************************************************************************************************************ \n");
	printf("************************************************************************************************************************ \n");
	printf(" \n                                                          SORU EKLE \n\n");
	printf("************************************************************************************************************************ \n");
	printf("************************************************************************************************************************ \n");
	printf("************************************************************************************************************************ \n");
	printf("************************************************************************************************************************ \n");


 FILE *dosya=fopen("sorular.txt","a"); 
 if(dosya == NULL){
  puts("Dosya acilamadi.");
  exit(1);}
int no;
int i=0;
	
	printf("#  soru  bilgilerini #\n");
 do{ 
	i++;
   fflush(stdin);
   printf("soru numarasi:");
   scanf("%d",&sorum[i].no);
  printf("%d. soru : ",sorum[i].no);
  gets(sorum[i].soru);
  gets(sorum[i].soru);
  printf("%d.sorunun A Sikki : ",sorum[i].no);
 	gets(sorum[i].sikA);
    printf("%d.sorunun B Sikki : ",sorum[i].no);
 	gets(sorum[i].sikB);
    printf("%d.sorunun C Sikki : ",sorum[i].no);
	gets(sorum[i].sikC);
    printf("%d.sorunun D Sikki : ",sorum[i].no);
	gets(sorum[i].sikD);
    printf("%d.sorunun Dogru Sikki : ",sorum[i].no);
	gets(sorum[i].dogrucevap);
	
  printf("\n");
  	bosluk(sorum[i].soru);
  	bosluk(sorum[i].sikA);
   	bosluk(sorum[i].sikB);
	bosluk(sorum[i].sikC);
    bosluk(sorum[i].sikD);
    bosluk(sorum[i].dogrucevap);
  fprintf(dosya," %d %s\n %s\n %s\n %s\n %s\n %s\n",sorum[i].no,sorum[i].soru,sorum[i].sikA,sorum[i].sikB,sorum[i].sikC,sorum[i].sikD,sorum[i].dogrucevap);
  puts("Yeni bir kayit icin bir tusa, cikmak icin ESC tusuna basiniz.");
 }while(getch()!=27);
 fclose(dosya);
 puts("\nBilgiler kaydedildi devam etmek icin bir tusa basin ...");
 getch();
 system("CLS");
}
	

  
  // soru sil
 void soru_sil(){
system("cls");
int i;	system("COLOR 0E");
		printf("************************************************************************************************************************ \n");
		printf("************************************************************************************************************************ \n");
		printf("************************************************************************************************************************ \n");
		printf("************************************************************************************************************************ \n");
		printf("************************************************************************************************************************ \n");
		printf("\n                                           SORU SIL\n");
		printf("************************************************************************************************************************ \n");
		printf("************************************************************************************************************************ \n");
		printf("************************************************************************************************************************ \n");
		printf("************************************************************************************************************************ \n");
		printf("************************************************************************************************************************ \n");	
		FILE *dosya=fopen("sorular.txt","r");	
		while(!feof(dosya)){
			fscanf(dosya,"%d %s %s %s %s %s %s\n",&sorum[i].no,sorum[i].soru,sorum[i].sikA,sorum[i].sikB,sorum[i].sikC,sorum[i].sikD,sorum[i].dogrucevap);
			//Soru metnindeki '_' karakterleri boþluða çevriliyor
			tire(sorum[i].soru);
			//--------------------------------------------------
			printf("  %d) %s \n", sorum[i].no, sorum[i].soru);									
		}		
		printf("=========================================================\n");
		fclose(dosya);
		fclose(dosya);
		int a,b;
		//Silinecek soru no'su eðer sorular.txt içinde yoksa geçerli bir id isteniyor
		do{			
		b=0;
		printf("  Silmek istediginiz soru  numarasini girin: ");
		scanf("%d", &a);
		FILE *dosya2=fopen("sorular.txt","r");
		while(!feof(dosya2)){
				fscanf(dosya2,"%d %s %s %s %s %s %s\n",&sorum[i].no,sorum[i].soru,sorum[i].sikA,sorum[i].sikB,sorum[i].sikC,sorum[i].sikD,sorum[i].dogrucevap);
				if(sorum[i].no == a){
					b++;
				}
		}
		if(b!=1){
			printf("  Lutfen gecerli bir soru numarasi girin\n ");
		}
		fclose(dosya2);
		
		}
		while(b!=1);
		//----------------------------------------------------------------------
		
		//Silinecek soru no'suna sahip soru hariç diðer tüm sorular geçici bir dosyaya aktarýlýp sorular.txt dosyasýný silinerek geçici dosyanýn adý sorular.txt yapýlýyor
		FILE *dosya3 =fopen("sorular.txt","r");
		FILE *dosya4=fopen("sorular1.txt","a");
		int a1 = 0;
		while(!feof(dosya3)){
			fscanf(dosya3,"%d %s\n %s\n %s\n %s\n %s\n %s\n",&sorum[i].no,sorum[i].soru,sorum[i].sikA,sorum[i].sikB,sorum[i].sikC,sorum[i].sikD,sorum[i].dogrucevap);
			if(a==sorum[i].no){
				printf("\n  SORU SILINIYOR");
				delay(0.5);
				printf(".");
				delay(0.5);
				printf(".");
				delay(0.5);
				printf(".\n");
				delay(0.5);
			}
			else{
				a1++;
				fprintf(dosya4,"%d %s\n %s\n %s\n %s\n %s\n %s\n",a1,sorum[i].soru,sorum[i].sikA,sorum[i].sikB,sorum[i].sikC,sorum[i].sikD,sorum[i].dogrucevap);
			}
		
		}
		system("CLS");
		fclose(dosya3);
		fclose(dosya4);
		int ad;
		ad = remove("sorular.txt");
  		if (ad == 0) {
		  printf("\n\n\n\n\n\n\n\n\n\n                                           Soru basariyla silindi");
			delay(0.5);
			printf(".");
			delay(0.5);
			printf(".");
			delay(0.5);
			printf(".");
			
		  system("CLS");
		  
	}
  		else{
   			printf("\n  Sorular.txt silinemedi\n");
    		perror("Hata");
  		}
		rename("sorular1.txt","sorular.txt");
	
	}
  
 
  
  // soru goster 
  void soru_goster(){
  		system("COLOR 0E");
  		printf("************************************************************************************************************************ \n");
		printf("************************************************************************************************************************ \n");
		printf("************************************************************************************************************************ \n");
		printf("************************************************************************************************************************ \n");
		printf("************************************************************************************************************************ \n");
		printf("\n                                           SORU GOSTER\n");
		printf("************************************************************************************************************************ \n");
		printf("************************************************************************************************************************ \n");
		printf("************************************************************************************************************************ \n");
		printf("************************************************************************************************************************ \n");
		printf("************************************************************************************************************************ \n");	
	FILE *dosya = fopen("sorular.txt","r"); // r ile okuma islemi yapýyoruz.
 if(dosya == NULL){
  puts("Dosya acilamadi.");
  exit(1);
 }
 int i=0;
 while(!feof(dosya)){ // !feof dosyanýn sonuna geldiðinde döngüden çýkmak için
  
  fscanf(dosya,"%d %s\n %s\n %s\n %s\n %s\n %s\n",&sorum[i].no,sorum[i].soru,sorum[i].sikA,sorum[i].sikB,sorum[i].sikC,sorum[i].sikD,sorum[i].dogrucevap); // Önceden dosyaya yazdýrdýklarýmýzý þimdi belleðe yazdýrýyoruz
   if(sorum[i].soru != NULL){ // Yukarýda soru okunabilmiþ ise ekrana yazdýrmak için
    tire(sorum[i].soru);
    tire(sorum[i].sikA);
    tire(sorum[i].sikB);
    tire(sorum[i].sikC);
    tire(sorum[i].sikD);
    tire(sorum[i].dogrucevap);
	printf("%d %s\n A)%s\n B)%s\n C)%s\n D)%s\n DOGRU SIK=%s\n",sorum[i].no,sorum[i].soru,sorum[i].sikA,sorum[i].sikB,sorum[i].sikC,sorum[i].sikD,sorum[i].dogrucevap);
   }
 }
 fclose(dosya);
 puts("\n sorular listelendi devam etmek icin bir tusa basin ...");
 getch();


}
	// soru guncelle
	void soru_guncelle(){
		system("COLOR 0E");
		printf("************************************************************************************************************************ \n");
		printf("************************************************************************************************************************ \n");
		printf("************************************************************************************************************************ \n");
		printf("************************************************************************************************************************ \n");
		printf("************************************************************************************************************************ \n");
		printf("\n                                           SORU GUNCELLE\n");
		printf("************************************************************************************************************************ \n");
		printf("************************************************************************************************************************ \n");
		printf("************************************************************************************************************************ \n");
		printf("************************************************************************************************************************ \n");
		printf("************************************************************************************************************************ \n");	
	int numara,durum=0;//durum =0 ise deðiþtirme iþlemi gerçekleþmemiþtir.
	printf("\nBilgilerini degistireceginiz sorunun numarasini giriniz: ");
	scanf("%d",&numara);
	FILE *dosya = fopen("sorular.txt","r");
	FILE *yedek = fopen("yedek.txt","w");
	if(dosya == NULL){
  puts("Dosya acilamadi");
  exit(1);
 }
 int i;
 while(!feof(dosya)){
  fscanf(dosya,"%d %s\n %s\n %s\n %s\n %s\n %s\n",&sorum[i].no,sorum[i].soru,sorum[i].sikA,sorum[i].sikB,sorum[i].sikC,sorum[i].sikD,sorum[i].dogrucevap);  //Dosyadaki deðeri belleðe yazýyoruz.
  if(numara != sorum[i].no){
   fprintf(yedek,"%d %s\n %s\n %s\n %s\n %s\n %s\n",sorum[i].no,sorum[i].soru,sorum[i].sikA,sorum[i].sikB,sorum[i].sikC,sorum[i].sikD,sorum[i].dogrucevap);//dosyadan okunup belleðe yazýlan deðerler yedeðe yazýlýr.
  }
  else{//Deðerler deðiþtirilir.
   fflush(stdin);
  
   printf("soru numarasi:");
   scanf("%d",&sorum[i].no);
  printf("%d. soru : ",sorum[i].no);
  gets(sorum[i].soru);
  gets(sorum[i].soru);
  printf("%d.sorunun A Sikki : ",sorum[i].no);
 	gets(sorum[i].sikA);
    printf("%d.sorunun B Sikki : ",sorum[i].no);
 	gets(sorum[i].sikB);
    printf("%d.sorunun C Sikki : ",sorum[i].no);
	gets(sorum[i].sikC);
    printf("%d.sorunun D Sikki : ",sorum[i].no);
	gets(sorum[i].sikD);
    printf("%d.sorunun Dogru Sikki : ",sorum[i].no);
	gets(sorum[i].dogrucevap);
      printf("\n");
    bosluk(sorum[i].soru);
  	bosluk(sorum[i].sikA);
   	bosluk(sorum[i].sikB);
	bosluk(sorum[i].sikC);
    bosluk(sorum[i].sikD);
    bosluk(sorum[i].dogrucevap);  
      fprintf(yedek,"%d %s\n %s\n %s\n %s\n %s\n %s\n",sorum[i].no,sorum[i].soru,sorum[i].sikA,sorum[i].sikB,sorum[i].sikC,sorum[i].sikD,sorum[i].dogrucevap); //verileri yedek dosyasýna yazdýr
      durum=1; // deðiþme yapýldý.
  }
 }
 fclose(dosya);
 fclose(yedek);
 if(durum == 1){ //deðiþme islemi yapilirsa
  remove("sorular.txt");
  rename("yedek.txt","sorular.txt");
  puts("soru degistirildi devam etmek icin bir tusa basin...");
 }
 else{
  remove("yedek.txt");
  puts("soru bulunamadi devam etmek icin bir tusa basin...");
 }
 fflush(stdin);
 getch();
system("CLS");

	}
  	
  
	// oyun oyna
	void oyna(){
		system("COLOR 0E");
		printf("************************************************************************************************************************ \n");
		printf("************************************************************************************************************************ \n");
		printf("************************************************************************************************************************ \n");
		printf("************************************************************************************************************************ \n");
		printf("************************************************************************************************************************ \n");
		printf("\n                                           oyun oyna\n");
		printf("************************************************************************************************************************ \n");
		printf("************************************************************************************************************************ \n");
		printf("************************************************************************************************************************ \n");
		printf("************************************************************************************************************************ \n");
		printf("************************************************************************************************************************ \n");
		
		int sayi=1;
		int sayi2;
		int puan=0;
		int b=1;
		int a=1;
		int z=0;
		int temp=0;
		int c=1;
		char cevap[20];	
		FILE *dosya=fopen("sorular.txt","r");
		if(dosya == NULL){
  		puts("Dosya acilamadi");
 		 exit(1);}
		printf("bir kullanici adi giriniz:");
		scanf("%s",dizi[a].oyuncu_adi);	
		
		
				
			while(!feof(dosya)){
			
			fscanf(dosya,"%d %s\n %s\n %s\n %s\n %s\n %s\n",&sorum[sayi].no,sorum[sayi].soru,sorum[sayi].sikA,sorum[sayi].sikB,sorum[sayi].sikC,sorum[sayi].sikD,sorum[sayi].dogrucevap);
			//Soru metnindeki '_' karakterleri boþluða çevriliyor
			tire(sorum[sayi].soru);
			tire(sorum[sayi].sikA);
			tire(sorum[sayi].sikB);
			tire(sorum[sayi].sikC);
			tire(sorum[sayi].sikD);
			tire(sorum[sayi].dogrucevap);
			
			
			sayi++;}
			
			for(z=0;z<5;z++){
			yeniden:
				sayi2 = rand() % 10 + 1;
				srand(time(NULL));
			
			
			if(sayi2==dizi[1].temp || sayi2==dizi[2].temp || sayi2==dizi[3].temp || sayi2==dizi[4].temp || sayi2==dizi[5].temp || sayi2==dizi[6].temp || sayi2==dizi[7].temp || sayi2==dizi[8].temp || sayi2==dizi[9].temp || sayi2==dizi[10].temp ){	
			goto yeniden;
				}
			
				if( sayi2==sorum[sayi2].no){
									printf("%d %s\n A)%s\n B)%s\n C)%s\n D)%s\n",b,sorum[sayi2].soru,sorum[sayi2].sikA,sorum[sayi2].sikB,sorum[sayi2].sikC,sorum[sayi2].sikD);
									printf("bir cevap sikki giriniz:");
									scanf("%s",dizi[sayi2].cevap);
				
								if (strcmp(dizi[sayi2].cevap,sorum[sayi2].dogrucevap)==0){
								//EGER DOGRU ÝSE SES CIKICAK
								printf("\a");
								puan=puan+20;
								}	dizi[c].temp=sayi2;
				}b++;
				c++;
			
		}
		dizi[a].puan=puan;
		printf("%d\n",dizi[a].puan);
		delay(10);
		system("CLS");
				
		fclose(dosya);
		FILE *dosya2 =fopen("skorlar.txt","a");
		if(dosya2 == NULL){
  		puts("Dosya acilamadi");
  		exit(1);}
		fprintf(dosya2,"%s %d\n",dizi[a].oyuncu_adi,dizi[a].puan);
		
		fclose(dosya2);
		xy(52,15);
		printf("oyunumuz sona ermistir\n");
		xy(52,16);
		printf("GIRIS EKRANINA GERI DONULUYOR");
		delay(1);
		printf(".");
		delay(0.5);
		printf(".");
		delay(0.5);
		printf(".");
		delay(0.5);
		system("CLS");
		
				
		
  		
		
	}

	// skorlar
	void skorlar(){
		system("COLOR 0E");
		printf("************************************************************************************************************************ \n");
		printf("************************************************************************************************************************ \n");
		printf("************************************************************************************************************************ \n");
		printf("************************************************************************************************************************ \n");
		printf("************************************************************************************************************************ \n");
		printf("\n                                          skorlar\n");
		printf("************************************************************************************************************************ \n");
		printf("************************************************************************************************************************ \n");
		printf("************************************************************************************************************************ \n");
		printf("************************************************************************************************************************ \n");
		printf("************************************************************************************************************************ \n");
		int a=0;
		int temp=0;
		int j=0;
	
		FILE *dosya =fopen("skorlar.txt","r");
		if(dosya == NULL){
  		puts("Dosya acilamadi");
 		 exit(1);}
			while(!feof(dosya)){
			fscanf(dosya,"  %s %d\n",dizi[a].oyuncu_adi,&dizi[a].puan);								
		a++;
		}
		for(j=100;j>=0;j--){
			for(a=0;a<=100;a++){
				if(dizi[a].puan==j){
					printf("%s %d\n",dizi[a].oyuncu_adi,dizi[a].puan);
					temp++;
				}
				if(temp==3){
					break;
				}
			
			}
			
		}
			
		fclose(dosya);	
			
	delay(10);
	
	}
	// TÝREYÝ BOSLUK YAPMA
void tire(char a[150]){
        int i = 0;
        while(a[i]!='\0'){
         if(a[i]=='_'){
             a[i]=' ';
         }
         i++;
     }
    }
// BOSLUGU TÝREYE CEVÝRME
void bosluk(char a[150]){
        int i = 0;
        while(a[i]!='\0'){
         if(a[i]==' '){
             a[i]='_';
         }
         i++;
     }
 	}
 	
 	// YÜKLENÝYOR EKRANÝ 
void loading(){
	int i;

	for(i=0;i<1;i++){
		system("COLOR 0B");
	xy(50,15);
	printf("YUKLENIYOR");
	delay(1);
	xy(52,16);
	system("COLOR 0A");
	printf("o");
	delay(0.1);
	xy(52,17);
	system("COLOR 0E");
	printf("o");
	delay(0.1);
	xy(52,18);
	system("COLOR 0A");
	printf("o");
	delay(0.1);
	xy(53,18);
	system("COLOR 0F");
	printf("o");
	delay(0.1);
	xy(54,18);
	system("COLOR 0C");
	printf("o");
	delay(0.1);
	xy(54,17);
	system("COLOR 0A");
	printf("o");
	delay(0.1);
	xy(54,16);
	system("COLOR 0D");
	printf("o");
	delay(0.1);
	xy(53,16);
	system("COLOR 0E");
	printf("o");
	delay(0.1);
	system("CLS");
	}
	system("CLS");
}
 void adminselam(){
 int i;

	for(i=0;i<2;i++){

	xy(50,14);
	system("COLOR 0A");
	printf("ooooooooooooooooooooooooooooooooooo");
	delay(0.3);
	xy(50,13);
	system("COLOR 0E");
	printf("ooooooooooooooooooooooooooooooooooooo");
	delay(0.3);	
	system("COLOR 0B");
	xy(50,15);
	printf("HOSGELDIN ADMIN");
	delay(0.3);
	xy(50,16);
	system("COLOR 0A");
	printf("ooooooooooooooooooooooooooooooooooo");
	delay(0.3);
	xy(50,17);
	system("COLOR 0E");
	printf("ooooooooooooooooooooooooooooooooooooo");
	delay(0.3);
	

	system("CLS");
	}
	system("CLS");	
 	
 }

	

	
	




