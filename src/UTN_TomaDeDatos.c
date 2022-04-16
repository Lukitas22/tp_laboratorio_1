/*
 * UTN_TomaDeDatos.c
 *
 *  Created on: 14 abr. 2022
 *      Author: lucas
 */

#include <stdio.h>

int getInt(int * pEnteroIngresado, char * mensaje, char * mensajeError, int maximo, int minimo, int maximoDeReintentos){

	int auxEntero;
	int retorno;
	retorno = -1;

	if(pEnteroIngresado != NULL && maximo >= minimo && maximoDeReintentos >= 0){
		do{
			printf("%s", mensaje);
			scanf("%d", &auxEntero);
			maximoDeReintentos --;

			if(auxEntero >= minimo && auxEntero <= maximo){
					*pEnteroIngresado = auxEntero;
					retorno = 0;
					break;
			}
			else{
				printf("%s", mensajeError);
			}

		}while(maximoDeReintentos > 0);
	}

	return retorno;
}

float getFloat(float * pFlotanteIngresado, char * mensaje, char * mensajeError, int minimo, int maximoDeReintentos){

	float auxFlotante;
	int retorno;
	retorno = -1;

	if(pFlotanteIngresado != NULL && minimo > 0  && maximoDeReintentos >= 0){
		do{
			printf("%s", mensaje);
			scanf("%f", &auxFlotante);
			maximoDeReintentos --;

			if(auxFlotante >= minimo){
					*pFlotanteIngresado = auxFlotante;
					retorno = 0;
					break;
			}
			else{
				printf("%s", mensajeError);
			}

		}while(maximoDeReintentos > 0);
	}

	return retorno;
}
