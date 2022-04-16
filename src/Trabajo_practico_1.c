
#include <stdio.h>
#include <stdlib.h>
#include "UTN_TomaDeDatos.h"
#include "UTN_Calculos.h"

int main(void) {
	setbuf(stdout, NULL);

	//Declaracion de variables

	int kilometros;
	float precioLatam;
	float precioAerolineas;
	float totalCreditoAerolineas;
	float totalCreditoLatam;
	float totalDebitoAerolineas;
	float totalDebitoLatam;
	float totalBitcoinLatam;
	float totalBitcoinAerolineas;
	float precioPorKilometroAerolineas;
	float precioPorKilometroLatam;
	float diferenciaDePrecioIngresado;
	int opcion;
	int salir;
	int validacionRetorno;
	int validacionRetornoAerolineas;
	int validacionRetornoLatam;
	int validacionRetornoKilometros;

	salir = 0;
	kilometros = 0;

	do{
		printf("\n1. Ingresar kilometros: %dkm\n", kilometros);
		printf("\n2. Ingresar precio de vuelos: ");
		printf("\n- Precio vuelo Aerolineas: $%.2f", precioAerolineas);
		printf("\n- Precio vuelo Latam: $%.2f\n", precioLatam);
		printf("\n3. Calcular todos los costos: \n");
		printf("\n4. Informar resultados \n");
		printf("\n5. Carga forzada de datos.\n");
		printf("\n6. Salir.\n");

		validacionRetorno = getInt(&opcion, "\nIngrese la opcion que quiera: ", "La opcion es incorrecta:\n", 6, 1, 1);
		if(validacionRetorno == 0){
			switch(opcion){
				case 1:
					validacionRetornoKilometros = getInt(&kilometros, "\nIngrese kilometros del vuelo: ", "\nIngrese kilometraje valido...\n", 15000, 1, 5);
						if(validacionRetorno != 0){
							printf("\nLos kilometros no fueron bien ingresados\n");
							printf("\nPresione '6' para salir del menu ");
							scanf("%d", &opcion);
								while(opcion != 6 && opcion != 1){
									printf("\nPresione '6' para salir del menu... ");
									scanf("%d", &opcion);
								}
						}
				break;
				case 2:
					validacionRetornoAerolineas = getFloat(&precioAerolineas, "\nIngrese el precio en Aerolineas: ", "\nIngrese precio valido...\n", 1, 5);
						if(validacionRetornoAerolineas != 0){
							printf("\nEl precio no fue bien ingresado\n");
							printf("\nPresione '6' para salir del menu y reingrese el precio ");
							scanf("%d", &opcion);
								while(opcion != 6 && opcion != 2){
									printf("\nPresione '6' para salir del menu y reingrese el precio... ");
									scanf("%d", &opcion);
								}
						}
					if(validacionRetornoAerolineas == 0){
						validacionRetornoLatam = getFloat(&precioLatam, "\nIngrese el precio en Latam: ", "\nIngrese precio valido\n", 1, 5);
							if(validacionRetornoLatam != 0){
								printf("\nEl precio no fue bien ingresado\n");
								printf("\nPresione '6' para salir del menu y reingrese los precios ");
								scanf("%d", &opcion);
									while(opcion != 6){
										printf("\nPresione '6' para salir del menu y reingrese los precios... ");
										scanf("%d", &opcion);
									}
							}
					}
						if(validacionRetornoLatam != 0){
							precioAerolineas = 0;
						}
				break;
				case 3:
					if(validacionRetornoLatam == 0 && validacionRetornoAerolineas == 0 && validacionRetornoKilometros == 0){
						totalDebitoAerolineas = descuento(precioAerolineas, 10);

						totalDebitoLatam = descuento(precioLatam, 10);

						totalCreditoAerolineas = aumento(precioAerolineas, 25);

						totalCreditoLatam = aumento(precioLatam, 25);

						totalBitcoinAerolineas = bitcoin(precioAerolineas);

						totalBitcoinLatam = bitcoin(precioLatam);

						precioPorKilometroAerolineas = precioPorUnidad(kilometros, precioAerolineas);

						precioPorKilometroLatam = precioPorUnidad(kilometros, precioLatam);

						diferenciaDePrecioIngresado = diferenciaDePrecio(precioAerolineas, precioLatam);

						printf("\nLos datos ya fueron calculados, presione '4' para continuar \n");
					}
					else{
						printf("\nHubo un mal ingreso en los precios de los vuelos o en los kilometros, por favor reingreselos\n");
					}

				break;
				case 4:
					if(validacionRetornoLatam == 0 && validacionRetornoAerolineas == 0 && validacionRetornoKilometros == 0){
						printf("\nKMs Ingresados: %dkm\n",kilometros);
						printf("\nPrecio Latam: %.2f", precioLatam);
						printf("\na) Precio con tarjeta de debito: %.2f", totalDebitoLatam);
						printf("\nb) Precio con tarjeta de credito: %.2f", totalCreditoLatam);
						printf("\nc) Precio pagando con Bitcoin: %f", totalBitcoinLatam);
						printf("\nd) Precio unitario: %.2f\n", precioPorKilometroLatam);
						printf("\nPrecio Aerolineas: %.2f", precioAerolineas);
						printf("\na) Precio con tarjeta de debito: %.2f", totalDebitoAerolineas);
						printf("\nb) Precio con tarjeta de credito: %.2f", totalCreditoAerolineas);
						printf("\nc) Precio pagando con Bitcoin: %f", totalBitcoinAerolineas);
						printf("\nd) Precio unitario: %.2f\n", precioPorKilometroAerolineas);
						printf("\nLa diferencia de precio es: %.2f", diferenciaDePrecioIngresado);

						salir = 1;
					}
					else{
						printf("No se ingresaron bien los datos de los kilometros o de los precios, ingreselos correctamente.\n");
					}

				break;
				case 5:

					precioLatam = 159339;

					precioAerolineas = 162965;

					kilometros = 7090;

					totalDebitoAerolineas = descuento(162965, 10);

					totalDebitoLatam = descuento(159339, 10);

					totalCreditoAerolineas = aumento(162965, 25);

					totalCreditoLatam = aumento(159339, 25);

					totalBitcoinAerolineas = bitcoin(162965);

					totalBitcoinLatam = bitcoin(159339);

					precioPorKilometroAerolineas = precioPorUnidad(7090, 162965);

					precioPorKilometroLatam = precioPorUnidad(7090, 159339);

					diferenciaDePrecioIngresado = diferenciaDePrecio(162965, 159339);

					printf("\nKMs Ingresados: %dkm\n",kilometros);
					printf("\nPrecio Latam: %.2f", precioLatam);
					printf("\na) Precio con tarjeta de debito: %.2f", totalDebitoLatam);
					printf("\nb) Precio con tarjeta de credito: %.2f", totalCreditoLatam);
					printf("\nc) Precio pagando con Bitcoin: %f", totalBitcoinLatam);
					printf("\nd) Precio unitario: %.2f\n", precioPorKilometroLatam);
					printf("\nPrecio Aerolineas: %.2f", precioAerolineas);
					printf("\na) Precio con tarjeta de debito: %.2f", totalDebitoAerolineas);
					printf("\nb) Precio con tarjeta de credito: %.2f", totalCreditoAerolineas);
					printf("\nc) Precio pagando con Bitcoin: %f", totalBitcoinAerolineas);
					printf("\nd) Precio unitario: %.2f\n", precioPorKilometroAerolineas);
					printf("\nLa diferencia de precio es: %.2f", diferenciaDePrecioIngresado);

					salir = 1;

				break;
				case 6:
					salir = 1;
				break;
			}
		}
	}while(salir == 0);

	return 0;
}
