#include <stdio.h>
#include <stdlib.h>

int loadFile(char * directory){
    //* Read the file
    FILE * file = fopen(directory, "r");
    if(file == NULL) return -1;

    //* Read the only line
    char readLine[51];
    fgets(readLine, 50, file);

    fclose(file);

    //* Return as a int the amount of savings
    return strtol(readLine, NULL, 10);
}

void updateFile(int amount){
    //* Read file
    FILE * file = fopen("Files/savings.txt", "w");

    //* Update amount
    fprintf(file, "%i", amount);

    fclose(file);
}

int updateSavings(int amount){
    int newAmount;

    printf("Cantidad a agregar: ");
    scanf("%i", &newAmount);

    return amount + newAmount;
}