#include "my_mastermind_functions.h"

char buffer[5];
int input;

// enabling my main to accept arguments from terminal
int main(int argc, char **argv){
    char* game_secret_code;
    int number_of_rounds;

    //if arguments pattern fit required format then value is assigned to secret_code and t, else a random code is generated and t is 10
    if (argc == 3 && strcmp(argv[1], "-c") == 0 ){
        game_secret_code = argv[2];
        number_of_rounds = 10;
    }else if(argc == 5 && strcmp(argv[1], "-c") == 0 && strcmp(argv[3], "-t")  == 0 ){
        game_secret_code = argv[2];
        number_of_rounds = atoi(argv[4]);
    }else if(argc == 5 && strcmp(argv[1], "-t") == 0 && strcmp(argv[3], "-c") == 0 ){
        game_secret_code = argv[4];
        number_of_rounds = atoi(argv[2]);
    }else {
        srand(time(0));
        char random_num[5];
        bool unique_num;
        for (int i = 0; i < 4; i++) {
        while (!unique_num) {
            random_num[i] = (rand() % 8 + '0');
            unique_num = true;
            for (int u = 0; u < i; u++) {
                if (random_num[i] == random_num[u]) {
                    unique_num = false;
                    break;
                }
            }
        } 
        unique_num = false;
    }
    random_num[4] = '\0';  
   
    game_secret_code = malloc(strlen(random_num) + 1);
    strcpy(game_secret_code, random_num);
    number_of_rounds = 10;
 }

    // displaying begining promts for game
    printf("Will you find the secret code?\n");
    printf("Please enter a valid guess\n");
    printf("---\n");


    int index = 0;
    // printf("num of rounds: %i\n", number_of_rounds);
    // printf("secret code: %s\n", game_secret_code);

while (index < number_of_rounds) { // displaying round number
    printf("Round %i\n", index);

    // reading input from terminal
  input = read(STDIN_FILENO, buffer, sizeof(buffer));

    if (input == 0) { // handling CTRL D
        printf("Ending game, come pack soon ;)\n");
        return 0;
    }
    buffer[input] = '\0';

    // printf("buffer: %s", buffer);

    input_validation(buffer);
    

    buffer[4] = '\0';
    if (strcmp(game_secret_code, buffer) == 0){ // comapring secret_code an guess 
        printf("Congratz! You did it!\n");
        return 0;
    } else {
        displaying_Wellplacedpieces(buffer, game_secret_code);
    }

    index++; // incrementing number of rounds
}
}