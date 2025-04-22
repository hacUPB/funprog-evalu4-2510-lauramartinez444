#include <stdio.h>

int main(int argc, char const *arg[])
{

    int Datos[5] = {45, 32, 89, 11, 9};
    printf("%d\n", Datos[2]);
    //indice 2 corresponde al 89

    for (int i = 0; i < 5; i++)
    {
        printf("%d - %p\n", Datos[i], &Datos[i]);

    }
    return 0;
}