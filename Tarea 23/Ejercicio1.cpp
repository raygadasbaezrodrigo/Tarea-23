#include<stdio.h>
#include<string.h>
#include"alumno.h"
#include"alumnoprintf.h"
#define MAX 3
int main ()
{
	ALUMNO lista[MAX];
	int j=0;
	for (j=0;j<MAX;j++)
	{
	printf("Datos alumno %d\n",j+1);
	lista[j]=nuevoAlumno();
}
	for (j=0;j<MAX;j++)
	{
		imprimeAlumno(lista[j]);
	}
return 0;
}
