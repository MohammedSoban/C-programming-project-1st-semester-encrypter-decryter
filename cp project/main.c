#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
char rotor1(char);
char rotor11(char);
int main()

{
 printf("****************************************WELCOME TO SENSATION ENCODER****************************************************\n");
char a;

printf("1=ENCRYPTER:\n");
printf("2=DECRYPTER:\n");
scanf("%c",&a);
getchar();

switch (a)
    {
        case '1':
            {
                /*rotor 1 ENCRYPTER*/
                char str[200],str1[200];
                int i;
                printf("ENTER THE MESSAGE YOU WANT TO ENCRYPT BY ONLY USING UPPER CASE LETTER:\n");
                gets(str);
                for(i=0;i<strlen(str);i++)
                {
                    if(str[i]==' ')
                    str1[i]=str[i];
                    else
                    str1[i]=rotor1(str[i]);
                }
                str1[i]=0;
                printf("YOUR ENCRYPTED MESSAGE IS:\n");
                printf("%s\n",str1);


            }
            break;
            case '2':
            {
                    /*rotor 1 DECRYPTER*/
                   int i;
                   char str2[200],str3[200];

                  printf("ENTER THE MESSAGE YOU WANT TO DECRYPT BY ONLY USING UPPER CASE LETTER:\n");
                  gets(str2);

                 for(i=0;i<strlen(str2);i++)
                 {
                   if(str2[i]==(' '))
                   str3[i]=str2[i];
                   else
                   str3[i]=rotor11(str2[i]);
                 }
                   str3[i]=0;
                   printf("YOUR DECYPTED MESSAGE IS:\n");
                   printf("%s\n",str3);


            }



      }



    return 0;
}

char rotor1(char x)

{
    switch (x)
    {
    case 'A':
        return('E');
    break;
    case 'B':
        return('K');
    break;
    case 'C':
        return('M');
    break;
    case 'D':
        return('F');
    break;
    case 'E':
        return('L');
    break;
    case 'F':
        return('G');
    break;
    case 'G':
        return('D');
    break;
    case 'H':
        return ('Q');
    break;
    case 'I':
        return ('V');
    break;
     case 'J':
        return ('Z');
    break;
     case 'K':
        return ('N');
    break;
     case 'L':
        return ('T');
    break;
     case 'M':
        return ('O');
    break;
     case 'N':
        return ('W');
    break;
     case 'O':
        return ('Y');
    break;
     case 'P':
        return ('H');
    break;
     case 'Q':
        return ('X');
    break;
     case 'R':
        return ('U');
    break;
     case 'S':
        return ('S');
    break;
     case 'T':
        return ('P');
    break;
     case 'U':
        return ('A');
    break;
     case 'V':
        return ('I');
    break;
     case 'W':
        return ('B');
    break;
     case 'X':
        return ('R');
    break;
     case 'Y':
        return ('C');
    break;
     case 'Z':
        return ('J');
    break;
     case '0':
        return '9';
    break;
    case '1':
        return '8';
    break;
    case '2':
        return '7';
    break;
    case '3':
        return '6';
    break;
    case '4':
        return '5';
    break;
    case '5':
        return '5';
    break;
    case '6':
        return '4';
    break;
    case '7':
        return '3';
    break;
    case '8':
        return '2';
    break;
    case '9':
        return '1';
    break;
    default:
      printf("PLEASE USE UPPER CASE LETTERS ONLY:\n");
        break;
    }
}
char rotor11(char a)
{
      switch (a)
    {


    case 'E':
        return ('A');
    case 'K':
        return ('B');
    case 'M':
        return ('C');
    case 'F':
        return ('D');
    case 'L':
        return ('E');
    case 'G':
        return ('F');
    case 'D':
        return ('G');
    case 'Q':
        return ('H');
    case 'V':
        return ('I');
    case 'Z':
        return ('J');
    case 'N':
        return ('K');
    case 'T':
        return ('L');
    case 'O':
        return ('M');
    case 'W':
        return ('N');
    case 'Y':
        return ('O');
    case 'H':
        return ('P');
    case 'X':
        return ('Q');
    case 'U':
        return ('R');
    case 'S':
        return ('S');
    case 'P':
        return ('T');
    case 'A':
        return ('U');
    case 'I':
        return ('V');
    case 'B':
        return ('W');
    case 'R':
        return ('X');
    case 'C':
        return ('Y');
    case 'J':
        return ('Z');
    case '9':
        return ('0');
    case '8':
        return ('1');
    case '7':
        return ('2');
    case '6':
        return ('3');
    case '5':
        return ('5');
    case '4':
        return ('6');
    case '3':
        return ('7');
    case '2':
        return ('8');
    case '1':
        return ('9');
    case '0':
        return ('5');
    default:
      printf("PLEASE USE UPPER CASE LETTERS ONLY:\n");
        break;


    }
}





