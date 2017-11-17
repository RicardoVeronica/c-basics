/**
 * 
 * Author: setcain
 * In and Out in C
 * 
 */

#include <stdio.h>
#define PI 3.14159264

int main(int argc, char *argv[])
{
    int user;

    printf("Que numero quieres sumar a PI: "); 
    scanf("%i", &user);

    float result = user + PI;

    printf("El resultado es: %.2f\n", result);

    return 0;
}
