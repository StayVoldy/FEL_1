
#include<stdio.h>
#include<stdlib.h>


int main() 
{
    int a, b, add, sub, prod, div;
    double avg;

    scanf("%i %i", &a, &b);
    
    if (a>-10001 && a<10001 && b>-10001 && b<10001)
    {
        add = a + b;
        sub = a - b;
        prod = a * b;
        if (b!=0) {div = a / b;}
        avg = (double) (a + b) / 2;

        printf("Desitkova soustava: %i %i\n", a, b);
        printf("Sestnactkova soustava: %x %x\n", a, b);
        printf("Soucet: %i + %i = %i\n", a, b, add);
        printf("Rozdil: %i - %i = %i\n", a, b, sub);
        printf("Soucin: %i * %i = %i\n", a, b, prod);
        if (b!=0)
        {
            printf("Podil: %i / %i = %i\n", a, b, div);
        }
        else
        {
            printf("Nedefinovany vysledek!\n");
        }
        
        printf("Prumer: %0.1f\n", avg);
    } 
    else
    {
        printf("Vstup je mimo interval!\n");
    }
    
    return 0;
}