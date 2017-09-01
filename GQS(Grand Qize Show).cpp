#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
   int i,h=0,j,d=0;
       char ans[2];
	char name[10];
   printf("\n\t\t\t*****GRAND QUIZ SHOW*****\n");
   printf("\t\t\t    Check your brain!\n\n");
   printf("Rules:-\n1:You have to give answer of 10 Quuestion.\n2:You have Double Deep life lines, to use life line press 'h', You can try  two time for any one answer.\n3:If you give wrong answer you will lose.\n\n");
   printf("Enter Your Name :");
   gets(name);
   printf("\n\n\n");
   if(strlen(name)==1||strlen(name)==2||strlen(name)==3)
   {
  	char qs1[][250]={
   					"Who was the first President of India?",/*Rajendra Prasad*/
                  "Which city in India is known as Manchester of India?",    /*Ahmedabad*/
                  "What is the National game of Canada?",   /*Ice Hocky*/
                  "What is the Full form of LPG?",    /*Liquified Petrolium Gas*/
                  "Who have written 'Abhignan Shakuntalam'?", /*Kalidas*/
                  "What is the number of countries in Ashia?",  /*45*/
                  "What is the currency of Russia?",/*Rubal*/
                  "Which is the largest desert in earth?",/*Sahaara*/
                  "From which game the player Abhinav Bindra belongs?",/*Shooting*/
                  "In 2012 which city hosted 'Olympic Games'?"/*London*/
                  	};
  	char asqs[][20]={"c","b","d","d","a","a","d","b","c","b"};


   char qs1op[][4][50]={{"Jawaharlal Nehru","Saradar Patel","Rajendra Prasad","Surendra Benarji"},
   							 {"Delhi","Ahmedabad","Mumbai","Banglore"},
                         {"Cricket","Golf","Baseball","Ice Hockey"},
                         {"Liquid Petrol Gas","Liquified Petrol Gasoline","Liquid Petrolium Gasolin","Liquified Petrolium Gas"},
                         {"Kalidas","Ved Vyas","Valmiki","Ashvaghosh"},
                         {"45","56","32","47"},
                         {"Dolar","Ruppee","Riyal","Rubal"},
                         {"Gobi","Sahaara","Rajasthan","White Desert"},
                         {"Boxing","Hocky","Shooting","Tennis"},
                         {"Beijing","London","Delhi","Rio De Janero"}
   						   };


   	 for(i=0;i<10;i++)
     	{
      		printf("%d:-%s\n",i+1,qs1[i]);
            for(j=0;j<4;j++)
            	{
               	printf("(%c)%s\t",j+97,qs1op[i][j]);
                  if(j==1)
                  printf("\n");
               }

            printf("\nAnswer:");
            gets(ans);
             if((strcmp(ans,"h")==0)&&d==0)
              printf("Double Deep life line\n");

            if(strcmp(ans,"h")==0)
            {

            st1:
             if(d<2)
              {   lc1:
                 printf("\nAnswer:");
                  gets(ans);
                  d++;
                   if(strcmp(ans,asqs[i])==0)
                  {
                    d=3;
                    goto ra1;
                  }
                 if(d<2)
              		{
                   printf("Wrong answer last chance\n");
                   goto st1;
                  }
               }
               if(d>3)
               break;
              if(d==3)
                {
                 printf("You have no life line.\n");
                 d++;
                 goto lc1;
                }

             }
           if(strcmp(ans,asqs[i])==0)
            {
            	ra1:
            	printf("***Right Answer***\n\n");
               h++;
            }
            else
            break;
      }

   if(h==10)
   printf("\nCongrats %s ,You Win!!!!",name);

   else
   printf("\nOoops!You Failed\n%s Na Avde To Na Ramiye",name);
 }




   /*Second Question Set*/

   	if(strlen(name)==4||strlen(name)==6)
   {
  	char qs1[][250]={
   					"Which was the first movie with voice in India?",/*Aalam Aara*/
                  "'Vivekanand Rockmemorial' is in which city?",    /*Kanyakumary*/
                  "Who has written 'Wings of Fire'?",   /*A.P.J. Abdul Kalam*/
                  "What is the currency of 'Soudy Arebia'?",    /*Riyal*/
                  "In which country the news paper 'Pravada' publishes?", /*Russia*/
                  "In which year 'Revolver' was invented?",  /*1835*/
                  "Who was the founder of 'Moghal Samrajya'?",/*Baabar*/
                  "Which is the coldest planet?",/*Pluto*/
                  "Which country won 'Football Worldcup' in 1998?",/*France*/
                  "Which bank has highest branches?"/*State Bank of India*/
                  	};
  	char asqs[][20]={"a","c","b","c","b","a","b","c","b","b"};


   char qs1op[][4][50]={{"Aalam Aara","Aazadi ki aur","Raja Harishchandra","Shree 420"},
   							 {"Delhi","Ahmedabad","Kanyakumari","Banglore"},
                         {"Dr.Rajendra Prasad","Dr. A.P.J.Abdul Kalam","Surendra Benarji","C.V.Raman"},
                         {"Rupee","Dolar","Riyal","Diram"},
                         {"India","Russia","Pakistan","Shree Lanka"},
                         {"1835","1856","1902","1847"},
                         {"Akabar","Baabar","Humayu","Shahjaha"},
                         {"Urenus","Saturn","Pluto","Veanus"},
                         {"Italy","France","India","Brazil"},
                         {"Bank of India","State Bank of India","Bank of Baroda","Axes Bank"}
   						   };



   	 for(i=0;i<10;i++)
     	{
      		printf("%d:-%s\n",i+1,qs1[i]);
            for(j=0;j<4;j++)
            	{
               	printf("(%c)%s\t",j+97,qs1op[i][j]);
                  if(j==1)
                  printf("\n");
               }

            printf("\nAnswer:");
            gets(ans);
             if((strcmp(ans,"h")==0)&&d==0)
              printf("Double Deep life line\n");

            if(strcmp(ans,"h")==0)
            {

            st2:
             if(d<2)
              {   lc2:
                 printf("\nAnswer:");
                  gets(ans);
                  d++;
                   if(strcmp(ans,asqs[i])==0)
                  {
                    d=3;
                    goto ra2;
                  }
                 if(d<2)
              		{
                   printf("Wrong answer last chance\n");
                   goto st2;
                  }
               }
               if(d>3)
               break;
              if(d==3)
                {
                 printf("You have no life line.\n");
                 d++;
                 goto lc2;
                }

             }
           if(strcmp(ans,asqs[i])==0)
            {
            	ra2:
            	printf("***Right Answer***\n\n");
               h++;
            }
            else
            break;
      }

   if(h==10)
   printf("\nCongrats %s ,You Win!!!!",name);

   else
   printf("\nOoops!You Failed\n%s Na Avde To Na Ramiye",name);
 }




    /*Third Question Set*/

   	if(strlen(name)==7||strlen(name)==9)
   {
  	char qs1[][250]={
   					"How many districts are in gujarat?",/*33*/
                  "Which is the space city in India?",    /*Banglore*/
                  "Who has written 'Panchtantra'?",   /*Vishnu Sharma*/
                  "In Which year C.V.Raman ahchived 'The Nobel Prize'?",    /*1930*/
                  "Which river is in South America?", /*Amezon*/
                  "In which country 'Tank' was invented?",  /*England*/
                  "With which game the trophy 'Devis Cup' is related?",/*Tennis*/
                  "In 1896 which country hosted 'Olympic Games'?",/*Grees*/
                  "Which desert is in Austrelia?",/*Great Victoria*/
                  "Which is the national symbol of England?"/*Rose*/
                  	};
  	char asqs[][20]={"c","d","a","c","a","d","b","c","b","a"};


   char qs1op[][4][50]={{"26","39","33","37"},
   							 {"Delhi","Ahmedabad","Kanyakumari","Banglore"},
                         {"Vishnu Sarma","Ved Vyas","Bhatruhari","Maharshi Baan"},
                         {"1925","1985","1930","1990"},
                         {"Amezon","Nyle","Denyub","Sindhu"},
                         {"America","Russsia","India","England"},
                         {"Baseball","Tennis","Football","Cricket"},
                         {"England","France","Grees","China"},
                         {"Sahaara","Great Victoria","Arebian","Libia"},
                         {"Rose","Lion","Lotus","Unicon"}
   						   };


   	 for(i=0;i<10;i++)
     	{
      		printf("%d:-%s\n",i+1,qs1[i]);
            for(j=0;j<4;j++)
            	{
               	printf("(%c)%s\t",j+97,qs1op[i][j]);
                  if(j==1)
                  printf("\n");
               }

            printf("\nAnswer:");
            gets(ans);
             if((strcmp(ans,"h")==0)&&d==0)
              printf("Double Deep life line\n");

            if(strcmp(ans,"h")==0)
            {

            st3:
             if(d<2)
              {   lc3:
                 printf("\nAnswer:");
                  gets(ans);
                  d++;
                   if(strcmp(ans,asqs[i])==0)
                  {
                    d=3;
                    goto ra3;
                  }
                 if(d<2)
              		{
                   printf("Wrong answer last chance\n");
                   goto st3;
                  }
               }
               if(d>3)
               break;
              if(d==3)
                {
                 printf("You have no life line.\n");
                 d++;
                 goto lc3;
                }

             }
           if(strcmp(ans,asqs[i])==0)
            {
            	ra3:
            	printf("***Right Answer***\n\n");
               h++;
            }
            else
            break;
      }

   if(h==10)
   printf("\nCongrats %s ,You Win!!!!",name);

   else
   printf("\nOoops!You Failed\n%s Na Avde To Na Ramiye",name);
 }




   /*Forth Question Set*/

   	if(strlen(name)==5||strlen(name)==8)
   {
  	char qs1[][250]={
   					"Which day is known as 'Shahid Din'?",/*23 March*/
                  "who was first Chief Minister of Gujarat?",    /*Dr. Jeevaraj Mehta*/
                  "Who has written 'Ramchreet Maanas'?",   /*Tulsidas*/
                  "In which year Mother Teressa ahchived 'Nobel Prize'?",    /*1979*/
                  "What is the scientific name of 'Lime Stone'?", /*Calsium Carbonate*/
                  "In which year 'Steam Engine was invented?",  /*1777*/
                  "How many countries are in Australia?",/*14*/
                  "Which country won Hocky World Cup in 2006?",/*Germony*/
                  "In Pakistan with which name Parlament is known?",/*National Assenbly*/
                  "Who was Divided Bangladesh in 1905?"/*Lord Karson*/
                  	};
  	char asqs[][20]={"a","b","d","b","a","b","c","a","c","b"};


   char qs1op[][4][50]={{"23 Mar","9 Jun","5 Sep","31 Mar"},
   							 {"Morarji Desai","Dr. Jeevraj Mehta","Vallabhbhai Patel","Ravishankar Raval"},
                         {"Vishnu Sarma","Valmiki","Kalidas","Tulsidas"},
                         {"1925","1979","1980","1965"},
                         {"Calsium Carbonate","Sodium Cloride","Calsium Salfet","Sodium Salfet"},
                         {"1778","1777","1888","1887"},
                         {"12","13","14","15"},
                         {"Germony","France","India","China"},
                         {"People's Assembly","Sansad","National Assembly","Suprim Assembly"},
                         {"Lord Voiceroy","Lord Karson","Lord Heshingstone","Lord Minto"}
   						   };





   	 for(i=0;i<10;i++)
     	{
      		printf("%d:-%s\n",i+1,qs1[i]);
            for(j=0;j<4;j++)
            	{
               	printf("(%c)%s\t",j+97,qs1op[i][j]);
                  if(j==1)
                  printf("\n");
               }

            printf("\nAnswer:");
            gets(ans);
             if((strcmp(ans,"h")==0)&&d==0)
              printf("Double Deep life line\n");

            if(strcmp(ans,"h")==0)
            {

            st4:
             if(d<2)
              {   lc4:
                 printf("\nAnswer:");
                  gets(ans);
                  d++;
                   if(strcmp(ans,asqs[i])==0)
                  {
                    d=3;
                    goto ra4;
                  }
                 if(d<2)
              		{
                   printf("Wrong answer last chance\n");
                   goto st4;
                  }
               }
               if(d>3)
               break;
              if(d==3)
                {
                 printf("You have no life line.\n");
                 d++;
                 goto lc4;
                }

             }
           if(strcmp(ans,asqs[i])==0)
            {
            	ra4:
            	printf("***Right Answer***\n\n");
               h++;
            }
            else
            break;
      }

   if(h==10)
   printf("\nCongrats %s ,You Win!!!!",name);

   else
   printf("\nOoops!You Failed\n%s Na Avde To Na Ramiye",name);
 }



  getch();
}
