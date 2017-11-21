struct alumnos
{
	int edad;
	char nombre[60];
	char genero[1];
	char carrera[25];
	char nCuenta[10];
};
typedef struct alumnos ALUMNO;

ALUMNO nuevoAlumno()
{
	ALUMNO tmp;
	printf("Introduce la edad:");
	scanf("%d",&tmp.edad);
	
	printf("Introduce el nombre: ");
	fflush(stdin);
	gets(tmp.nombre);
	
	printf("Introduce el genero: h/m");
	scanf("%c",&tmp.genero);
	
	printf("Introduce Carrera: ");
	fflush(stdin);
	gets(tmp.carrera);
	
	printf("Introduce Numero de Cuenta: ");
	fflush(stdin);
	gets(tmp.nCuenta);
	
	return tmp;
}
