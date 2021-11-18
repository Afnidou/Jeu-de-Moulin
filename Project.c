#include<time.h>
#include<windows.h>
#include <stdio.h>
#include <stdlib.h>
int T[24],ETAT[24];
int LAS,DOS,Gagnat=0;


 void color(int couleurDuTEXTE,int couleurDeFond)
{
    HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(H,couleurDeFond*16+couleurDuTEXTE);
}
void  co(int i) {
    if (T[i]==0) color(15,0);
    if(T[i]==1) color(4,4);
    if(T[i]==2) color(2,2);
 }
void congratus(int joueur)
{
     system("PAUSE");
system("cls");
    co(joueur);printf("***********************************JOUEUR %d***********************************\n",joueur);
printf("                           C");color(11,0);printf("O");color(2,0);printf("N");color(3,0);printf("G");color(4,0);printf("R");color(5,0);
printf("A");color(6,0);printf("T");color(7,0);printf("U");color(8,0);printf("L");color(9,0);printf("A");color(11,0);
printf("T");color(2,0);printf("I");color(3,0);color(7,0);printf("O");color(4,0);printf("N");color(11,0);printf("S\n");color(8,0);
color(4,0);
printf("  \t\t\t\t\t\tYY      YY OOOOOOOOOO  UU     UU\n");color(11,0);
printf("  \t\t\t\t\t\t YY   YY   OO      OO  UU     UU\n");color(2,0);
printf("  \t\t\t\t\t\t  YY YY    OO      OO  UU     UU\n");color(3,0);
printf("  \t\t\t\t\t\t   YYY     OO      OO  UU     UU\n");color(5,0);
printf("  \t\t\t\t\t\t   YY      OO      OO  UU     UU\n");color(6,0);
printf("  \t\t\t\t\t\t   YY      OO      OO  UU     UU\n");color(7,0);
printf("  \t\t\t\t\t\t   YY      OOOOOOOOOO  UUUUUUUUU\n");
printf("\n\n");
printf("     \t\t\t\t\tWW            WW  IIIIIIIIIIIII  NNN      NN\n");color(11,0);
printf("     \t\t\t\t\tWW            WW       III       NNN NN   NN\n");color(2,0);
printf("     \t\t\t\t\tWW    WWWW    WW       III       NN   NN  NN\n"); color(3,0);
printf("     \t\t\t\t\tWW   WW  WW   WW       III       NN    NN NN\n");color(5,0);
printf("     \t\t\t\t\tWW  WW    WW  WW       III       NN     NNNN\n");color(6,0);
printf("     \t\t\t\t\tWW WW      WW WW       III       NN      NNN\n");color(7,0);
printf("     \t\t\t\t\tWWWW       WWWWW  IIIIIIIIIIIII  NN       NN\n");color(4,0);
printf("\a");
}
 int score(int joueur)
 { int J=0;
 for(int i=0;i<24;i++){ if(T[i]==joueur) J++;}
  return (J);
 }
int Somme_Etat(int joueur)
 {  int J=0;
 for(int i=0;i<24;i++){ if((T[i]==joueur)&&(ETAT[i]==1)) J++;}
  return (J);                }
void grille()
{ printf("\n\n\n");
printf("\t\t\t ");co(0);printf("|00|");color(15,0);printf("=======================");co(1);printf("|01|");color(15,0);printf("=======================");co(2);printf("|02|");printf("\n");
color(15,0);printf("\t\t\t  |  \t\t\t     |  \t\t        |\n");
            printf("\t\t\t  |\t\t\t     |  \t\t        |\n");
            printf("\t\t\t  |\t\t\t     |  \t\t        |\n");
printf("\t\t\t  |         ");co(3);printf("|03|");color(15,0);printf("============");co(4);printf("|04|");color(15,0);printf("============");co(5);printf("|05|");color(15,0);printf("        |\n");
 printf("\t\t\t  |          |               |               |          |\n");
 printf("\t\t\t  |          |               |               |          |\n");
 printf("\t\t\t  |          |               |               |          |\n");
printf("\t\t\t  |          |    ");co(6);printf("|06|");color(15,0);printf("======");co(7);printf("|07|");color(15,0);printf("=====");co(8);printf("|08|");color(15,0);printf("    |          |\n");
printf("\t\t\t  |          |     |                  |      |          |\n");
printf("\t\t\t  |          |     |                  |      |          |\n");
printf("\t\t\t  |          |     |                  |      |          |\n");
printf("\t\t\t ");co(9);printf("|09|") ;color(15,0); printf("=======");co(10);printf("|10|");color(15,0);printf("==");co(11);printf("|11|");color(15,0);printf("               ");co(12);printf("|12|");color(15,0);printf("==");co(13);printf("|13|");color(15,0);printf("========");co(14);printf("|14|");printf("\n");
color(15,0);printf("\t\t\t  |          |     |                  |      |          |\n");
printf("\t\t\t  |          |     |                  |      |          |\n");
printf("\t\t\t  |          |     |                  |      |          |\n");
color(15,0);printf("\t\t\t  |          |    ");co(15);printf("|15|");color(15,0);printf("======");co(16);printf("|16|");color(15,0);printf("=====");co(17);printf("|17|");color(15,0);printf("    |          |\n");
printf("\t\t\t  |          |                |              |          |\n");
 printf("\t\t\t  |          |                |              |          |\n");
  printf("\t\t\t  |          |                |              |          |\n");
printf("\t\t\t  |         ");co(18);printf("|18|");color(15,0);printf("============");co(19);printf("|19|");color(15,0);printf("============");co(20);printf("|20|");color(15,0);printf("        |\n");
 printf("\t\t\t  |\t\t\t      |  \t\t        |\n");
 printf("\t\t\t  |\t\t\t      |  \t\t        |\n");
 printf("\t\t\t  |\t\t\t      |  \t\t        |\n");
printf("\t\t\t ");co(21);printf("|21|");color(15,0);printf("=======================");co(22);printf("|22|");color(15,0);printf("=======================");co(23);printf("|23|\n");color(15,0);
printf("\t\t\t score 1 :%d                                    score 2 :%d       \n\n\n", score(1),score(2));color(15,0);
}
void MOULIN(int i,int j,int u,int joueur)
{
int score_adv=0,adv,n; //n= la case a vider
if (joueur==1) {adv=2;score_adv=score(2);}
else {adv =1; score_adv=score(1);}
// le cas ou ya que des pions proteges ou le score <=3
if(((score_adv>3)&&(Somme_Etat(adv)==score_adv))||(score_adv<=3))
  { if((T[i]==T[j])&&(T[j]==T[u])&&(T[u]==joueur))
      {if((ETAT[i]==0)||(ETAT[j]==0)||(ETAT[u]==0))
        {ETAT[i]=1,ETAT[j]=1,ETAT[u]=1;
       printf("JOUEUR %d :vous avez le droit de capture \n\n",joueur);

        do{ printf("donner sa position :\n");scanf("%d",&n);}while((T[n]!=adv));
        T[n]=0; ETAT[n]=0;
       }
      }
  }
else {if((T[i]==T[j])&&(T[j]==T[u])&&(T[u]==joueur))
        {if((ETAT[i]==0)||(ETAT[j]==0)||(ETAT[u]==0))
          {ETAT[i]=1,ETAT[j]=1,ETAT[u]=1;
           printf("JOUEUR %d :vous avez le droit de capture \n\n",joueur);
           color(15,0);
           do{ printf("donner sa position :\n");scanf("%d",&n);}while((T[n]!=adv)||(ETAT[n]!=0));
           T[n]=0;ETAT[n]=0;   }
        }
   }
}

void TRAITEMENT(int joueur)
{ //MOULINS COLONNES
   MOULIN(0,9,21,joueur);MOULIN(3,10,18,joueur);MOULIN(6,11,15,joueur);
   MOULIN(1,4,7,joueur);MOULIN(16,19,22,joueur);MOULIN(8,12,17,joueur);
   MOULIN(5,13,20,joueur);MOULIN(2,14,23,joueur);
//MOULINS LIGNES
   MOULIN(0,1,2,joueur);MOULIN(3,4,5,joueur);
   MOULIN(6,7,8,joueur);MOULIN(9,10,11,joueur);MOULIN(12,13,14,joueur);
   MOULIN(15,16,17,joueur);MOULIN(18,19,20,joueur);MOULIN(21,22,23,joueur);


}
void tr_double_moulin(int joueur,int adv)
{ // le traitement a effectuer si le double moulin est verifie:
int n,score_adv;
if (joueur==1) {adv=2;score_adv=score(2);}
else  {adv =1; score_adv=score(1);}

if(((score_adv>3)&&(Somme_Etat(adv)==score_adv))||(score_adv<=3))
    {
     printf("JOUEUR %d :DOUBLE vous avez le droit de capture \n\n",joueur);
     color(15,0);
     do{ printf("ADV %d\n",Somme_Etat(adv));printf("donner sa position:\n");scanf("%d",&n);}while((T[n]!=adv));
     T[n]=0;ETAT[n]=0;
    }
 else {
       printf("JOUEUR %d :DOUBLE vous avez le droit de capture \n\n",joueur);
       color(15,0);
       do{ printf("donner sa position:\n");scanf("%d",&n);}while((T[n]!=adv)||(ETAT[n]!=0));
       T[n]=0;ETAT[n]=0;
      }
}
int VOISINAGE_double_moulin(int a,int b,int c,int d,int joueur)
{  // permet de verifier si un double moulin existe
if ((T[a]==joueur)&&(T[c]==joueur)&&(T[b]==joueur)&&(T[d]==joueur))
   {if((ETAT[d]==0)&&(ETAT[c]==0)&&(ETAT[b]==0)&&(ETAT[a]==0)) return 1; //la condition est vÈrifiÈ
    else           return 0;
   }
else                         return 0;
}
void double_moulin(int joueur,int m)
{ // tous les cas de double moulin : pour chaque case y a une possibilite d'avoir un double moulin
int adv;
if (joueur==1) adv=2;
if (joueur==2) adv =1;
if ((m==0)&&(VOISINAGE_double_moulin(1,2,9,21,joueur)==1))
      {ETAT[0]=1;ETAT[1]=1;ETAT[2]=1;ETAT[9]=1;ETAT[21]=1; tr_double_moulin(joueur,adv);}

if ((m==1)&&(VOISINAGE_double_moulin(0,2,4,7,joueur)==1))
    { ETAT[0]=1;ETAT[1]=1;ETAT[2]=1;ETAT[4]=1;ETAT[7]=1; tr_double_moulin(joueur,adv);}

if ((m==2)&&(VOISINAGE_double_moulin(0,1,14,23,joueur)==1))
    { ETAT[0]=1;ETAT[1]=1;ETAT[2]=1;ETAT[14]=1;ETAT[23]=1;tr_double_moulin(joueur,adv);}

if ((m==3)&&(VOISINAGE_double_moulin(4,5,10,18,joueur)==1))
  { ETAT[3]=1;ETAT[4]=1;ETAT[5]=1;ETAT[10]=1;ETAT[18]=1;  tr_double_moulin(joueur,adv);}

if ((m==4)&&(VOISINAGE_double_moulin(3,5,1,7,joueur)==1))
    {ETAT[3]=1;ETAT[4]=1;ETAT[5]=1;ETAT[7]=1;ETAT[1]=1;  tr_double_moulin(joueur,adv);}

if ((m==5)&&(VOISINAGE_double_moulin(4,3,13,20,joueur)==1))
    {ETAT[3]=1;ETAT[4]=1;ETAT[5]=1;ETAT[13]=1;ETAT[20]=1;  tr_double_moulin(joueur,adv);}

if ((m==6)&&(VOISINAGE_double_moulin(7,8,11,15,joueur)==1))
    {ETAT[6]=1;ETAT[7]=1;ETAT[8]=1;ETAT[11]=1;ETAT[15]=1;  tr_double_moulin(joueur,adv);}

if ((m==7)&&(VOISINAGE_double_moulin(6,8,1,4,joueur)==1))
    {ETAT[6]=1;ETAT[7]=1;ETAT[8]=1;ETAT[1]=1;ETAT[4]=1;  tr_double_moulin(joueur,adv);}

if ((m==8)&&(VOISINAGE_double_moulin(7,6,12,17,joueur)==1))
    {ETAT[6]=1;ETAT[7]=1;ETAT[8]=1;ETAT[12]=1;ETAT[17]=1;  tr_double_moulin(joueur,adv);}

if ((m==9)&&(VOISINAGE_double_moulin(0,21,10,11,joueur)==1))
   {ETAT[9]=1;ETAT[10]=1;ETAT[11]=1;ETAT[0]=1;ETAT[21]=1;  tr_double_moulin(joueur,adv);}

if ((m==10)&&(VOISINAGE_double_moulin(3,18,9,11,joueur)==1))
{ETAT[9]=1;ETAT[10]=1;ETAT[11]=1;ETAT[3]=1;ETAT[18]=1;  tr_double_moulin(joueur,adv);}

if ((m==11)&&(VOISINAGE_double_moulin(6,15,9,10,joueur)==1))
    {ETAT[9]=1;ETAT[10]=1;ETAT[11]=1;ETAT[6]=1;ETAT[15]=1;  tr_double_moulin(joueur,adv);}

if((m==12)&&(VOISINAGE_double_moulin(13,14,8,17,joueur)==1))
    {ETAT[12]=1;ETAT[13]=1;ETAT[14]=1;ETAT[17]=1;ETAT[8]=1;  tr_double_moulin(joueur,adv);}

if((m==13)&&(VOISINAGE_double_moulin(12,14,5,20,joueur)==1))
    {ETAT[12]=1;ETAT[13]=1;ETAT[14]=1;ETAT[5]=1;ETAT[20]=1;  tr_double_moulin(joueur,adv);}

if((m==14)&&(VOISINAGE_double_moulin(12,13,2,23,joueur)==1))
    {ETAT[12]=1;ETAT[13]=1;ETAT[14]=1;ETAT[2]=1;ETAT[23]=1;  tr_double_moulin(joueur,adv);}

if((m==15)&&(VOISINAGE_double_moulin(16,17,11,6,joueur)==1))
    {ETAT[15]=1;ETAT[16]=1;ETAT[17]=1;ETAT[11]=1;ETAT[6]=1;  tr_double_moulin(joueur,adv);}

if((m==16)&&(VOISINAGE_double_moulin(15,17,19,22,joueur)==1))
    {ETAT[15]=1;ETAT[16]=1;ETAT[17]=1;ETAT[19]=1;ETAT[22]=1;  tr_double_moulin(joueur,adv);}

if((m==17)&&(VOISINAGE_double_moulin(15,16,12,8,joueur)==1))
    {ETAT[15]=1;ETAT[16]=1;ETAT[17]=1;ETAT[12]=1;ETAT[8]=1;  tr_double_moulin(joueur,adv);}

if((m==18)&&(VOISINAGE_double_moulin(20,19,10,3,joueur)==1))
   {ETAT[18]=1;ETAT[19]=1;ETAT[20]=1;ETAT[10]=1;ETAT[3]=1;  tr_double_moulin(joueur,adv);}

if((m==19)&&(VOISINAGE_double_moulin(20,18,16,22,joueur)==1))
   {ETAT[18]=1;ETAT[19]=1;ETAT[20]=1;ETAT[16]=1;ETAT[22]=1;  tr_double_moulin(joueur,adv);}

if((m==20)&&(VOISINAGE_double_moulin(18,19,13,5,joueur)==1))
    {ETAT[18]=1;ETAT[19]=1;ETAT[20]=1;ETAT[13]=1;ETAT[5]=1;  tr_double_moulin(joueur,adv);}

if((m==21)&&(VOISINAGE_double_moulin(22,23,9,0,joueur)==1))
   {ETAT[21]=1;ETAT[22]=1;ETAT[23]=1;ETAT[9]=1;ETAT[0]=1; tr_double_moulin(joueur,adv);}

if((m==22)&&(VOISINAGE_double_moulin(21,23,16,19,joueur)==1))
   {ETAT[21]=1;ETAT[22]=1;ETAT[23]=1;ETAT[16]=1;ETAT[19]=1; tr_double_moulin(joueur,adv);}

if((m==23)&&(VOISINAGE_double_moulin(21,22,14,2,joueur)==1))
    {ETAT[21]=1;ETAT[22]=1;ETAT[23]=1;ETAT[14]=1;ETAT[2]=1; tr_double_moulin(joueur,adv);}
}
void remplissage_joueur(int joueur)
 { int f;
  do{printf("\t\t\t  votre emplacement :\n");grille();scanf("%d",&f);}while((f<0)||(f>23)||(T[f]!=0));
  T[f]=joueur;
  double_moulin(joueur,f); //verification de double moulin
 }
int verification_blocage(int i)
{
//le changement qui ont une possibilit√© de 4 d√©placement

if((i==4)&&((T[3]!=0)&&(T[1]!=0)&&(T[5]!=0)&&(T[7]!=0)))return 0;
else if ((i==10)&&((T[9]!=0)&&(T[11]!=0)&&(T[3]!=0)&&(T[18]!=0)))return 0;
else if ((i==13)&&((T[14]!=0)&&(T[12]!=0)&&(T[20]!=0)&&(T[5]!=0)))return 0;
else if ((i==19)&&((T[22]!=0)&&(T[16]!=0)&&(T[18]!=0)&&(T[20]!=0)))return 0;

//le changement qui ont une possibilit√© de 3 d√©placement

else if  ((i==12)&&((T[8]!=0)&&(T[13]!=0)&&(T[17]!=0)))return 0;
else if  ((i==7)&&((T[6]!=0)&&(T[8]!=0)&&(T[4]!=0)))return 0;
else if  ((i==11)&&((T[10]!=0)&&(T[15]!=0)&&(T[6]!=0)))return 0;
else if  ((i==16)&&((T[19]!=0)&&(T[15]!=0)&&(T[17]!=0)))return 0;
else if  ((i==14)&&((T[13]!=0)&&(T[23]!=0)&&(T[2]!=0)))return 0;
else if  ((i==9)&&((T[0]!=0)&&(T[21]!=0)&&(T[10]!=0)))return 0;
else if  ((i==1)&&((T[0]!=0)&&(T[2]!=0)&&(T[4]!=0)))return 0;
else if  ((i==22)&&((T[21]!=0)&&(T[23]!=0)&&(T[19]!=0)))return 0;
//le changement qui ont une possibilit√© de 2 d√©placement

else if  ((i==0)&&((T[9]!=0)&&(T[1]!=0)))return 0;
else if  ((i==3)&&((T[4]!=0)&&(T[10]!=0)))return 0;
else if  ((i==6)&&((T[7]!=0)&&(T[11]!=0)))return 0;
else if  ((i==21)&&((T[9]!=0)&&(T[22]!=0)))return 0;
else if  ((i==18)&&((T[10]!=0)&&(T[19]!=0)))return 0;
else if  ((i==15)&&((T[11]!=0)&&(T[16]!=0)))return 0;
else if ((i==2)&&((T[1]!=0)&&(T[14]!=0)))return 0;
else if  ((i==5)&&((T[4]!=0)&&(T[13]!=0)))return 0;
else if  ((i==8)&&((T[12]!=0)&&(T[7]!=0)))return 0;
else if  ((i==23)&&((T[14]!=0)&&(T[22]!=0)))return 0;
else if  ((i==20)&&((T[19]!=0)&&(T[13]!=0)))return 0;
else if ((i==17)&&((T[16]!=0)&&(T[12]!=0)))return 0;
else return 1;
}
int blocage(int joueur)  //LE NOMBRE DE CASE NON BLOQUEES POUR CHAQUE JOUEUR : TEST DE FN FU JEU A CAUSE DU BLOCAGE
{
 int comp;
 for (int i=0;i<24;i++) if(T[i]==joueur) comp+=verification_blocage(i);
 return comp;
}
void remplissage()
 { int a,i;
 srand(time(NULL));
 LAS=1+rand()%2;
 if(LAS==1) DOS=2; // LAS =le premiere a jouer
 if(LAS==2) DOS=1;  // DOS =le deuxieme a jouer
 for(a=0;a<24;a++) {T[a]=0 ;ETAT[a]=0; } //initialisation des cases
 for(i=0;i<9;i++)
{
   if(LAS==1)
   { color(4,0);
     printf("\t\t\t __________\n");printf("\t\t\t| JOUEUR %d:| \n",LAS);printf("\t\t\t|__________|\n|");
   }
   else
   { color(2,0);
     printf("\t\t\t __________\n");printf("\t\t\t| JOUEUR %d:| \n",LAS);printf("\t\t\t|__________|\n|");
   }
   color(15,0);
   printf("\n\t\t\t ++++++++++++++++++++++ tour %d +++++++++++++++++++++++++++++ \n",i);
   remplissage_joueur(LAS); TRAITEMENT(LAS);
   system("PAUSE");system("cls");
   if(DOS==1)
    { color(4,0);
      printf("\t\t\t  __________\n")  ;printf("\t\t\t| JOUEUR %d:| \n",DOS); printf("\t\t\t|__________|\n|");
    }
   else
    {color(2,0);
     printf("\t\t\t __________\n")  ;printf("\t\t\t| JOUEUR %d:| \n",DOS); printf("\t\t\t|__________|\n|");
    }
   color(15,0) ;
   remplissage_joueur(DOS); TRAITEMENT(DOS);
  system("PAUSE");system("cls");
}
 }
void traitement_deplacement(int* a )
{  printf("\t\t nouvelle case :\n");scanf("%d",a); } // utilisation de pointeur car la fonction est de type void
    //verification de double moulin
void deplacement(int joueur)
{
int i,a,x;
 printf("Le JOUEUR %d\n",joueur);

do{
      printf("\t\t l'emplacement a deplacer :\n");
      scanf("%d",&i);
      x=verification_blocage(i);   //Verification si le pion peut se dÈplacer ou non
 }while ((i>23)||(T[i]!=joueur)||(x==0));
ETAT[i]=0; T[i]=0;   //l'emplacement actuel est vidÈ
if (i==0){do {traitement_deplacement(&a); } while (((a!=9)&&(a!=1))||(a>23)||(T[a]!=0)||(a<0));}
else if (i==3){do {traitement_deplacement(&a); } while (((a!=4)&&(a!=10))||(a>23)||(T[a]!=0)||(a<0));}
else if (i==6){do {traitement_deplacement(&a); } while (((a!=7)&&(a!=11))||(a>23)||(T[a]!=0)||(a<0));}
else if  (i==2){do {traitement_deplacement(&a); } while (((a!=1)&&(a!=14))||(a>23)||(T[a]!=0)||(a<0));}
else if  (i==5){do {traitement_deplacement(&a); } while (((a!=4)&&(a!=13))||(a>23)||(T[a]!=0)||(a<0));}
else if  (i==8){do {traitement_deplacement(&a); } while (((a!=7)&&(a!=12))||(a>23)||(T[a]!=0)||(a<0));}
else if  (i==21){do {traitement_deplacement(&a); } while (((a!=9)&&(a!=22))||(a>23)||(T[a]!=0)||(a<0));}
else if  (i==18){do {traitement_deplacement(&a); } while (((a!=10)&&(a!=19))||(a>23)||(T[a]!=0)||(a<0));}
else if (i==15){do {traitement_deplacement(&a); } while (((a!=11)&&(a!=16))||(a>23)||(T[a]!=0)||(a<0));}
else if  (i==23){do {traitement_deplacement(&a); } while (((a!=14)&&(a!=22))||(a>23)||(T[a]!=0)||(a<0));}
else if  (i==20){do {traitement_deplacement(&a); } while (((a!=19)&&(a!=13))||(a>23)||(T[a]!=0)||(a<0));}
else if (i==17){do {traitement_deplacement(&a); } while (((a!=12)&&(a!=16))||(a>23)||(T[a]!=0)||(a<0));}
else if  (i==1){do {traitement_deplacement(&a); } while (((a!=0)&&(a!=2)&&(a!=4))||(a>23)||(T[a]!=0)||(a<0));}
else if  (i==7){do {traitement_deplacement(&a); } while (((a!=6)&&(a!=8)&&(a!=4))||(a>23)||(T[a]!=0)||(a<0));}
else if (i==9){do {traitement_deplacement(&a); } while (((a!=0)&&(a!=21)&&(a!=10))||(a>23)||(T[a]!=0)||(a<0));}
else if (i==11){do {traitement_deplacement(&a); } while (((a!=6)&&(a!=15)&&(a!=10))||(a>23)||(T[a]!=0)||(a<0));}
else if  (i==12){do {traitement_deplacement(&a); } while (((a!=8)&&(a!=17)&&(a!=13))||(a>23)||(T[a]!=0)||(a<0));}
else if  (i==14){do {traitement_deplacement(&a); } while (((a!=2)&&(a!=23)&&(a!=13))||(a>23)||(T[a]!=0)||(a<0));}
else if  (i==22){do {traitement_deplacement(&a); } while (((a!=21)&&(a!=23)&&(a!=19))||(a>23)||(T[a]!=0)||(a<0));}
else if (i==16){do {traitement_deplacement(&a); } while (((a!=15)&&(a!=17)&&(a!=19))||(a>23)||(T[a]!=0)||(a<0));}
else if  (i==4){do {traitement_deplacement(&a); } while (((a!=3)&&(a!=5)&&(a!=1)&&(a!=7))||(a>23)||(T[a]!=0)||(a<0));}
else if  (i==10){do {traitement_deplacement(&a); } while (((a!=3)&&(a!=18)&&(a!=11)&&(a!=9))||(a>23)||(T[a]!=0)||(a<0));}
else if  (i==13){do {traitement_deplacement(&a); } while (((a!=5)&&(a!=20)&&(a!=12)&&(a!=14))||(a>23)||(T[a]!=0)||(a<0));}
else {do {traitement_deplacement(&a); } while (((a!=18)&&(a!=20)&&(a!=16)&&(a!=22))||(a>23)||(T[a]!=0)||(a<0));}
T[a]=joueur;double_moulin(joueur,a);}
 //le nouveau emplacement est replie par le pion du joueur n

void VOLE(int joueur)
{
int i,a;
 co(joueur);
 printf("Le JOUEUR %d\n",joueur);
 color(15,0);do{
                  printf("\t\t l'emplacement a deplacer :\n");
                   scanf("%d",&i); }while ((i>23)||(T[i]!=joueur)||(i<0));
 ETAT[i]=0;T[i]=0;   //l'emplacement actuel est vidÈ
grille();
 do{printf("\t\t nouvelle case :\n");scanf("%d",&a);}while((a>23)||(T[a]!=0)||(a<0));
 T[a]=joueur;
}
void RANKING1()
{
 FILE*fr; //pointeur sur un fichier

char*p="Dans le dernier jeu:\n Le joueur 1  gagnat ";
char*q="Dans le dernier jeu:\n Le joueur 2 gagnat ";
char*w="Pas d'historique\n vous pouvez voir le resultat a la fin du jeu\n Merci. ";
fr=fopen("RANKING.txt","wt");
   if(Gagnat==1) fputs(p,fr);
 else if(Gagnat==2) fputs(q,fr);
 else fputs(w,fr);
fclose(fr);

}
int test_fin(int joueur,int adv)
 {
     if((score(joueur)<=2)||(blocage(joueur)==0))
        {congratus(adv);
         Gagnat=adv;
         RANKING1();
         return 1;
         }
     else return 0;
 }
void JvsJ()
{
for(int b=0;b<=23;b++)  {T[b]=0 ;ETAT[b]=0; }
grille();
getch();
system("cls");
remplissage();
grille();
while((test_fin(LAS,DOS)==0)&&(test_fin(DOS,LAS)==0))
	{if(score(LAS)>3) deplacement(LAS);
	 else VOLE(LAS);
     TRAITEMENT(LAS);
     grille();
	 if(score(DOS)>3) deplacement(DOS);
	 else VOLE(DOS);
     TRAITEMENT(DOS);
     grille();
	}
}
void Traitement_moulin_ordi(int*n)
{ srand(time(NULL));
   if(((score(1)>3)&&(Somme_Etat(1)==score(1)))||(score(1)<=3))
        do{*n=rand()%24;}while(T[*n]!=1);
   else
        do{*n=rand()%24;}while((T[*n]!=1)||(ETAT[*n]!=0));
T[*n]=0;ETAT[*n]=0;
}
void MOULIN_ORDI(int i,int j,int u)
{ int n;
if((T[i]==T[j])&&(T[j]==T[u])&&(T[u]==2)&&((ETAT[i]==0)||(ETAT[j]==0)||(ETAT[u]==0)))
{ ETAT[i]=1,ETAT[j]=1,ETAT[u]=1;
Traitement_moulin_ordi(&n);}}
void TRAITMENT_ORDINATEUR()
{
MOULIN_ORDI(0,9,21);MOULIN_ORDI(3,10,18);MOULIN_ORDI(6,11,15);
MOULIN_ORDI(1,4,7);MOULIN_ORDI(16,19,22);MOULIN_ORDI(8,12,17);
MOULIN_ORDI(5,13,20);MOULIN_ORDI(2,14,23);

MOULIN_ORDI(0,1,2);MOULIN_ORDI(3,4,5);MOULIN_ORDI(6,7,8);
MOULIN_ORDI(9,10,11);MOULIN_ORDI(12,13,14);MOULIN_ORDI(15,16,17);
MOULIN_ORDI(18,19,20);MOULIN_ORDI(21,22,23);
}
void tr_double_moulin_ordi()
{ srand(time(NULL));
    int n;
if((score(1)>3)&&(Somme_Etat(1)==score(1)))
   {do{n=rand()%24;}while((T[n]!=1));}
else if(score(1)<=3)   {do{n=rand()%24;}while((T[n]!=1));}
 else { do{ n=rand()%24;}while((T[n]!=1)||(ETAT[n]!=0));  }
T[n]=0;ETAT[n]=0;
}
void double_moulin_ordi(int m)
{

if ((m==0)&&(VOISINAGE_double_moulin(1,2,9,21,2)==1))
  {ETAT[0]=1;ETAT[1]=1;ETAT[2]=1;ETAT[9]=1;ETAT[21]=1; tr_double_moulin_ordi();}

if ((m==1)&&(VOISINAGE_double_moulin(0,2,4,7,2)==1))
   {ETAT[0]=1;ETAT[1]=1;ETAT[2]=1;ETAT[4]=1;ETAT[7]=1; tr_double_moulin_ordi();}

if ((m==2)&&(VOISINAGE_double_moulin(0,1,14,23,2)==1))
    {ETAT[0]=1;ETAT[1]=1;ETAT[2]=1;ETAT[14]=1;ETAT[23]=1;tr_double_moulin_ordi();}

if ((m==3)&&(VOISINAGE_double_moulin(4,5,10,18,2)==1))
   {ETAT[3]=1;ETAT[4]=1;ETAT[5]=1;ETAT[10]=1;ETAT[18]=1;  tr_double_moulin_ordi();}

if((m==4)&&(VOISINAGE_double_moulin(3,5,1,7,2)==1))
   {ETAT[3]=1;ETAT[4]=1;ETAT[5]=1;ETAT[7]=1;ETAT[1]=1;  tr_double_moulin_ordi();}

if ((m==5)&&(VOISINAGE_double_moulin(4,3,13,20,2)==1))
   {ETAT[3]=1;ETAT[4]=1;ETAT[5]=1;ETAT[13]=1;ETAT[20]=1;  tr_double_moulin_ordi();}

if ((m==6)&&(VOISINAGE_double_moulin(7,8,11,15,2)==1))
    {ETAT[6]=1;ETAT[7]=1;ETAT[8]=1;ETAT[11]=1;ETAT[15]=1;  tr_double_moulin_ordi();}

if ((m==7)&&(VOISINAGE_double_moulin(6,8,1,4,2)==1))
   {ETAT[6]=1;ETAT[7]=1;ETAT[8]=1;ETAT[1]=1;ETAT[4]=1;  tr_double_moulin_ordi();}

if ((m==8)&&(VOISINAGE_double_moulin(7,6,12,17,2)==1))
   {ETAT[6]=1;ETAT[7]=1;ETAT[8]=1;ETAT[12]=1;ETAT[17]=1;  tr_double_moulin_ordi();}

if ((m==9)&&(VOISINAGE_double_moulin(0,21,10,11,2)==1))
   {ETAT[9]=1;ETAT[10]=1;ETAT[11]=1;ETAT[0]=1;ETAT[21]=1;  tr_double_moulin_ordi();}

if ((m==10)&&(VOISINAGE_double_moulin(3,18,9,11,2)==1))
   {ETAT[9]=1;ETAT[10]=1;ETAT[11]=1;ETAT[3]=1;ETAT[18]=1;  tr_double_moulin_ordi();}

if((m==11)&&(VOISINAGE_double_moulin(6,15,9,10,2)==1))
    {ETAT[9]=1;ETAT[10]=1;ETAT[11]=1;ETAT[6]=1;ETAT[15]=1;  tr_double_moulin_ordi();}

if ((m==12)&&(VOISINAGE_double_moulin(13,14,8,17,2)==1))
   {ETAT[12]=1;ETAT[13]=1;ETAT[14]=1;ETAT[17]=1;ETAT[8]=1;  tr_double_moulin_ordi();}

if ((m==13)&&(VOISINAGE_double_moulin(12,14,5,20,2)==1))
   { ETAT[12]=1;ETAT[13]=1;ETAT[14]=1;ETAT[5]=1;ETAT[20]=1;  tr_double_moulin_ordi();}

if ((m==14)&&(VOISINAGE_double_moulin(12,13,2,23,2)==1))
   { ETAT[12]=1;ETAT[13]=1;ETAT[14]=1;ETAT[2]=1;ETAT[23]=1;  tr_double_moulin_ordi();}

if ((m==15)&&(VOISINAGE_double_moulin(16,17,11,6,2)==1))
    {ETAT[15]=1;ETAT[16]=1;ETAT[17]=1;ETAT[11]=1;ETAT[6]=1;  tr_double_moulin_ordi();}

if ((m==16)&&(VOISINAGE_double_moulin(15,17,19,22,2)==1))
   { ETAT[15]=1;ETAT[16]=1;ETAT[17]=1;ETAT[19]=1;ETAT[22]=1;  tr_double_moulin_ordi();}
if ((m==17)&&(VOISINAGE_double_moulin(15,16,12,8,2)==1))
   {ETAT[15]=1;ETAT[16]=1;ETAT[17]=1;ETAT[12]=1;ETAT[8]=1;  tr_double_moulin_ordi();}

if ((m==18)&&(VOISINAGE_double_moulin(20,19,10,3,2)==1))
    { ETAT[18]=1;ETAT[19]=1;ETAT[20]=1;ETAT[10]=1;ETAT[3]=1;  tr_double_moulin_ordi();}

if ((m==19)&&(VOISINAGE_double_moulin(20,18,16,22,2)==1))
  { ETAT[18]=1;ETAT[19]=1;ETAT[20]=1;ETAT[16]=1;ETAT[22]=1;  tr_double_moulin_ordi();}

if((m==20)&&(VOISINAGE_double_moulin(18,19,13,5,2)==1))
   { ETAT[18]=1;ETAT[19]=1;ETAT[20]=1;ETAT[13]=1;ETAT[5]=1;  tr_double_moulin_ordi();}

if((m==21)&&(VOISINAGE_double_moulin(22,23,9,0,2)==1))
    { ETAT[21]=1;ETAT[22]=1;ETAT[23]=1;ETAT[9]=1;ETAT[0]=1; tr_double_moulin_ordi();}

if((m==22)&&(VOISINAGE_double_moulin(21,23,16,19,2)==1))
    {ETAT[21]=1;ETAT[22]=1;ETAT[23]=1;ETAT[16]=1;ETAT[19]=1; tr_double_moulin_ordi();}

if((m==23)&&(VOISINAGE_double_moulin(21,22,14,2,2)==1))
    { ETAT[21]=1;ETAT[22]=1;ETAT[23]=1;ETAT[14]=1;ETAT[2]=1; tr_double_moulin_ordi();}

}
void remplissage_machine()
{ srand(time(NULL));
  int f;
    do{f=rand()%24;}while((f>23)||(f<0)||(T[f]!=0));
T[f]=2;
double_moulin_ordi(f); // VERIFICATION DE L'APPLICABILITE DE CETTE CASE A LA CREATION D'UN DOUBLE MOULIN
 }
void traitement_deplacement_machine(int*a)
{ srand(time(NULL));
    *a=rand()%24;}
void deplacement_machine()
{ srand(time(NULL));
   int i,a,x;
do{ i=rand()%24;
    x=verification_blocage(i);   //Verification si le pion peut se dÈplacer ou non
    }while ((i>23)||(T[i]!=2)||(x==0)||(i<0));
 ETAT[i]=0;
T[i]=0;   //l'emplacement actuel est vidÈ
if (i==0){do {traitement_deplacement_machine(&a); } while (((a!=9)&&(a!=1))||(a>23)||(T[a]!=0)||(a<0));}
else if (i==3){do {traitement_deplacement_machine(&a); } while (((a!=4)&&(a!=10))||(a>23)||(T[a]!=0)||(a<0));}
else if (i==6){do {traitement_deplacement_machine(&a); } while (((a!=7)&&(a!=11))||(a>23)||(T[a]!=0)||(a<0));}
else if  (i==2){do {traitement_deplacement_machine(&a); } while (((a!=1)&&(a!=14))||(a>23)||(T[a]!=0)||(a<0));}
else if  (i==5){do {traitement_deplacement_machine(&a); } while (((a!=4)&&(a!=13))||(a>23)||(T[a]!=0)||(a<0));}
else if  (i==8){do {traitement_deplacement_machine(&a); } while (((a!=7)&&(a!=12))||(a>23)||(T[a]!=0)||(a<0));}
else if  (i==21){do {traitement_deplacement_machine(&a); } while (((a!=9)&&(a!=22))||(a>23)||(T[a]!=0)||(a<0));}
else if  (i==18){do {traitement_deplacement_machine(&a); } while (((a!=10)&&(a!=19))||(a>23)||(T[a]!=0)||(a<0));}
else if (i==15){do {traitement_deplacement_machine(&a); } while (((a!=11)&&(a!=16))||(a>23)||(T[a]!=0)||(a<0));}
else if  (i==23){do {traitement_deplacement_machine(&a); } while (((a!=14)&&(a!=22))||(a>23)||(T[a]!=0)||(a<0));}
else if  (i==20){do {traitement_deplacement_machine(&a); } while (((a!=19)&&(a!=13))||(a>23)||(T[a]!=0)||(a<0));}
else if (i==17){do {traitement_deplacement_machine(&a); } while (((a!=12)&&(a!=16))||(a>23)||(T[a]!=0)||(a<0));}
else if  (i==1){do {traitement_deplacement_machine(&a); } while (((a!=0)&&(a!=2)&&(a!=4))||(a>23)||(T[a]!=0)||(a<0));}
else if  (i==7){do {traitement_deplacement_machine(&a); } while (((a!=6)&&(a!=8)&&(a!=4))||(a>23)||(T[a]!=0)||(a<0));}
else if (i==9){do {traitement_deplacement_machine(&a); } while (((a!=0)&&(a!=21)&&(a!=10))||(a>23)||(T[a]!=0)||(a<0));}
else if (i==11){do {traitement_deplacement_machine(&a); } while (((a!=6)&&(a!=15)&&(a!=10))||(a>23)||(T[a]!=0)||(a<0));}
else if  (i==12){do {traitement_deplacement_machine(&a); } while (((a!=8)&&(a!=17)&&(a!=13))||(a>23)||(T[a]!=0)||(a<0));}
else if  (i==14){do {traitement_deplacement_machine(&a); } while (((a!=2)&&(a!=23)&&(a!=13))||(a>23)||(T[a]!=0)||(a<0));}
else if  (i==22){do {traitement_deplacement_machine(&a); } while (((a!=21)&&(a!=23)&&(a!=19))||(a>23)||(T[a]!=0)||(a<0));}
else if (i==16){do {traitement_deplacement_machine(&a); } while (((a!=15)&&(a!=17)&&(a!=19))||(a>23)||(T[a]!=0)||(a<0));}
else if  (i==4){do {traitement_deplacement_machine(&a); } while (((a!=3)&&(a!=5)&&(a!=1)&&(a!=7))||(a>23)||(T[a]!=0)||(a<0));}
else if  (i==10){do {traitement_deplacement_machine(&a); } while (((a!=3)&&(a!=18)&&(a!=11)&&(a!=9))||(a>23)||(T[a]!=0)||(a<0));}
else if  (i==13){do {traitement_deplacement_machine(&a); } while (((a!=5)&&(a!=20)&&(a!=12)&&(a!=14))||(a>23)||(T[a]!=0)||(a<0));}
else {do {traitement_deplacement_machine(&a); } while (((a!=18)&&(a!=20)&&(a!=16)&&(a!=22))||(a>23)||(T[a]!=0)||(a<0));}
T[a]=2;double_moulin(2,a);}
 //le nouveau emplacement est remplie

void VOLE_MACHINE()
{ srand(time(NULL));
int i,a;
do{i=rand()%24;}while ((i>23)||(T[i]!=2)||(i<0));
if (ETAT[i]==1) ETAT[i]=0;
T[i]=0;   //l'emplacement actuel est vidÈ
grille();
do {traitement_deplacement_machine(&a); } while((a>23)||(T[a]!=0)||(a<0));
T[a]=2;
}
void lost()
{  system("PAUSE");
system("cls"); co(1);printf("\tUNFORTUNATELY :\n\a");
    color(4,0);
printf("  \t\t\t\t\t\tYY      YY OOOOOOOOOO  UU     UU\n");color(11,0);
printf("  \t\t\t\t\t\t YY   YY   OO      OO  UU     UU\n");color(2,0);
printf("  \t\t\t\t\t\t  YY YY    OO      OO  UU     UU\n");color(3,0);
printf("  \t\t\t\t\t\t   YYY     OO      OO  UU     UU\n");color(5,0);
printf("  \t\t\t\t\t\t   YY      OO      OO  UU     UU\n");color(6,0);
printf("  \t\t\t\t\t\t   YY      OO      OO  UU     UU\n");color(7,0);
printf("  \t\t\t\t\t\t   YY      OOOOOOOOOO  UUUUUUUUU\n");

printf("\n\n");
printf("  \t\t\t\t\t\tLL         OOOOOOOOOO  SSSSSSS   TTTTTTTTTTTTT\n");color(11,0);
printf("  \t\t\t\t\t\tLL         OO      OO  S              TTT\n");color(2,0);
printf("  \t\t\t\t\t\tLL         OO      OO  S              TTT\n"); color(3,0);
printf("  \t\t\t\t\t\tLL         OO      OO  SSSSSSS        TTT \n");color(5,0);
printf("  \t\t\t\t\t\tLL         OO      OO        S        TTT \n");color(6,0);
printf("  \t\t\t\t\t\tLL         OO      OO        S        TTT \n");color(7,0);
printf("  \t\t\t\t\t\tLLLLLLLL   OOOOOOOOOO  SSSSSSS        TTT \n");color(4,0);
printf("\n\n");printf("\a");
}
int test_fin_M()
 {
     if((score(1)<=2)||(blocage(1)==0))
        {lost();
         Gagnat=2;
         RANKING1();
         return 1;}

     else if((score(2)<=2)||(blocage(2)==0))
        {congratus(1);
         Gagnat=1;
         RANKING1();
         return 1;}

     else return 0;
 }
void HvsM()
{ int LAS;
for(int b=0;b<24;b++)  {T[b]=0 ;ETAT[b]=0; }
grille();
getchar();
system("cls");
srand(time(NULL));
 LAS=1+rand()%2;
 printf("%d\n",LAS);
 //PHASE REMPLISSAGE
for(int i=0;i<9;i++)
 {
if (LAS ==1) {remplissage_joueur(1);
             TRAITEMENT(1);
             remplissage_machine();
             TRAITMENT_ORDINATEUR();
             grille();
             }
if(LAS==2){  remplissage_machine();
             TRAITMENT_ORDINATEUR();
             remplissage_joueur(1);
             TRAITEMENT(1);//LE JOUEUR EST POUR NUMERO 1
             grille();}


getchar();
system("cls");
 }
grille();
 //PHASE DEPLACEMENT

while((test_fin_M()==0)&&( test_fin(1,2)==0))
{
    if (LAS==1)
     {if (score(1)>3)deplacement(1);
     else VOLE(1);
     TRAITEMENT(1);
     grille();
	if(score(2)>3) deplacement_machine();
	else VOLE_MACHINE();
     TRAITMENT_ORDINATEUR();
     grille();
	}
	else
    {	if(score(2)>3) deplacement_machine();
	    else VOLE_MACHINE();
     TRAITMENT_ORDINATEUR();
     grille();
     if(score(1)>3) deplacement(1);
     else VOLE(1);
     TRAITEMENT(1);
     grille();
	}
}
}
//3EME PARTIE AI NIVEAU MOYENN
int verify(int a,int b,int c,int nbr) // RECHERCHE DE POSSIBILTE DE CONSTITUTION DUN MOULIN OU BLOCAGE DUN MOULIN DE L'AUTRE
{
    if((T[a]==nbr)&&(T[b]==nbr)&&(T[c]==0)) return(c);
    else return(24);
}
int  AI(int nbr)
{ //LA CASE EN QUESTION
    if((verify(0,1,2,nbr)!=24)||(verify(23,14,2,nbr)!=24)) return(2);
    else if((verify(0,2,1,nbr)!=24)||(verify(7,4,1,nbr)!=24))return(1) ;
    else if ((verify(1,2,0,nbr)!=24)||(verify(21,9,0,nbr)!=24))return(0);
    else if ((verify(4,5,3,nbr)!=24)||(verify(18,10,3,nbr)!=24))return(3);
    else if ((verify(3,5,4,nbr)!=24)||(verify(7,1,4,nbr)!=24))return(4);
    else if ((verify(3,4,5,nbr)!=24)||(verify(20,13,5,nbr)!=24))return(5);
    else if ((verify(7,8,6,nbr)!=24)||(verify(11,15,6,nbr)!=24))return(6);
    else if ((verify(6,8,7,nbr)!=24)||(verify(4,1,7,nbr)!=24))return(7);
    else if((verify(6,7,8,nbr)!=24)||(verify(17,12,8,nbr)!=24))return(8);
    else if ((verify(10,11,9,nbr)!=24)||(verify(0,21,9,nbr)!=24))return(9);
    else if ((verify(9,11,10,nbr)!=24)||(verify(3,18,10,nbr)!=24))return(10);
    else if ((verify(9,10,11,nbr)!=24)||(verify(6,15,11,nbr)!=24))return(11);
    else if ((verify(13,14,12,nbr)!=24)||(verify(8,17,12,nbr)!=24))return(12);
    else if ((verify(12,14,13,nbr)!=24)||(verify(5,20,13,nbr)!=24))return(13);
    else if ((verify(13,12,14,nbr)!=24)||(verify(2,23,14,nbr)!=24))return(14);
    else if ((verify(16,17,15,nbr)!=24)||(verify(6,11,15,nbr)!=24))return(15);
    else if ((verify(15,17,16,nbr)!=24)||(verify(22,19,16,nbr)!=24))return(16);
    else if ((verify(16,15,17,nbr)!=24)||(verify(8,12,17,nbr)!=24))return(17);
    else if ((verify(19,18,20,nbr)!=24)||(verify(5,13,20,nbr)!=24))return(20);
    else if ((verify(18,20,19,nbr)!=24)||(verify(16,22,19,nbr)!=24))return(19);
    else if ((verify(20,19,18,nbr)!=24)||(verify(3,10,18,nbr)!=24))return(18) ;
    else if ((verify(21,22,23,nbr)!=24)||(verify(2,14,23,nbr)!=24))return(23);
    else if ((verify(21,23,22,nbr)!=24)||(verify(16,19,22,nbr)!=24))return(22);
    else if ((verify(23,22,21,nbr)!=24)||(verify(0,9,21,nbr)!=24))return(21);
    else return(24);
}
void remplissage_machine_AI()
{
  int f;
  // CONSTURCTION D'UN MOULIN
   if(AI(2)!=24) f=AI(2);
   // BLOCAGE D'UN MOULIN DU JOUEUR
   else if (AI(1)!=24) f=AI(1);
   //POINTS STRATEGIQUES A 4 DEPLACEMENTS
   else if(T[4]==0) f=4;
   else if (T[13]==0) f=13;
   else if (T[10]==0) f=10;
   else if (T[19]==0) f=19;
   //POINTS STRATEGIQUES A 3 DEPLACEMENTS
   else if (T[14]==0) f=14;
   else if (T[9]==0) f=9;
   else if (T[22]==0) f=22;
   else if (T[12]==0) f=12;
   else if (T[7]==0) f=7;
   else if (T[11]==0) f=11;
   else if (T[16]==0) f=16;
   else if (T[1]==0) f=1;
   //POINTS STRATEGIQUES A 2 DEPLACEMENTS
   else if (T[0]==0) f=0;
   else if (T[3]==0) f=3;
   else if (T[6]==0) f=6;
   else if (T[21]==0) f=21;
   else if (T[18]==0) f=18;
   else if (T[15]==0) f=15;
   else if (T[2]==0) f=2;
   else if (T[5]==0) f=5;
   else if(T[8]==0) f=8;
   else if (T[23]==0) f=23;
   else if (T[20]==0) f=20;
   else   f=17;
T[f]=2;
double_moulin_ordi(f);
 }
  int DEPLAC_AI(int a,int b,int av,int v)
{ //VERIFICATION DE POSSIBILITE DE DEPLACEMNT
    if((T[a]==2)&&(T[b]==2)&&(T[av]==2)&&(T[v]==0)) return 1;
    else return 0;
}
void TR_D_AI(int a,int b,int av,int v)
{   // TRAITEMENT DE DEPLACEMNT
     T[av]=0;
    grille();
   ETAT[av]=0;
    T[v]=2;double_moulin(2,v);}

void Deplacement_AI()
{ // LA FONCTION GLOBALE DE DEPLACEMENT
if(DEPLAC_AI(0,2,4,1)==1) TR_D_AI(0,2,4,1);
else if(DEPLAC_AI(3,5,7,4)==1) TR_D_AI(3,5,7,4);
else if(DEPLAC_AI(6,8,4,7)==1) TR_D_AI(6,8,4,7);
else if(DEPLAC_AI(3,5,1,4)==1) TR_D_AI(3,5,1,4);
else if(DEPLAC_AI(21,23,19,22)==1) TR_D_AI(21,23,19,22);
else if(DEPLAC_AI(18,20,22,19)==1) TR_D_AI(18,20,22,19);
else if(DEPLAC_AI(18,20,16,19)==1) TR_D_AI(18,20,16,19);
else if(DEPLAC_AI(15,17,19,16)==1) TR_D_AI(15,17,19,16);
else if(DEPLAC_AI(21,0,10,9)==1) TR_D_AI(21,0,10,9);
else if(DEPLAC_AI(3,18,9,10)==1) TR_D_AI(3,18,9,10);
else if(DEPLAC_AI(3,18,11,10)==1) TR_D_AI(3,18,11,10);
else if(DEPLAC_AI(6,15,10,11)==1) TR_D_AI(6,15,10,11);
else if(DEPLAC_AI(5,20,12,13)==1) TR_D_AI(5,20,12,13);
else if(DEPLAC_AI(8,17,13,12)==1) TR_D_AI(8,17,13,12);
else if(DEPLAC_AI(2,23,13,14)==1) TR_D_AI(2,23,13,14);
else if(DEPLAC_AI(5,20,14,13)==1) TR_D_AI(5,20,14,13);
else deplacement_machine();
}
void HvsAI()
{ srand(time(NULL));
int LAS;
for(int b=0;b<24;b++)  {T[b]=0 ;ETAT[b]=0; }

srand(time(NULL));
 LAS=1+rand()%2;
 printf("%d\n",LAS);
 //PHASE REMPLISSAGE
for(int i=0;i<9;i++)
 {
if (LAS ==1) {remplissage_joueur(1);
              TRAITEMENT(1);
              remplissage_machine_AI();
              TRAITMENT_ORDINATEUR();
              grille();
            }
if(LAS==2){  remplissage_machine_AI();
             TRAITMENT_ORDINATEUR();
             remplissage_joueur(1);
             TRAITEMENT(1);
             grille();}


getchar();
system("cls");
 }
grille();
 //PHASE DEPLACEMENT
while((test_fin_M()==0)&&( test_fin(1,2)==0))
{
    if (LAS==1)
     {deplacement(1);
     TRAITEMENT(1);
     grille();
	 Deplacement_AI();
     TRAITMENT_ORDINATEUR();
     grille();
	}
	else
    {Deplacement_AI();
     TRAITMENT_ORDINATEUR();
     grille();
     deplacement(1);
     TRAITEMENT(1);
     grille();
	}
}}
