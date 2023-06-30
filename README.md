# Welcome to My Mastermind
***

## Introduction
My Mastermind project is an implementation of a game which allows a user to attempt guessing a secret 4 unique digit number in a limited amount of rounds  

## Description
Mastermind is a code-breaking game 
A secret code composed of 4 distinct pieces is created by one player.
Thane the other player has a specified number of rounds (default of 10) to find the secret code.
After each attempt (input), the game indicates to the player the number of well-placed pieces and the number of misplaced pieces.
If the player finds the code, he wins, and the game stops.
I embarked on this project by focusing on the easier parts first then gradually researching and implementing the harder part. 

## Installation
For window users to be able to run the "make" command Windows Subsystem for Linux (WSL) should be installed 

(Run on PowerShell) step 1:  wsl --install

(Run on WSL terminal) step 2: sudo apt-get install build-essential

(Run on WSL terminal) step 3: sudo apt install make

(Run on WSL terminal) step 4: sudo apt update

(Run on WSL terminal) step 4: sudo apt install gcc

Then you can proceed to running the project's compiled file, in the case “./my_mastermind"

if you are using a Linux based system and have make installed please you proceed to running my project

Note: The project has already been complied so there is no need to run "make"

## Usage

Player 1(Admin):
An Admin using the right format sets the number of rounds and the game secret code

Formats:
./my_mastermind -c xxxx
./my_mastermind -c xxxx -t x
./my_mastermind -t x -c xxxx

Where: 
xxxx is your secret code (4 unique digit numbers between 0 to 8) 
X is number of rounds 
-c [CODE]: specifies the secret code. If no code is specified, a random code will be generated.
-t [ROUNDS]: specifies the number of rounds; If no code is specified, the default round is set as 10.

If the format is wrong a secret code is generated and user has 10 rounds to guess

Player 2:
Input 4 unique digit numbers between 0 to 8
i.e. 1234
If input is a valid; my_mastermind_output_handling then gives a user feedback on their input, the function iterates through the input and determines the well placed or misplaced digits. If all inputs are well placed a prompt "Congratz! You did it!" is displayed

Demo:
xxx /mnt/c/Users/My Mastermind$ make
gcc -c my_mastermind_main.c
gcc -c my_mastermind_validation.c
cc    -c -o my_mastermind_output_handling.o my_mastermind_output_handling.c
gcc -o my_mastermind my_mastermind_main.o my_mastermind_validation.o my_mastermind_output_handling.o
inno@DESKTOP-28TU603:/mnt/c/Users/OGTL_ADMIN/Desktop/innoprograms/My Mastermind$ ./my_mastermind -c 1234
Will you find the secret code?
Please enter a valid guess    
---
Round 0
2356
Well placed pieces: 0
Misplaced pieces: 2
---
Round 1
1234
Congratz! you did it!
---

### The Core Team
Ibeto Chukwukadibia Innocent
