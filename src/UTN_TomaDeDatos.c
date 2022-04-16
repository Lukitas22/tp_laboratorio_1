/*
 * UTN_TomaDeDatos.c
 *
 *  Created on: 14 abr. 2022
 *      Author: lucas
 */

#include <stdio.h>

/// @brief Esta funcion toma un entero dentro de un rango de maximo y minimo y tiene un maximo de reintentos.
///
/// @param pEnteroIngresado es un puntero hacia la variable de ingreso de datos del usuario.
/// @param mensaje es un mensaje para pedir algo al usuario.
/// @param mensajeError es un mensaje de error en caso de que ingrese mal el dato.
/// @param maximo es el maximo que tendra el entero.
/// @param minimo es el minimo que tendra el entero.
/// @param maximoDeReintentos es el maximo de intentos que tendra el usuario de equivocarse.
/// @return retorna 0 si la funcion se realizo correctamente y retorna -1 en caso de que no se hayan ingresado bien los datos.
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

/// @brief Esta funcion toma un flotante, con un minimo y tiene un maximo de reintentos.
///
/// @param pFlotanteIngresado es un puntero hacia la variable de ingreso de datos del usuario.
/// @param mensaje es un mensaje para pedir algo al usuario.
/// @param mensajeError es un mensaje de error en caso de que ingrese mal el dato.
/// @param minimo es el minimo que tendra el flotante.
/// @param maximoDeReintentos es el maximo de intentos que tendra el usuario de equivocarse.
/// @return retorna 0 si la funcion se realizo correctamente y retorna -1 en caso de que no se hayan ingresado bien los datos.
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
