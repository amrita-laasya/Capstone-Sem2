#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
//to be changed
//average for ratings
//sentence input
//storing it in file with the name
void motive();
void survey();
void quit();
void file();
void red();
int main()
{
     system("color 0E");
   	 int countr,r,r1,i,n;
     float score;
     char choice;
     char kitta;
     char name[20];
     mainhome:

     printf("\t\t\t FOOD FUND \n");
     printf("\n\n\t\t\t\t\t\t\t\t\t\t\t *****************************");
     printf("\n\t\t\t\t\t\t\t\t\t\t\t  _____________________________");
     printf("\n\t\t\t\t\t\t\t\t\t\t                   BE ");
     printf("\n\t\t\t\t\t\t\t\t\t\t                   THE ");
     printf("\n\t\t\t\t\t\t\t\t\t\t                 CHANGE ");
     printf("\n\t\t\t\t\t\t\t\t\t\t\t _____________________________");
     printf("\n\n\t\t\t\t\t\t\t\t\t\t\t ***************************");
     printf("\n\t\t\t\t\t\t\t\t\t\t\t  _____________________________");
     printf("\n\t\t\t\t\t\t\t\t\t\t\t  BE A DONOR-Save Lives!!!    ") ;
     printf("\n\t\t\t\t\t\t\t\t\t\t\t  ____________________________");
     printf("\n\n\t\t\t\t\t\t\t\t\t\t\t ***************************");
     printf("\n\t\t\t\t\t\t\t\t\t\t\t  ____________________________\n");
     char text[100];
     int rate;
     char rsn[100];
     char sp[100];
     char ammu;
     int w,j;
     char Z[5]={'A','B','C','D'},t;
     char a;

	FILE *f;
	f=fopen("file.txt","r");
	if (f==NULL)
    {
        printf("file not found");
        exit(1);
        }
   	printf("\n\nOur motive is eliminating hunger and malnutrition, and achieving wider global food security are among the most intractable problems humanity faces.\nHere are some of the facts about food wastage.....\n\n",text);

    while(!feof(f))
    {
       fscanf(f,"%s ",text);

	   printf("%s ",text);
    }
	   fclose(f);

     printf("\n\n\t\t> Press S to Start the survey: ");
     printf("\n\t\t> press Q to quit             ");
     printf("\n\t\t______________________________\n\n");

     choice=toupper(getch());

     if (choice=='Q')
	 exit(1);
     else if(choice=='S')
    {


     system("cls");

    printf("\n\n\n\n\n\n\n\n\n\n\t\t\t Register your name:");
    gets(name);
    system("cls");
    printf("\n\n\n ---------------------------  Welcome %s to the solution of food crisis -------------------------------",name);
    printf("\n ****************************************************************************************************");
    printf("\n\n >> Please fill in our quick survey. We are collecting valuable data about our food waste habits so that we can effectively influence behaviour change and tackle the food waste problem head on!");
    printf("\n >> No matter where you are in the world, food waste is a huge issue. Which is why we're passionate about getting everyone involved in reducing the problem");
    printf("\n\n\t!!!!!!!!!!!!! THANK YOU !!!!!!!!!!!!!");
    printf("\n\n\n Press Y  to Begin!\n");
    printf("\n Press any other key to return to the main menu!");
}
    if (toupper(getch())=='Y')
    	{
		    goto home;
        }
	else
		{
        goto mainhome;
        system("cls");
        }

     home:
     system("cls");

     for(i=1;i<=8;i++)
     {
     system("cls");
     r1=i;

     switch(r1)
     {
		case 1:
		{
        printf("\n\n How much food would you say that your household usually throws away each week? Please select one?");
		printf("\n\n 1.Excessive amount\t\t 2.More than you should\n\n 3.A reasonable amount\t\t 4.Very little\n\n 5. None\n");
        scanf("%d",&w);
       if(w==4)
       {
       printf(" You are doing a great job!!!!\n Know how to help needy with your saved food in your locality.\n\nAround 67 million tonnes of food is wasted in India every year which has been valued at around Rs 92,000 crores. For context, this amount is enough to feed all of Bihar for a year");
       getch();
       break;
       }
          if(w==5)
       {
       printf(" You are doing a great job!!!!\n Know how to help needy with your saved food in your locality.\n\nAround 67 million tonnes of food is wasted in India every year which has been valued at around Rs 92,000 crores. For context, this amount is enough to feed all of Bihar for a year");
       getch();
       break;
       }
            if(w==1);
            {
        printf("\nSo don't you think you can save this food and help those in need ? Continue forward to know how.\n\nAround 67 million tonnes of food is wasted in India every year which has been valued at around Rs 92,000 crores. For context, this amount is enough to feed all of Bihar for a year");
        getch();
        break;

       }
       if(w==2);
            {
        printf("\nSo don't you think you can save this food and help those in need ? Continue forward to know how.\n\nAround 67 million tonnes of food is wasted in India every year which has been valued at around Rs 92,000 crores. For context, this amount is enough to feed all of Bihar for a year");
        getch();
        break;

       }
       if(w==3);
            {
        printf("\nSo don't you think you can save this food and help those in need ? Continue forward to know how.\n\nAround 67 million tonnes of food is wasted in India every year which has been valued at around Rs 92,000 crores. For context, this amount is enough to feed all of Bihar for a year");
        getch();
        break;

       }

        case 2:
		{
        printf("\n\n\nAccording to FAO(Food and Agriculture Organization) report, What fraction of food produced for human consumption do you believe is being wasted? ?");
		printf("\n\nA.one-eleventh\t\tB.one-seventh\n\nC.one-third\t\tD.half");
		if (toupper(getch())=='C')
			{
            printf("\n\nCorrect!!!");
			printf("Roughly one third of the food produced in the world for human consumption every year — approximately 1.3 billion tonnes — gets lost or wasted\nThe amount of food lost or wasted every year is equivalent to more than half of the world's annual cereals crop (2.3 billion tonnes in 2009/2010)");
			getch();
			break;
			}
		else
		       {
		           printf("\n\nWrong!!! The correct answer is C.One-third\n\nRoughly one third of the food produced in the world for human consumption every year — approximately 1.3 billion tonnes — gets lost or wasted\nThe amount of food lost or wasted every year is equivalent to more than half of the world's annual cereals crop (2.3 billion tonnes in 2009/2010)");
		           getch();
		           break;
               }
               getch();
               case 3:
		{
        printf("\n\n\nGiven it's estimated that on average households waste at least 20 percent of the food they buy, how do you think your household compares? ");
		printf("\n\nA.More than that\t\tB.About the same\n\nC.Less than that\t\tD.Not sure\n");
		scanf("%c%c",&a,&ammu);
        printf("\n\nYou have chosen option %c.\nDo you know that 40 percent of the fruits and vegetables, and 30 percent of cereals that are produced are lost due to inefficient supply chain management and do not reach the consumer markets. Also a lot of food is lost or wasted during the distribution and consumption stages.\nSuch food could be saved by timely withdrawing it from the distribution network, aggregating it and then redirecting it to the people in need",ammu);
         getch();
        break;
        }

        case 4:

		{
		    printf("\n\n\nHow would you personally rate yourself at managing food waste? 1 being poor and 100 being fantastic?\n");
		    scanf("%d",&rate);
		    printf("You have entered %d...... ",rate);

        if (rate<=50)
        {
            printf("\nSo you can improve your food management...\nContinue forward to know how!!!");
            // sleep(5);
        }
             else(rate>50);
		 {
		     printf("\nThat is a great sign of your concern on food management!\nHope you will spread awareness on this regard to your acquaintances also and improve to your better...");
		     // sleep(5);
		 }
        }

               case 5:
		{
      system("cls");

		    printf("\n\n\nWhat measures can be taken to prevent food wastage? ");
        printf("\n\n (MULTIPLE SELECTIONS ALLOWED ! PRESS Q to Quit)");
		    printf("\n\nA. Plan your meal portion \t\tB.Ensure food freshness before hand\n\nC.Understand dates on your food\t\tD.Specify if any other ");
        char ch[4],suggestion[100];
        int exii = 1,index=0;
        for(int i=0;i<4;i++){
          scanf(" %c",&ch[index]);
          if(ch[index] == 'D' || ch[index] == 'd'){
            printf("\n\n Please Enter Your Comments : ");
            scanf("%s", suggestion);
            FILE *fptr;
            fptr = fopen("cp team.txt", "w");
            fprintf(fptr, suggestion);
            fclose(fptr);
            exii = 0;
          }
          if(ch[index] == 'Q' || ch[index] == 'q'){
            break;
          }
          index++;
          if(index == 4){
            break;
          }
        }
        printf("\n\n You Entered Options : ");
        for(int i=0; i<index; i++){
          printf("%c ",ch[i]);
        }
        printf("\n");
        if(exii == 0){
          printf(" and a Comment : %s", suggestion);
        }

        }
			 case 6:{
         system("cls");

           printf("\n\nWhat things you do to manage your food waste.Select your optimal option");
           printf("\n\n (MULTIPLE SELECTIONS ALLOWED ! PRESS Q to Quit)");
           printf("\n\nA.Managing a compost heap\t\tB.Feed pets with leftover food\nC.Donate food to needy/local food bank \tD.Use them as ingredients for tomorrow's meal by simple re-heating \nE. Other (please specify)");
           char ch[5],suggestion[100];
           int exii = 1,index=0;
           for(int i=0;i<5;i++){
             scanf(" %c",&ch[index]);
             if(ch[index] == 'E' || ch[index] == 'e'){
               printf("\n\n Please Enter Your Comments : ");
               scanf("%s", suggestion);
               FILE *fptr;
               fptr = fopen("cp team.txt", "w");
               fprintf(fptr, suggestion);
               fclose(fptr);
               exii = 0;
             }
             if(ch[index] == 'Q' || ch[index] == 'q'){
               break;
             }
             index++;
             if(index == 5){
               break;
             }
           }
           printf("\n\n You Entered Options : ");
           for(int i=0; i<index; i++){
             printf("%c ",ch[i]);
           }
           printf("\n");
           if(exii == 0){
             printf(" and a Comment : %s", suggestion);
           }
        }


        case 7:
           {

            system("cls");
	printf("\n\n Being someone who can help is a boon!\n Do you like to contribute for it?\n Kindly, fill in the following details which help us in approaching you :  ");
      void file();
    FILE *fp;
    char name[20],mail[40],add[30],sugg[10];
    int mobile;
    fp=fopen("cp team.txt","a");
    if (fp==NULL)
    {
        printf("error");
        exit(0);
    }else
        printf("\nEnter  your name : ");
        scanf("%s",name);
        fprintf(fp,"Name : %s",name);
        printf("Enter your mobile number : ");
        scanf("%d",&mobile);
        fprintf(fp,"\nContact number :%d",mobile);
        printf("enter mail id : ");
        scanf("%s",mail);
        fprintf(fp,"\nMail.ID :%s",mail);
        printf("enter address : ");
        scanf("%s",add);
        fprintf(fp,"\nAddress :%s",add);
        printf("enter your suggestions (if any) : ");
        scanf("%s",sugg);
        fprintf(fp,"\nSuggestions : %s",sugg);
        fprintf(fp," New ways to preserve : %s",sp);
        fprintf(fp,"Other reasons for wastage : %s",rsn);
    fclose(fp);}

case 8 :
        {system("cls");
        printf("A Million Thanks for taking part in our survey.....We hope you find this useful and take a step forward for this social cause !!Hope you share this with your family and friends!! This  ");
printf("If you are interested in continuing the chain Do support the given Ngos https://sharefood.fssai.gov.in/partner.html: \n 1. Akshaya Patra foundation Contact no:  website :\n2.  ");
	printf("LOVE FOOD ...HATE WASTE!!!!\n If you can't feed  a 'HUNDRED' people... then just feed 'ONE'");
	getch();
	goto mainhome;
        }

		}
		getch();
     }


   }}
      return 0;}
