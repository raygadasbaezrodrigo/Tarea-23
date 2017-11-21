#include<stdio.h>
#include<string.h>
struct alumnos
{
	int edad;
	char nombre[60];
	char genero;
	char carrera;
	char nCuenta[10];
};

int main ()
{
	struct alumnos var1;
	
	printf ("Introduce la edad: \n");
	scanf("%d",&var1.edad);
	
	printf("Introduce el nombre: ");
	fflush (stdin);
	gets(var1.nombre);
	
	printf("Edad: %d\nNombre: %s", var1.edad,var1.nombre);
	
	return 0;
}
