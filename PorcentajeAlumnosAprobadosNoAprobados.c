#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	/*Esta constante se usa para calcular el porcentaje*/
	const int CIEN_POR_CIENTO = 100;
	
	/*Esta variable guarda el numero de alumnos en el grupo*/
	float numeroDeAlumnos;
	
	/*Esta variable calcula el porcentaje de alumnos aprobados*/
	float numeroAlumnosAprobados;
	
	/*Esta variable calcula el numero de alumnos no aprobados*/
	float numeroAlumnosNoAprobados;
	
	printf("Bienvenido profesor.\n");
	printf("¿Cuantos alumnos tiene su grupo?\n");
	scanf("%i", &numeroDeAlumnos);
	printf("¿Cuantos alumnos aprobaron?");
	scanf("%i", &numeroAlumnosAprobados);
	printf("¿Cuantos alumnos no aprobaron?");
	scanf("%i", &numeroAlumnosNoAprobados);
	
	printf("El porcentaje de alumnos aprobados es: %f %. \n", numeroAlumnosAprobados*CIEN_POR_CIENTO/numeroDeAlumnos);
	printf("El porcentaje de alumnos no aprobados es: %f %", numeroAlumnosNoAprobados*CIEN_POR_CIENTO/numeroDeAlumnos);
	
	return 0;
}
