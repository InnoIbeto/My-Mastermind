#include "my_mastermind_functions.h"

void input_validation(char* user_guess){
    
    int length_valid = 0;
    int chars_valid = 0;
    int are_repeated_char;

    while (length_valid != 1 || chars_valid != 4 || are_repeated_char != 1) { // whlie loop to validate input
        
        length_valid = ((strlen(user_guess)-1) == 4); // input length validation
        chars_valid = 0;

        for (int i = 0; i < 4; i++){ // ensuring input is a number 
            if(user_guess[i] < '0' || user_guess[i] > '8'){
                break;
            } else {
                chars_valid++;
            }
        }      

        int y = 0;
        int z = 0;
        int chars = 0;

        while (user_guess[y] != '\0') { // ensuring input is not repeted 
            z = 0;

            while (user_guess[z] != '\0') {
                if (user_guess[y] == user_guess[z]) {
                    chars += 1;
                }
                z++;
            }

            y++;
        }


        are_repeated_char = ((chars - 5) == 0);

        if (length_valid != 1 || chars_valid != 4 || are_repeated_char != 1) {
            printf("Wrong input!\n");
            memset(buffer, 0, sizeof(buffer));
            input = read(STDIN_FILENO, buffer, sizeof(buffer)-1);
            if (input == 0) {
                printf("Ending game, come pack soon ;)\n");
                exit(0);
            }

        }
    }
    
}