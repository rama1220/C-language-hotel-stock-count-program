 #include <stdio.h>  
 #include <stdlib.h>  
 #include <string.h>  
 #include <windows.h>  
main() 
{

	//// PEMROGRAMAN STOK AMINITIS ROOM HOTEL ////

	struct room	{ char bdroom[20];
				  char bthroom[20];
				                    } stokroom;
	
	struct bedroom { int kst;
					int sdl;
					int pwg;}	stokbdroom;
	
	struct bathroom {int sbn;
				 	 int shmp;
					 int sktgg;} stokbtroom;
char savedusername[24], savedpassword[24], username[24], password[24]; 
int budget;
int nilai [6];
nilai[1]=3000;
nilai[2]=8000;
nilai[3]=2000;
nilai[4]=2000;
nilai[5]=2000;
nilai[6]=2000;

char menu; 
int total, sisah;
int i=0;

		 {  
   strcpy(savedusername, "rama");  
   strcpy(savedpassword, "1234");  
  
   do{  
     printf("Username  : ");  
     gets(username);  
     printf("Password  : ");  
     gets(password);  
       system("cls");  
     if((strcmp(username, savedusername)==0)&&(strcmp(password, savedpassword)==0))  
     {  
       printf("\n=========================================================\n");  
       printf("~~~~~~~~~~~~~~~~~~ SELAMAT DATANG ~~~~~~~~~~~~~~~~~~~~~~~~\n");  
       printf("==========================================================\n");   
       Sleep(2500);  
     
      
       break;  
     }  
     else  
     {  
       printf("=====================================\n");  
       printf("      PASSWORD SALAH\n");  
       printf("======================================\n");  
       i++;  
       Sleep(2000);  
       system("cls");  
     }  
   }while(i<3);  
   if(i>=3)   
   {  
     printf("AKSES DITOLAK\n"); 
	 return 0; 
   }  
   printf("\n\n");  
   system("pause");
    
   mulai:

   printf("Pilih menu stok room hotel anda:\n");
  printf("[1] bed room stok\n");
  printf("[2] bath room stok\n");
  printf("[3] semua stok room \n");
  printf("\npilih menu:");
  scanf("%d",&menu);
  switch(menu)
  
  { case 1 :
  	printf("1.sandal=Rp.3000\n");
  	printf("2.keset=Rp.8000\n");
  	printf("3.pewangi=Rp.2000\n");
  	
  		
  	printf("\n=================================================\n");
printf("\njumlah stok barang yang ingin dipesan bulan ini\n");
printf ("=================================================\n");

printf("Masukan budget yang bulan ini=");scanf("%d",&budget);
printf("1.sandal=");
scanf("%d",&stokbdroom.sdl); 
printf("%d*Rp.3000=",stokbdroom.sdl);printf("Rp.%d\n",stokbdroom.sdl*nilai[1]);
printf("2.keset=");
scanf("%d",&stokbdroom.kst);
printf("%d*Rp.8000=",stokbdroom.kst);printf("Rp.%d\n",stokbdroom.kst*nilai[2]);
printf("3.pewangi=");
scanf("%d",&stokbdroom.pwg);
printf("%d*Rp.2000=",stokbdroom.pwg);printf("Rp.%d\n",stokbdroom.pwg*nilai[3]);
printf("==========================================================\n");
total=(stokbdroom.sdl*nilai[1]+stokbdroom.kst*nilai[2]+stokbdroom.pwg*nilai[3]);
printf("total harga yang dikeluarkan bulan ini: Rp.%d\n",total);
printf("==========================================================\n\n");
sisah=(budget-(stokbdroom.sdl*nilai[1]+stokbdroom.kst*nilai[2]+stokbdroom.pwg*nilai[3]));
printf("===========================================================\n");
printf("sisah budget bulan setelah pembelian barang stok:Rp. %d\n",sisah);
printf("===========================================================\n");
printf("1. Kembali Ke Menu Utama \n");
printf("0. Keluar \n");
printf("Pilih :");
scanf("%d", &menu);
system("cls");  
if(menu == 1)
goto mulai;
else
goto exit;
   
return(0);
break;
  
  case 2:
  	printf("1.sabun=Rp.2000\n");
  	printf("2.shampo=Rp.2000\n");
  	printf("3.sikat gigi=Rp.2000\n");
  	
  	 	
  	printf("\n===============================================\n");
printf("\njumlah stok barang yang ingin dipesan\n");
printf ("=================================================\n");

printf("Masukan budget yang bulan ini=");scanf("%d",&budget);
printf("1.sabun=");
scanf("%d",&stokbtroom.sbn);
printf("%d*Rp.2000=",stokbtroom.sbn);printf("Rp.%d\n",stokbtroom.sbn*nilai[4]);
printf("2.shampo=");
scanf("%d",&stokbtroom.shmp); 
printf("%d*Rp.2000=",stokbtroom.shmp); printf("Rp.%d\n",stokbtroom.shmp*nilai[5]);
printf("3.sikat gigi=");
scanf("%d",&stokbtroom.sktgg);
printf("%d*Rp.2000=",stokbtroom.sktgg); printf("Rp.%d\n",stokbtroom.sktgg*nilai[6]);
printf("==========================================================\n");
total=( stokbtroom.sbn*nilai[4]+stokbtroom.shmp*nilai[5]+stokbtroom.sktgg*nilai[6]);
printf(" total harga yang dikeluarkan bulan ini: Rp. %d\n",total);
printf("===========================================================\n\n");
printf("===========================================================\n");
sisah=(budget-(stokbtroom.sbn*nilai[4]+stokbtroom.shmp*nilai[5]+stokbtroom.sktgg*nilai[6]));
printf("sisah budget bulan setelah pembelian barang stok: Rp. %d\n",sisah);
printf("===========================================================\n");
printf("1. Kembali Ke Menu Utama \n");
printf("0. Keluar \n");
printf("Pilih :");
scanf("%d", &menu);
system("cls");  
if(menu == 1)
goto mulai;
else
goto exit;
 
return(0);
break;
  
  
   case 3:
  	printf("1.sandal=Rp.3000\n");
  	printf("2.keset=Rp.8000\n");
  	printf("3.pewangi=Rp.2000\n");
  	printf("4.sabun=Rp.2000\n");
  	printf("5.shampo=Rp.2000\n");
  	printf("6.sikat gigit=Rp.2000\n");
  	
  	printf("\n===============================================\n");
printf("\njumlah stok barang yang ingin dipesan\n");
printf ("=================================================\n");

printf("Masukan budget yang bulan ini=");scanf("%d",&budget);
printf("1.sandal="); 
scanf("%d",&stokbdroom.sdl);
printf("%d*Rp.3000=",stokbdroom.sdl); printf("Rp.%d\n",stokbdroom.sdl*nilai[1]);
printf("2.keset=");
scanf("%d",&stokbdroom.kst); 
printf("%d*Rp.8000=",stokbdroom.kst); printf("Rp.%d\n",stokbdroom.kst*nilai[2]);
printf("3.pewangi=");
scanf("%d",&stokbdroom.pwg);
printf("%d*Rp.2000=",stokbdroom.pwg); printf("Rp.%d\n",stokbdroom.pwg*nilai[3]);
printf("4.sabun=");
scanf("%d",&stokbtroom.sbn);
printf("%d*Rp.2000=",stokbtroom.sbn); printf("Rp.%d\n",stokbtroom.sbn*nilai[4]);
printf("5.shampo=");
scanf("%d",&stokbtroom.shmp);
printf("%d*Rp.2000=",stokbtroom.shmp); printf("Rp.%d\n",stokbtroom.shmp*nilai[5]);
printf("6.sikat gigi=");
scanf("%d",&stokbtroom.sktgg);
printf("%d*Rp.2000=",stokbtroom.sktgg); printf("Rp.%d\n",stokbtroom.sktgg*nilai[6]);
printf("==========================================================\n");
total=(stokbdroom.sdl*nilai[1]+stokbdroom.kst*nilai[2]+stokbdroom.pwg*nilai[3]+stokbtroom.sbn*nilai[4]+stokbtroom.shmp*nilai[5]+stokbtroom.sktgg*nilai[6]);
printf("total harga yang dikeluarkan bulan ini: Rp. %d\n",total);
printf("==========================================================\n\n");
printf("===========================================================\n");
sisah= (budget-(stokbdroom.sdl*nilai[1]+stokbdroom.kst*nilai[2]+stokbdroom.pwg*nilai[3]+stokbtroom.sbn*nilai[4]+stokbtroom.shmp*nilai[5]+stokbtroom.sktgg*nilai[6]));
printf("sisah budget bulan setelah pembelian barang stok: Rp. %d\n",sisah);
printf("==========================================================\n");
printf("1. Kembali Ke Menu Utama \n");

printf("0. Keluar \n");
printf("Pilih :");
scanf("%d", &menu);
system("cls");  
if(menu == 1)
goto mulai;
else
goto exit;
 
return(0);
break;
exit:
case 4 :
printf("\n\n===========================================================\n");
printf("~~~~~~~~~~~~~~~~~~~~~~ TERIMAKASIH ~~~~~~~~~~~~~~~~~~~~~~\n");
printf("============================================================\n");
return(0);
break;

  }

 } 

}
	
		
	

