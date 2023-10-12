
#include<stdio.h>
#include<stdlib.h>

// Discriminant calculator

int main() 
{
    //axx + bx + c coefficients ;   D is discriminant
    int a, b, c, D;
    scanf("%i %i %i", &a, &b, &c);

    D = (b*b) - 4*(a*c);
    if (D>999 || D<-999)
    {
        printf("Diskriminant mimo povoleny interval!\n");
    }
    else
    {
        printf("+-----+-----+-----+-----+\n");
        printf("| %3i | %3i | %3i |%4i |\n", a, b, c, D);
        printf("+-----+-----+-----+-----+\n");
        if ((b*b) > (4*(a*c)))
        {
            printf("|     Dva realne koreny |\n");
            printf("+-----------------------+\n");
        }
        else if ((b*b) == (4*(a*c)))
        {
            printf("|           Jeden koren |\n");
            printf("+-----------------------+\n");
        }
        else
        {
            printf("| Dva imaginarni koreny |\n");
            printf("+-----------------------+\n");
        }
    }
}