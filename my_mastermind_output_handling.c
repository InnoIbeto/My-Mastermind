#include "my_mastermind_functions.h"

// this function takes the guess and secret code as arguments.
void displaying_Wellplacedpieces(char* guess, char* code){
    int index = 0;
    int a = 0;
    int b = 0;
    int well_placed = 0;
    int Misplaced_pieces = 0;

    // if the argument's char is the same the variable well_placed is incremented by 1.
    while(index < strlen(code)){
        if(guess[index] == code[index]){
            well_placed += 1;
        }
        index++;
    }

    // an index of guess goes through the secret code, if the chars match and the index are not the same, the variable Misplaced_pieces is incremented by 1.
       
    while (guess[a] != '\0'){ b = 0;
        while(code[b] != '\0'){
            if(guess[a] == code[b] && guess[b] != code[b]){
                Misplaced_pieces += 1;
            }
            b++;
        }
        a++;
    }


    //sends output to terminal    
    printf("Well placed pieces: %i\n", well_placed);
    printf("Misplaced pieces: %i\n", Misplaced_pieces);
    printf("---\n");
}