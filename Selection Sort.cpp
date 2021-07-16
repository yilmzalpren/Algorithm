#include <iostream>
#include <stdlib.h>
#define SIZE 100 
/* 
	in a step, we search the smallest number and swap smallest numbers index between mother loop iterator's index.
*/

int numbers[SIZE]; 

int main() {
	srand(time(NULL));
	// rand() % [n] whatever you want
	for (int i = 0; i < SIZE; ++i) {
		numbers[i] = rand() % 97; 
	}
	int min_index; 
	int temp;

	for (int i = 0; i < SIZE -1 ; ++i) {
		min_index = i;
		for (int j = i+1; j < SIZE;  ++j) {
			if (numbers[j] < numbers[min_index]) {
				min_index = j;
			}
		}
		temp = numbers[min_index]; 
		numbers[min_index] = numbers[i]; 
		numbers[i] = temp; 
	}

	// print
	system("cls");
	for (int i = 0; i < SIZE; ++i) {
		std::cout << i+1 << '\t' << numbers[i] << '\n' ; 
	}
	



	return 0; 
}
