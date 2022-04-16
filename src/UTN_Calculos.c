/*
 * UTN_Calculos.c
 *
 *  Created on: 14 abr. 2022
 *      Author: lucas
 */

#include <stdio.h>
#include <stdlib.h>

float descuento(float flotanteADescontar, float descuento){
	float totalConDescuento;
	float descuentoTotal;

	descuentoTotal = (descuento * flotanteADescontar) / 100;
	totalConDescuento = flotanteADescontar - descuentoTotal;

	return totalConDescuento;
}


float aumento(float flotanteAumentar, float aumento){
	float totalConAumento;

	aumento = aumento + 100;

	totalConAumento = (aumento * flotanteAumentar) / 100;

	return totalConAumento;
}

float bitcoin(float plata){
	float totalBitcoin;

	totalBitcoin = (float)plata / 4606954.55;

	return totalBitcoin;
}

float precioPorUnidad(int divisor, float dividendo){
	float totalUnitario;

	totalUnitario = dividendo / divisor;

	return totalUnitario;
}

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
