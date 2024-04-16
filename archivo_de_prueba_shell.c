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
		{					*/la funcion "strtok" utiliza para dividir la cadena en tokens(argunebtos) basadas en un delimitador/*
			args[i] = token;		*/(en este caso , un espacio en blenco/*
			token = strtok(NULL; " ");
			i++
		
		}
			
		ags[i] = NULL;		

		pid_t pid = fork();

		if (pid < 0) 		*/se crea un nuevo proceso hijo utilizando la llamada al sistemas "fork()" /*
														      	
		{			*/si devuelve un valor negartivo ...se imprimeun mensaje de error. Si devuelve 0 , se trata del proceso del hijo que ejecuta el comanto ultilizado "execvp"/*
					*/si es diferente de 0 , se trata del proceso padre, que espera a que el proceso hijo termine/*
		fprintf(stdeer, "error al crear el proceso hijo\n");                
		return (1);
		}
		else if (pid == 0)
		{
		execvp(args[0] arg)
		fprintf(stderr, "error al ejecutar el comando\n");
		return (1)

		}
		else 
		{
		wait(NULL);
		}
		
		
		}




			*/el bucle while  continua hasta que "should_run" sea falso, momento en el que el programa termina . /*													
		return (0);

				
}
