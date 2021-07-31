#include <stdio.h>

#include "Interface/interface.h"
#include "savings.h"

int main(){
    int option;
    int amount = -1;
    int goal = -1;

    //*Loop to select a option from the menu
    do{
        option = showMenu();
        if(option  == 0) break;

        switch(option){
            case 1: //* Loads the files
                amount = loadFile("Files/savings.txt");
                goal = loadFile("Files/goals.txt");
                if(amount == -1 && goal == -1) printf(RED "No se pudo cargar la informacion\n"); //! Error from load the files
                else printf(GREEN "Se cargo correctamente la informacion de los ahorros\n");
                break;

            case 2: //* Save the savings files
                if(amount != -1){
                    updateFile(amount);
                    printf(GREEN "Se guardo correctamente el archivo\n");
                }
                else printf(RED "No ha cargado el archivo de los ahorros\n"); //! Error from save the savings file
                break;

            case 3: //* Update the savings amount
                if(amount != -1){
                    amount = updateSavings(amount);
                    printf(GREEN "Se actualizaron los ahorros\n");
                } 
                else printf(RED "No ha cargado el archivo de los ahorros\n"); //! Error from doesnt load the savings file
                break;
            
            case 4://* Show the savings amount and the goal amount
                if(amount != -1) printf(GREEN "El monto actual es de %i pesos\nLa meta actual es de %i pesos\n", amount, goal);
                else printf(RED "No ha cargado ambos archivos\n"); 
                break;

            case 5: //* Show the difference from the goal
                if(goal != -1 && amount != -1) printf(GREEN "La cantidad de dinero para completar la meta es de %i\n", goal - amount);
                else printf(RED "No ha cargado ambos archivos\n");
                break;

            default: //* Invalid option
                printf(RED "Ingreso una opcion invalida\n");
                break;
        }

        waitKey();
    }while(option != 0);

    //* End to the program
    printf(YELLOW "Fin del Programa\n" RESET);
    waitKey();

    return 0;
}