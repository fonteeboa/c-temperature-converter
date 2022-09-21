//============================================================================
// Name        : conversor_de_temperatura.cpp
// Author      : Joao Victor Fonte Boa Galvao
// Version     : 1.0
// Copyright   : Your copyright notice
// Description : conversor de temperaturas in C++, Ansi-style
//============================================================================
#include<stdlib.h>
#include<stdio.h> 
#include<iostream>
#include<sstream>

using namespace std;

// funções
void celsiusToKelvin () {
	int celsius, kelvin;
 	cout << "Celsius para Kelvin \n";
 	cout << "Insira a temperatuda em Celsius: \n";
 	cin >> celsius ;
 	cin.ignore();
	kelvin = celsius + 273;
 	cout << "A temperatura em kelvin e :" << kelvin;
 	cout << "\n";
	return;
}

void celsiusToFahrenheit () {
	int celsius, fahrenheit;
	cout << "Celsius para Fahrenheit \n";
 	cout << "Insira a temperatuda em Celsius: \n";
 	cin >> celsius ;
 	cin.ignore();
 	fahrenheit = (9*celsius + 160) / 5;
 	cout << "A temperatura em Fahrenheit e :" << fahrenheit;
 	cout << "\n";
	return;
}

void kelvinToCelsius () {
	int celsius, kelvin;
	cout << "Kelvin para Celsius. \n";
 	cout << "Insira a temperatura em kelvin: \n";
 	cin >> kelvin;
 	celsius = kelvin -273;
 	cout << "A temperatura em Celsius e : " << celsius ;
 	cout << "\n";
	return;
}

void kelvinToFahrenheit () {
	int fahrenheit, kelvin;
	cout << "Kelvin para Fahrenheit. \n";
  	cout << "Insira a temperatura em kelvin : \n";
  	cin >> kelvin;
  	fahrenheit = (9*kelvin - 2297) / 5;
  	cout << "A temperatura em Fahrenheit e : " << fahrenheit;
 	cout << "\n";
	return;	
}

void fahrenheitToCelsius () {
	int fahrenheit, celsius;
  	cout << "Fahrenheit para Celsius. \n ";
  	cout << "Insira a temperatura em Fahrenheit.\n";
  	cin >> fahrenheit;
  	celsius = (5*fahrenheit - 160) / 9;
  	cout << "A temperatura em Celsius e : " << celsius;
 	cout << "\n";
	return;		
}

void fahrenheitToKelvin () {
	int fahrenheit, kelvin;
	cout << "Fahrenheit para kelvin. \n";
  	cout << "Insira a temperatura em Fahrenheit: \n";
  	cin >> fahrenheit;
  	kelvin = (5*fahrenheit + 2297) / 9;
  	cout << "A temperatura em Kelvin e : " << kelvin;
 	cout << "\n";
	return;			
}

//main
int main ()
{
	char option;
	do {
		system("cls");
		char userOption;
		cout << "CONVERSOR DE TEMPERATURAS.\n\n";
		cout << "Selecione o tipo de transformacao de temperatura voce deseja:  \n\n";
		cout << "1- Celsius para kelvin. \n";
		cout << "2- Celsius para Fahrenheit. \n";
		cout << "3- Kelvin para Celsius. \n";
		cout << "4- Kelvin para Fahrenheit. \n";
		cout << "5- Fahrenheit para Celsius. \n";
		cout << "6- Fahrenheit para Kelvin. \n";
		cout << "\nOpcao: \n";
		cin >> userOption;
		cin.ignore();
		system("cls");
		switch ( userOption ) {
			case '1' :
				celsiusToKelvin();
				break;
			case '2' :
				celsiusToFahrenheit();
				break;
			case '3' :
				kelvinToCelsius();
				break;
			case '4' :
				kelvinToFahrenheit();
				break;
			case '5' :
				fahrenheitToCelsius();
				break;
			case '6' :
				fahrenheitToKelvin();
				break;
			default :
				cout << "Nao existe esta opcao, por favor insira outra opcao.";
		}

		cout << "\n\nDeseja realizar outra conversao?(s/n)\n";
		cin >> option;
	} while (option == 's');

	system("cls");
	if (option != 'n') {
		cout << "Opcao nao reconhecida, programa sera finalizado.\n";
	}
	cout << "Obrigado e volte sempre que for necessario!\n\n";
	system ("PAUSE");
}
