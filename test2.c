/*
  test structure machine 2 : relations d'au convention 
  Equipe :
            IMAD EDDINE MEDJDENE 
            Refas Sid ahmed iyad
*/
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	   char number[20], result[100];
    int base1, base2, left, i, j, dec=0;
    //lire le nombre et sa base.
    printf("Enter the number:");
    scanf("%s",&number);
    printf("entre the base of that number:");
    scanf("%d",&base1);
    
    int a = strlen(number)-1 ;
    //Convertir le nombre dans base1 au décimal.
    for(i=a;i>=0;i--)
    {
    //Vérifiez si l'entrée est un chiffre ou une lettre.
       if(number[i]>='0'&&number[i]<='9')
       {dec = dec + (number[i]-48)*pow(base1,a-i);}
       if(number[i]>='A'&&number[i]<='Z')
       {dec = dec + (number[i]-55)*pow(base1,a-i);}
       if(number[i]>='a'&&number[i]<='z')
       {dec = dec + (number[i]-87)*pow(base1,a-i);}
    }
    //écrire le nombre au décimal.
    printf("number in Decimal : %d\n", dec);
    //lire le base.
    printf("Enter the base to be converted:");
    scanf("%d",&base2);

    //convertir le nombre dans décimal au base2
    for(j=0;dec>0;j++)
    {   left=dec%base2;
        if(left>=0&&left<=9){
        result[j]='0' + left;}
        if(left>9&&left<=36){
        result[j]='A' - 10 + left;}
        dec=dec/base2;
    }
    //écrire le résultat
    for(j=j; j>=0; j--)
    {printf("%c",result[j]);}
    //fin de program.
    return 0;
}
//made by IMAD EDDINE MEDJDENE 