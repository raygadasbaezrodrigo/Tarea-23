#include<stdio.h>
#include<string.h>
#include"alumno.h"

int main ()
{
	ALUMNO var1;
	
	var1=nuevoAlumno();
	
	printf("Edad: %d\nNombre: %s",var1.edad,var1.nombre);
	return 0;
}
