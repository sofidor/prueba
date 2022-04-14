/*
 * calcular.c
 *
 *  Created on: 12 abr. 2022
 *      Author: sofia
 */

#include <stdio.h>
#include <stdlib.h>


void calcularDebito(float precioLatam , float precioAerolineas ,float* precioConDescLatam ,float* precioConDescAerolineas ){

	int descuento = 10;

	*precioConDescLatam = precioLatam - (precioLatam * descuento /100);
	*precioConDescAerolineas = precioAerolineas - (precioAerolineas * descuento /100);

}

void calcularCredito(float precioLatam , float precioAerolineas ,float* precioConInteresLatam ,float* precioConInteresAerolineas ){

	int interes = 25;

	*precioConInteresLatam = precioLatam + (precioLatam * interes /100);
	*precioConInteresAerolineas = precioAerolineas + (precioAerolineas * interes /100);

}

void calcularBitcoin(float precioLatam , float precioAerolineas , float* precioBitcoinLatam , float* precioBitcoinAero){

	float bitcoin = 4606954.55;

	*precioBitcoinLatam = precioLatam / bitcoin;
	*precioBitcoinAero = precioAerolineas / bitcoin;

}

void calcularPrecioUnitario(float precioLatam , float precioAerolineas , float km , float* precioUnitarioLatam , float* precioUnitarioAero){

	*precioUnitarioLatam = precioLatam / km;
	*precioUnitarioAero	= precioAerolineas / km;
}

void calcularDiferencia(float precioLatam , float precioAerolineas , float* diferenciaIngresada){

	if( precioLatam > precioAerolineas){

		*diferenciaIngresada = precioLatam - precioAerolineas;
	}
	else{

		*diferenciaIngresada = precioAerolineas - precioLatam ;

	}
}

void mostrarRespuestas(float precioConDescLatam , float precioConDescAerolineas , float precioConInteresLatam , float precioConInteresAerolineas , float precioBitcoinLatam , float precioBitcoinAero , float precioUnitarioLatam , float precioUnitarioAero , float diferenciaIngresada){
	printf("\n Precio Latam:\n a) Precio con tarjeta de debito: $  %.2f "
			 "\n b) Precio con trajeta de credito: $ %.2f "
			 "\n c) Precio pagando con bitcoin: %f BTC "
			 "\n d) Mostrar precio unitario: %.2f \n" ,precioConDescLatam , precioConInteresLatam , precioBitcoinLatam , precioUnitarioLatam);

	 printf("\n Precio Aerolineas:\n a) Precio con tarjeta de debito: $ %.2f"
			 " \n b) Precio con trajeta de credito: $ %.2f "
			 "\n c) Precio pagando con bitcoin: %f BTC "
			 "\n d) Mostrar precio unitario: %.2f \n" ,precioConDescAerolineas , precioConInteresAerolineas , precioBitcoinAero , precioUnitarioAero);

	 printf("\n La diferencia de precio es: %.2f \n\n" , diferenciaIngresada );
}





