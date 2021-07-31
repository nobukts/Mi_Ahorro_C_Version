#ifndef INTERFACE_H

#define clear printf("\e[1;1H\e[2J")

#define GREEN "\e[1;92m"
#define RED "\e[1;91m"
#define YELLOW "\e[1;93m"
#define BLUE "\e[1;94m"
#define RESET "\e[0m"

//* Function who show all the options for the program
int showMenu();

//* Function who wait for the user input to continue
void waitKey();

#endif // !INTERFACE_H