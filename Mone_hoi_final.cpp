#include <stdio.h>
#include <conio.h>
#include <process.h>
#include <windows.h>
#include <string.h>
struct Info{

    char nam[50];
    int Id;
    float total;
    float monthly_income;
    float expenses[5];
    float array_sum;
    float house_rent;
    float internet_bill;
    float expenses_percentage[5];
    float suggest[3];
    float reduce[5];
    char password[50];
}user;





void cursor_position(int x,int y){
    COORD coord;
     coord.X=x;
       coord.Y=y;
          SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}




int main()
{   int sizee,speeed;
    cursor_position(42,12);
    printf("         Life Hacks");

    cursor_position(42,14);
    for(sizee=1;sizee<=30;sizee++){

        for(speeed=0;speeed<=15000000;speeed++){

        }
         printf("%c", 177);
    }
char c;



   system("cls");
  int pr = 0;//talha start
    printf("WELCOME!! This is Life Hacks \n your guide to a better life \n Have you ever thought about how you are gonna go through the month? \n Or at the end of the month have you wondered how you are  in a tight position with such little money? \n How could you have utilized the amount you had? \n well,worry no more! \n Life Hacks will lead you there\n");
    for(;pr<168;pr++)
        printf("_"); //talha end

     printf("\n");



int scan;/*variable for proceed and exit*/
      do
    {
        printf("please type 1 to proceed and 0 to exit\n"); /*if the user gives wrong value it will repeatedly ask fo zero or one*/
        scanf("%d",&scan);
    }
    while(scan!=1 && scan!=0);
    if(scan==0)
    {
        return 0;
    }
    else if(scan==1)
    {

         printf("Enter your name: ");
          scanf(" %[^\n]",&user.nam);
          printf("\nEnter your password: ");
          for(int i=0;;i++){
          c=getch();
          printf("*");
          user.password[i]=c;
         if(c==13){
          user.password[i]='\0';
         break;
    }
   }

   printf("\nEnter your Id: ");
   scanf("%d",&user.Id);
     printf("please type your estimated values like following sequence : \n"
             "1.Food---daily\n"
             "2.Electricity Bill---daily unit\\1unit==8tk\n"
             "3.Transportation Cost---daily\n"
             "4.Internet bill---monthly\n"
             "5.house rent----monthly\n");
     for(int a = 0;a<5;a++)
     {
         scanf("%f",&user.expenses[a]); //getting the inputs from user
     }
    }
    user.expenses[0]=user.expenses[0]*30;
    user.expenses[1]=user.expenses[1]*8*30;
    user.expenses[2]=user.expenses[2]*30;
system("cls");

        for(int k =0;k<5;k++)
        {
            user.array_sum = user.array_sum + user.expenses[k];
        }

    user.total = user.array_sum;




    for(int p = 0;p<5;p++)
    {

    user.expenses_percentage[p] = (user.expenses[p]*100)/user.total; //perccentage for inputs given stored in an array
    }

   //system("cls");


   printf("------------------------------------To see results please Login------------------------------------");
   level:
   int Id;
   char a[50];
   char c1;
   printf("\n\nEnter Id: ");
   scanf("%d",&Id);
   printf("\nEnter password: ");
   for(int j=0;;j++){
    c1=getch();
    printf("*");
    a[j]=c1;
    if(c1==13){
        a[j]='\0';
        break;
    }
   }





//user.house_rent=user.expenses[4];
//user.internet_bill=user.expenses[3];





    if(Id==user.Id&&strcmp(a,user.password)==0){

     printf("\nLogin Approved");
      printf("\nName: %s",user.nam);
    printf("\nId: %d",user.Id);
     //printf("\nPassword: %s\n\n",user.password);
     printf("\n\nyour total estimated monthly expense is %.02f  taka\n",user.total);
    printf("1->food cost=%.2f tk is  %.2f  percent of your total cost\n",user.expenses[0],user.expenses_percentage[0]);
    printf("2->electricty cost=%.2f tk is %.2f percent of your total cost\n",user.expenses[1],user.expenses_percentage[1]);
    printf("3->Transportation cost=%.2f tk is %.2f  percent of your total cost\n",user.expenses[2],user.expenses_percentage[2]);
    printf("4->house rent=%.2f tk is fixed and %.2f  of your total cost\n",user.expenses[3],user.expenses_percentage[3]);
    printf("5->internet bill=%.2f tk is fixed and %.2f  of your total cost\n",user.expenses[4],user.expenses_percentage[4]);

  //system("cls");
    float mb,df,lld;
    float final[3];
    printf("Enter your maximum budget for a month: ");
    scanf("%f",&mb);
    if( mb<=user.expenses[0] || mb<=user.expenses[1] || mb<=user.expenses[2] || mb<=user.expenses[3] || mb<=user.expenses[4])
    {
        printf("\nyou should earn more\n");
    }
    else if(user.total>mb){
            df=user.total-mb;
        printf("You need to reduce your budget\n");
        printf("You need extra %f tk to execute this plan\n",df);
        lld=user.expenses_percentage[0]+user.expenses_percentage[1] +user.expenses_percentage[2];
        user.suggest[0]=(df*user.expenses_percentage[0])/lld;
        user.suggest[1]=(df*user.expenses_percentage[1])/lld;
        user.suggest[2]=(df*user.expenses_percentage[2])/lld;
        printf("food %f electricity %f transportation %f \n",user.suggest[0],user.suggest[1],user.suggest[2]);
        for(int r =0;r<3;r++)
        {
            final[r]= (user.expenses[r]-user.suggest[r])/30;
        }
            printf("\n\nReduced Plan\n");
            printf("1->food(daily) :%.2f taka\n",final[0]);
            printf("2->electricity(daily) :%.2f unit\n",final[1]/8);
            printf("3->transportation(daily) :%.2f taka\n",final[2]);
            printf("4->internet bill is %.2f unchanged\n",user.expenses[3]);
            printf("5->house rent is %.2f unchanged\n",user.expenses[4]);

           printf("\n\nYour plan\n");

             printf("1->food(daily) :%.2f taka\n",user.expenses[0]/30);
            printf("2->electricity(daily) :%.2f unit\n",(user.expenses[1])/(30*8));
            printf("3->transportation(daily) :%.2f taka\n",user.expenses[2]/30);
            printf("4->internet bill is %.2f \n",user.expenses[3]);
            printf("5->house rent is %.2f \n",user.expenses[4]);



    }
    else{
        printf("You don't need to change your plan");
    }

    }
    else{
            int l;
            printf("            \nAccess denied\n");
            printf(" press 1 to retry and 0 to exit ");
            scanf("%d",&l);
            if(l==1){
                goto level;
            }
            else if(l==0){
                return 0;
            }
    }






    }





























