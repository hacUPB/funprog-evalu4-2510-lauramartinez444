#include <stdio.h>
#include <time.h>
#include <stdlib.h>
 
int main(void)

    
{
    int mayor, menor;
    srand(time(NULL));
    int temp[24];
    float media = 0;
    int hora;
 
    for (hora = 0; hora < 24; hora ++)
    {
        temp[hora] = (rand() % ((35-14) + 1)) + 14;
        media += temp[hora];
    }
    media = media / 24;
    mayor = temp[0];
    menor = temp[0];
    for (int i=0; i < 24; i ++)
    {
        if(temp[i] > mayor){
            mayor = temp[i];
        }
    }
    for (int i=0; i < 24; i ++)
    {
        if(temp[i] < menor){
            menor = temp[i];
        }
    }
    printf("\n la temperatura media es %f\n", media);
    print("mayor= %d", media);
    return 0;
}
 