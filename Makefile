my_mastermind: my_mastermind_main.o my_mastermind_validation.o my_mastermind_output_handling.o
	gcc -o my_mastermind my_mastermind_main.o my_mastermind_validation.o my_mastermind_output_handling.o

my_mastermind_main.o: my_mastermind_main.c
	gcc -c my_mastermind_main.c

my_mastermind_validation.o: my_mastermind_validation.c
	gcc -c my_mastermind_validation.c
	
my_mastermind.o: my_mastermind_output_handling.c
	gcc -c my_mastermind_output_handling.c

fclean:
	rm -f *.o my_mastermind
	
stop:
	rm *.o my_mastermind