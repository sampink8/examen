#include <stdio.h>
#include <stdlib.h>
#include <string.h>

	void imprimirMenu(){
	printf("\nSelecciona una opcion:\n");
	printf("1) Llenar matriz\n");
	printf("2) Mostrar registro\n");
}

int main(int argc, char const *argv[]){

	int limite = 5;
	int x;
	int y;
	char arreglo [limite][limite];
	int opc = -1;

	struct direccion {
	char calle [50];
	int numero;
	char ciudad [50];
	char pais [50];
	};

	struct empleado {
	char nombre [30];
	struct direccion domicilio;
	int numero;
	char departamento[25];
	int nivel [25];
	int sueldo [10000];
	};
	}

	while(opc!=0) {
imprimirMenu();

		scanf("%i", &opc);
		printf("\n");

switch(opc){

	case 1:
	for (int i = 0; i < limite; i++) {
	    for (int j = 0; j < limite; j++) {

		arreglo[i][j] = '+';
	}
	}

	for (int i = 0; i < limite; i++) {
	    for (int j = 0; j < limite; j++) {
	      printf("%c",arreglo [i][j]);
	}
	printf("\n");
	}

	printf("Ingresa coordenadas\n");
	scanf("%i" "%i", &x, &y);
	if (x < limite && y < limite && x>=0 && y>=0) {
	arreglo [x][y] = '&';
	}
	break;
	 case 2:
	 struct empleado trabajador;
	 strcpy(trabajador.nombre, "Pedro Vargas");
	 trabajador.numero=1012680;
	 strcpy(trabajador.departamento, "Logística");
	 trabajador.nivel [0] = 9;
	 trabajador.sueldo [0] = 20500;
	 strcpy(trabajador.domicilio.calle, "Herreros de San Felipe");
	 trabajador.domicilio.numero = 262;
	 strcpy(trabajador.domicilio.ciudad, "Morelia");
	 strcpy(trabajador.domicilio.pais, "Mexico");

	 printf("El trabajador %s tiene el numero %i, localizado en el departamento de %s.",
	 trabajador.nombre, trabajador.numero, trabajador.departamento);
	 printf("\nSu nivel en la empresa es el %d y su sueldo es de $%d mensuales.",
	 trabajador.nivel [0], trabajador.sueldo [0]);
	 printf("\nVive en %s #%d, en la ciudad de %s, %s.\n",
	 trabajador.domicilio.calle, trabajador.domicilio.numero,
	 trabajador.domicilio.ciudad, trabajador.domicilio.pais);
   break;
			default: printf("\nOpcion no valida");
}

	return 0;
}
