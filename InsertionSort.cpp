#include <iostream>
#include <stdlib.h>
#define SIZE 100

int numbers[SIZE]; 




int main() {
	int j = 0; 
	int temp; 
	srand(time(NULL));
	// rand() % [n] whatever you want
	for (int i = 0; i < SIZE; ++i) {
		numbers[i] = rand() % 101; 
	}


	for (int i = 1; i < SIZE; ++i) {
		temp = numbers[i];
		j = i - 1; 
		while (j >= 0  &&  numbers[j] > temp ) {
			numbers[j+1] = numbers[j]; 
			j--; 
		}

		numbers[j + 1] = temp; 

	}

	system("cls");
	for (int i = 0; i < SIZE; ++i) {
		std::cout << i + 1 << '\t' << numbers[i] << '\n';
	}


	return 0;
}
