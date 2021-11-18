#include <stdio.h>
#include <stdlib.h>
#include"Project.h"
#include<time.h>
#include<windows.h>
int main()
{
int c,D,C;
FILE*PTR=NULL;
char CH=0,choix=0;
//PAGE D'ENTREE

printf("\n\n");
printf("\t\t\t\tWW               WW                                                   EEEEEEEEEEE        AFNIDOU MBARKA\n");color(11,0);
printf("\t\t\t\tWW               WW                                                  EE\n");color(2,0);
printf("\t\t\t\tWW               WW EEEEEE  LL        CCCCCCC  OOOOOOO0 MMM     MMM   EE\n"); color(3,0);
printf("\t\t\t\t WW      WW     WW  EE      LL        CC       OO    OO MM  M M  MM    EEE\n");color(5,0);
printf("\t\t\t\t  WW    WWWW   WW   EEEE    LL        CC       OO    OO MM   M   MM   EE\n");color(6,0);
printf("\t\t\t\t   WW WW   WW WW    EE      LL        CC       OO    OO MM       MM  EE\n");color(7,0);
printf("\t\t\t\t    WW      WW     EEEEEE  LLLLLLLL  CCCCCCC  OOOOOOO0 MM       MM   EEEEEEEEEEE\n");color(4,0);
printf("\n\n");
printf("\t\tTTTTTTTTTTTTT    OOOOOOOOOO      MMM     MMM  OOOOOOO0   LL       LL        IIIIIIIIIIIII  NNN      NN\n");color(11,0);
printf("\t\t     TTT         OO      OO      MM  M M  MM  OO    OO   LL       LL             III       NNN NN   NN\n");color(2,0);
printf("\t\t     TTT         OO      OO      MM   M   MM  OO    OO   LL       LL             III       NN   NN  NN \n");color(5,0);
printf("\t\t     TTT         OO      OO      MM       MM  OO    OO   LL       LL             III       NN     NNNN\n");color(6,0);
printf("\t\t     TTT         OO      OO      MM       MM  OO    OO   LL       LL             III       NN      NNN\n");color(7,0);
printf("\t\t     TTT         OOOOOOOOOO      MM       MM  OOOOOOO0   LLLLLLLL LLLLLLLL  IIIIIIIIIIIII  NN       NN    OUSSAMA FARKADI\n");color(4,0);
printf("\a");printf("\n\n\n");
color(11,0);
getch();
system("\t\t\tcls");
printf("\n\n\n");
E:  color(4,0);
printf("\n\n\n\n");
//MENU 1
printf("\t\t\t\t\t\t ___________________________\n");
printf("\t\t\t\t\t\t|                           | \n");
printf("\t\t\t\t\t\t|         1-START           |\n");
printf("\t\t\t\t\t\t|___________________________| \n");
color(2,0);
printf("\t\t\t\t\t\t ___________________________\n");
printf("\t\t\t\t\t\t|                           |\n");
printf("\t\t\t\t\t\t|          2-RANKING        |\n");
printf("\t\t\t\t\t\t|___________________________| \n");
color(5,0);
printf("\t\t\t\t\t\t ___________________________\n");
printf("\t\t\t\t\t\t|                           |\n");
printf("\t\t\t\t\t\t|          3-HELP           |\n");
printf("\t\t\t\t\t\t|___________________________| \n");
color(11,0);
printf("\t\t\t\t\t\t ___________________________\n");
printf("\t\t\t\t\t\t|                           |\n");
printf("\t\t\t\t\t\t|          4-EXIT           |\n");
printf("\t\t\t\t\t\t|___________________________| \n\n");
color(15,0);
printf("\t veuillez entrer votre choix :  ");
//MENU 2
CH=getchar();getchar();printf("\a");
system("cls");
switch(CH){
case '1':
{
system("\t\t\tcls");printf("\n\n\n\nChoisissez Votre adversaire:");
printf("\n\n");
color(11,0);
printf("\n\n\n\n");
printf("\t\t\t\t\t\t ___________________________\n");
printf("\t\t\t\t\t\t|                           | \n");
printf("\t\t\t\t\t\t|         1-AMI             |\n");
printf("\t\t\t\t\t\t|___________________________| \n");
color(5,0);
printf("\t\t\t\t\t\t ___________________________\n");
printf("\t\t\t\t\t\t|                           |\n");
printf("\t\t\t\t\t\t|       2-ORDINATEUR        |\n");
printf("\t\t\t\t\t\t|___________________________| \n");
do{color(15,0);
printf("\t veuillez entrer votre choix :  ");scanf("%d",&C);printf("\a");}while((C<1)||(C>2));
color(5,0);
system("cls");
if(C==1) JvsJ();
else {
 color(5,0);
printf("\n\n");
color(11,0);
printf("\n\n\n\n");
printf("\t\t\t\t\t\t ___________________________\n");
printf("\t\t\t\t\t\t|                           | \n");
printf("\t\t\t\t\t\t|         1-FACILE          |\n");
printf("\t\t\t\t\t\t|___________________________| \n");
color(4,0);
printf("\t\t\t\t\t\t ___________________________\n");
printf("\t\t\t\t\t\t|                           |\n");
printf("\t\t\t\t\t\t|          2-MOYEN          |\n");
printf("\t\t\t\t\t\t|___________________________| \n");

color(15,0);
do{printf("                 veuillez entrer votre choix :  ");scanf("%d",&D);printf("\a");}while((D<1)||(D>2));
color(5,0);
system("cls");
 if(D==1) { HvsM();}
 else   HvsAI();
}
break;
}
case '2':{color(15,0);PTR=fopen("RANKING.txt","rt");

if(PTR==NULL) printf("Le fichier n'existe pas\n");
else{ do{ c=fgetc(PTR);putchar(c);}while(c!=EOF);}
  fclose(PTR);

break;}
case '3':{  color(15,0);PTR=fopen("help.txt","rt");

if(PTR==NULL) printf("Le fichier n'existe pas\n");
else{ do{ c=fgetc(PTR);putchar(c);}while(c!=EOF);}
  fclose(PTR); color(4,0);
break;}
case '4': { printf("vous voulez vraiment sortir ?[o/n]\n");
       choix=getchar();
       getchar();
        if(choix=='o') return ;
     else {goto E;}
break;}
default:{printf("\n NOT RESPOND CORRECTLY ......\n");goto E; break ;}
}}

