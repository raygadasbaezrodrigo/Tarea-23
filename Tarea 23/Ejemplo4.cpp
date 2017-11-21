#include<stdio.h>
#include<string.h>
#include"alumno.h"
#include"alumnoprintf.h"

int main ()
{
	ALUMNO var1;
	var1=nuevoAlumno();
	imprimeAlumno(var1);
	return 0;
}
