#include <stdio.h>

int main(int argc, char const *arg[])
{
    int Datos[5] = {0, 0, 0, 0, 0};
    

    for(int i = 0; i<15; i++)
    {
        Datos[0]++;
        Datos[1]+=2;
        Datos[2]+=3;
        Datos[3]+=4;
        Datos[4]+=5;


    }
        for(int i = 0; i < 5; i++)
        {
        printf("%d\n", Datos[i]);
        }
    return 0;
}