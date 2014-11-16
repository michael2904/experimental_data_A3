exp_data: exp_data.o
	gcc -o exp_data exp_data.o
exp_data.o: exp_data.c
	gcc -c exp_data.c
clean:
	rm -f *.o
