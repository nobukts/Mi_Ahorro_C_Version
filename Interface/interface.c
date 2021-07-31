#include <stdio.h>
#include <conio.h>

#include "interface.h"

#define separationBar printf(YELLOW"=================================================\n");

int showMenu(){
    clear;
    int option;

    separationBar;
    printf(GREEN" Programa que almacena la informacion de ahorros \n");
    separationBar;

    printf(BLUE "\n1) Cargar archivos\n");
    printf("2) Guardar archivo de ahorros\n");
    printf("3) Actualizar monto de ahorros\n");
    printf("4) Mostrar informacion de ahorro y la meta final\n");
    printf("5) %cCuanto falta para alcanzar la meta?\n\n", 168);
    printf(RED "0) Salir del programa\n");
    printf(YELLOW "\nIngrese una opcion: " RESET);

    scanf("%i", &option);

    clear;

    return option;
}

void waitKey(){
    printf(BLUE "\nApriete cualquier tecla para avanzar " RESET);
    getch();
}