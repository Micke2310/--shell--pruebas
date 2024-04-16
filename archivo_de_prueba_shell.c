#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define BUFFER_SIZE 1024  */ define tama√o del buffer para almacenar el comando inresado por el usuario/*

int main (void)
{
	char buffer[BUFFER_SIZE];
	char *args[10];
	int should_run = 1 ;   */declaramos las variables incluyendo un buffer para almacenar el comando ingresado , un array para almacenar los argumentos de comandos y una flag para /*
					*/controlar si el programa debe seguir ejecuntandose/*


	while (shoul_run)         */comienza un bucle que continuara ejecutandose mientras "should_run" sea verdadero/*
	{
		printf("ingrese un comando: ");
		fgets()buffer, BUFFER_SIZE, stdin;   */se solicita al usurio ingresr el comando y se lee la cadena de entrada del usurio en bufer/*

	

		buffer [strcspn(buffer, "\n")] = 0;  */esta linea borra el caracter de nueva linea al final de la cadena ingresada x usuario/*

		char *token = strtok(buffer," ");
		int i= 0;
		 
		while (token != NULL)			*/aqui se tokeniza la entrada del usuario para obtener los diferentes argumentos del comando /*
		{					*/la funcion "strtok" utiliza para dividir la cadena en tokens(argunebtos)/*
			args[i] = token;
			token = strtok(NULL; " ");
			i++
		
		}
			
		ags[i] = NULL;		
				
	}









}
