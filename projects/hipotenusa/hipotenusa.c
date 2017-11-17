#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{
    float catetoA, catetoB, hipotenusa;

    printf("Dame el cateto a: ");
    scanf("%f", &catetoA);
    printf("Dame el cateto b: ");
    scanf("%f", &catetoB);

    hipotenusa = sqrt(pow(catetoA, 2) + pow(catetoB, 2));

    printf("La hipotenusa es: %.2f\n", hipotenusa);

    return 0;
}
