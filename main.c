#include <stdio.h> //add library "stdio.h"

main ()   //main class
{
    int num = 0;   //int say integer variable.num is variable name.= 0 is good practice

    printf ("Insira um numero: ");   //print("") allow write txt
    scanf ("%i", &num);
    /*scan("") receive chose number.
    ("%i" indicate int-type variable'll appear, in printf, indicate chose number'll be int
    , &num) indicate chose number is atribued to num*/

    printf ("\nO numero escolhido foi: %i", num);
    //("\n is line break. ". num) say %i is num 
}

/*extra notes!
variables can be:
float(decimal, limited);
double(decimal, infinite);
char(character);
boolean(true or false)

f = formation
