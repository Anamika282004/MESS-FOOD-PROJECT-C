#include<stdio.h>
int main()
{  int d,m,y,time ;
   
   printf("enter date in (dd): ");
   scanf("%d",&d);
   printf("enter month (mm): ");
   scanf("%d",&m);
   printf("enter year(yyyy): ");
   scanf("%d",&y);
   printf("enter time of your meal(kindly enter integers 9am , 2pm, 6pm , 8pm): ");
   scanf("%d",&time);
   //program to print number of leap year before entered year y
   int i; 
   int t=0;
   for(i=2001;i<y;i++)
   {if(i%4==0) t=t+1;}

   //program to get number of months having 31 days before entered month
   int l;
   
   {if(m==1) l=0 ;
   else if(m==2) l=1 ;
   else if(m==3) l=1 ; else if (m==4) l=2 ; else if(m==5) l=2;else if(m==6) l=3; else if(m==7) l=3; else if(m==8) l=4;
   else if(m==9) l=5; else if(m==10) l=5; else if(m==11) l=6; else if(m==12) l=6 ;}
   //program to get number of months having 30 days before entered month
   int s;
   {if(m==1) s=0 ;
   else if(m==2) s=0 ;
   else if(m==3) s=0 ; else if (m==4) s=0 ; else if(m==5) s= 1;else if(m==6) s=1; else if(m==7) s=2; else if(m==8) s=2;
   else if(m==9) s=2; else if(m==10) s=3; else if(m==11) s=3; else if(m==12) s=4 ;}


   long int nd;
   if(y%4==0) 
   nd=(y-2001)*365 + t + 31*l + 30*s + d + 29 ;
   else nd= (y-2001)*365 + t + 31*l + 30*s + d + 28 ;

   int day ;
   day= nd%7 ;
    switch (day)
  { 
  case 0 :
  printf("the day is sunday"); break;
  case 1:
  printf("the day is monday"); break ;
  case 2:
  printf("the day is tuesday"); break ;
  case 3 :
  printf(" the day is wednesday"); break ;
  case 4:
  printf(" the day is thursday");break ;
  case 5:
  printf("  the day is friday"); break ;
  case 6:
  printf(" the day is saturday"); break ; }
  
  {   if(time==9 && day==1) printf("\nroti , bhindi and tamatar ki chutney");
    else if (time==2 && day==1) printf("\nchawal,dal,roti,bhindi ki sabji aur salad");
    else if (time==6 && day==1)  printf("\npoha and tea");
    else if (time==8 && day==1) printf("\nroti,chawal,daal,kheer,aalu ghobhi");

    else if(time==9 && day==0) printf("\ndosa and sambhar");
    else if (time==2 && day==0) printf("\nchawal,roti,kadhi aur baigan bharta");
    else if (time==6 && day==0)  printf("\nbiscuit and tea");
    else if (time==8 && day==0) printf("\nroti,chawal,chicken/paneer aur salad");
    
     else if(time==9 && day==2) printf("\npuri,aalu chane ki sabji aur jalebi");
    else if (time==2 && day==2) printf("\nchawal,roti,daal makhni ,soyabean,chips aur salad");
    else if (time==6 && day==2)  printf("\nsandwich and tea");
    else if (time==8 && day==2) printf("\nroti,veg biryani,manchurian,aur rayta");

    else if(time==9 && day==3) printf("\nidly aur sambhar");
    else if (time==2 && day==3) printf("\nchawal,roti,daal,aalu matar ,bhujia ,salad aur dahi");
    else if (time==6 && day==3)  printf("\nbiscuit and tea");
    else if (time==8 && day==3) printf("\nroti,chawal, chicken/paneer aur salad");

    else if(time==9 && day==5) printf("\naalu paratha,dahi,aur achar");
    else if (time==2 && day==5) printf("\nchawal,roti,daal,sabji,tamatar ki chutney aur salad");
    else if (time==6 && day==5)  printf("\nbiscuit aur chai");
    else if (time==8 && day==5) printf("\nchawal,roti,egg curry/choley and salad");
     
     
     else if(time==9 && day==4) printf("\npav bhaji / choley bhature");
    else if (time==2 && day==4) printf("\njeera chawal,roti,daal,mix veg ,salad aur papad ");
    else if (time==6 && day==4)  printf("\nsprouts and tea");
    else if (time==8 && day==4) printf("\nchawal,roti,daal,rajma ki sabji aur gulaab jamun");


    else if(time==9 && day==6) printf("\nroti,aalu bhujia aur chutney");
    else if (time==2 && day==6) printf("\nkhichdi,chokha,dahi,salad aur papad");
    else if (time==6 && day==6)  printf("\npasta/chowmein and tea");
    else if (time==8 && day==6) printf("\nroti,chawal,daal,mix veg (mushroom) aur bundi"); }

  return 0;


}



  




