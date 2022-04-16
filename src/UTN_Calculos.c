/*
 * UTN_Calculos.c
 *
 *  Created on: 14 abr. 2022
 *      Author: lucas
 */

#include <stdio.h>
#include <stdlib.h>

/// @brief esta funcion recibe un flotante y le aplica un descuento a eleccion.
///
/// @param flotanteADescontar es la variable que se desea descontar.
/// @param descuento es el descuento a realizar.
/// @return retorna el total con descuento incluido.
float descuento(float flotanteADescontar, float descuento){
	float totalConDescuento;
	float descuentoTotal;

	descuentoTotal = (descuento * flotanteADescontar) / 100;
	totalConDescuento = flotanteADescontar - descuentoTotal;

	return totalConDescuento;
}

/// @brief  esta funcion recibe un flotante y le aplica un aumento.
///
/// @param flotanteAumentar es la variable que se desea aumentar.
/// @param aumento es el aumento a realizar.
/// @return retorna el total con aumento incluido.
float aumento(float flotanteAumentar, float aumento){
	float totalConAumento;

	aumento = aumento + 100;

	totalConAumento = (aumento * flotanteAumentar) / 100;

	return totalConAumento;
}

/// @brief esta funcion se utiliza para transformar un monto en bitcoin.
///
/// @param plata es la variable que se ingresa para transformala en bitcoin.
/// @return retorna la transformacion en bitcoin.
float bitcoin(float plata){
	float totalBitcoin;

	totalBitcoin = (float)plata / 4606954.55;

	return totalBitcoin;
}

/// @brief esta funcion realiza una division.
///
/// @param divisor es el numero que divide.
/// @param dividendo es el numero a dividir.
/// @return retorna el total de la division.
float division(int divisor, float dividendo){
	float totalUnitario;

	totalUnitario = dividendo / divisor;

	return totalUnitario;
}

/// @brief esta funcion calcula la diferencia entre dos flotantes
///
/// @param precioUno es una de las variables que el usuario ingresa para realizar la diferencia.
/// @param precioDos es la otra variable para realizar la diferencia.
/// @return retorna el total de esa diferencia.
float diferenciaDePrecio(float precioUno, float precioDos){
	float totalDiferencia;

	if(precioUno > precioDos || precioUno == precioDos){
		totalDiferencia = precioUno - precioDos;
	}
	else{
		totalDiferencia = precioDos - precioUno;
	}

	return totalDiferencia;
}
