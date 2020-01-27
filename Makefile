alphabetical_printing: read_words.o print_words.o alphabetical_word_count.o print_alphabetical_word_count.o file_size.o free_alphabetical_array.o free_word_counts.o
	gcc	-ansi -Wall read_words.o print_words.o alphabetical_word_count.o print_alphabetical_word_count.o file_size.o free_alphabetical_array.o free_word_counts.o alphabetical_printing.c -o alphabetical_printing

read_words.o: read_words.c
	gcc	-ansi -Wall -c read_words.c

print_words.o: print_words.c
	gcc	-ansi -c print_words.c

alphabetical_word_count.o: alphabetical_word_count.c
	gcc	-ansi -Wall -c alphabetical_word_count.c

print_alphabetical_word_count.o: print_alphabetical_word_count.c
	gcc	-ansi -Wall -c print_alphabetical_word_count.c

file_size.o: file_size.c
	gcc	-ansi -Wall -c file_size.c

free_alphabetical_array.o: free_alphabetical_array.c
	gcc	-ansi -Wall -c free_alphabetical_array.c

free_word_counts.o: free_word_counts.c
	gcc	-ansi -Wall -c free_word_counts.c

clean:
	rm *.o alphabetical_printing

