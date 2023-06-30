#ifndef  MY_MASTERMIND_FUNCTIONS_H
#define MY_MASTERMIND_FUNCTIONS_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <stdbool.h>

// declaring this functions and varables in my header file so it can be accessed in any file that header file is included
extern char buffer[5];
extern int input;
void input_validation(char* user_guess);
void displaying_Wellplacedpieces(char* guess, char* code); 
#endif