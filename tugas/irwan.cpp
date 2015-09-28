#include <stdio.h>  
 #include <conio.h>  
 #include <math.h>    
 main()  
 {  
 float a,b,c,D,x,x1,x2;
 printf("--- AKAR PERSAMAAN KUADRAT - \n");  
 printf("--- Bentuk Persamaan Ax^2 + Bx + C = 0 ----- \n");  
 printf("============================================ \n");
 printf("\n"); 
 printf(" Nama	: IRWAN PRAMONO \n");    
 printf(" NIM	: D400150067  \n"); 
 printf(" Kelas	: C  \n");
 printf("\n");   
 printf("   Masukan Nilai Koefisien A = ");scanf("%f",&a);  
 printf("   Masukan Nilai Koefisien B = ");scanf("%f",&b);  
 printf("   Masukan Nilai Koefisien C = ");scanf("%f",&c);  
 printf("-------------------------------------------- \n");  
 D = (b*b)-(4*a*c);  
 printf(" Determinan = %2.2f\n",D);  
 printf("-------------------------------------------- \n");  
 if (D>0)  
     {x1=((-b+sqrt(D))/(2*a));  
         printf(" X1 = %2.2f\n",x1);  
      x2=((-b-sqrt(D))/(2*a));  
         printf(" X2 = %2.2f\n",x2);}  
 else if(D==0)  
     {x= -b/(2*a);  
         printf(" X1 = X2 = %2.2f\n",x);}  
 else if(D<0)  
     {x1=((-b/2*a)+ ((sqrt(-D))/2*a));  
         printf(" X1 = %2.2f\n",x1);  
      x2=((-b/2*a)-((sqrt(-D) )/2*a));  
         printf(" X2 = %2.2f\n",x2);  
         printf(" Adalah Bilangan Imajiner \n");}  
 printf("--------------------------------------------\n");  
 getch();  
 } 
