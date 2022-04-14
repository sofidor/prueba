/*
 * calcular.h
 *
 *  Created on: 12 abr. 2022
 *      Author: sofia
 */

#ifndef CALCULAR_H_
#define CALCULAR_H_

void calcularDebito(float precioLatam , float precioAerolineas ,float* precioConDescLatam ,float*precioConDescAerolineas );

void calcularCredito(float precioLatam , float precioAerolineas ,float* precioConInteresLatam ,float* precioConInteresAerolineas);

void calcularBitcoin(float precioLatam , float precioAerolineas , float* precioBitcoinLatam , float* precioBitcoinAero);

void calcularPrecioUnitario(float precioLatam , float precioAerolineas , float km , float* precioUnitarioLatam , float* precioUnitarioAero);

void calcularDiferencia(float precioLatam , float precioAerolineas , float* diferenciaIngresada);

void mostrarRespuestas(float precioConDescLatam , float precioConDescAerolineas , float precioConInteresLatam , float precioConInteresAerolineas , float precioBitcoinLatam , float precioBitcoinAero , float precioUnitarioLatam , float precioUnitarioAero , float diferenciaIngresada);

#endif /* CALCULAR_H_ */
