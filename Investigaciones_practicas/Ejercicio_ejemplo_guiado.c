#include <stdio.h>
#include <string.h>

int main(int argc, echar const *argv[]) 
{
		char nombre[20];
		printf("Ingrese tu nombre: ");
		fgets(nombre, sizeof(nombre), stdin);
		for(int i = 0, i < sizeof(nombre), i++)
		{
		printf("%c\n", nombre[i]);
 		}
}