#include <stdio.h>

int main(int argc, char *argv[])
{
    char name[15], last_name[15];

    printf("Cual es tu nombre y primer apellido? ");
    scanf("%s%s", &name, &last_name);

    printf("hola %s %s\n", name, last_name);

    return 0;
}
