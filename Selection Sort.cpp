#include <iostream>
#include <stdlib.h>
#define SIZE 100
int numbers[SIZE]{ 0 }; 

int main() {
	int temp = 0; 
	int minNumberIndex = -1 ; 
	srand(time(NULL)); 
	for (int i = 0; i < SIZE; ++i) {
		numbers[i] = rand() % 111; 
	}
	for (int i = 0; i < SIZE - 1; ++i) {
		minNumberIndex = i;
		
		for (int j = i + 1; j < SIZE; ++j) {
			if (numbers[j] < numbers[minNumberIndex]) {
				minNumberIndex = j; 
			}
			else; 
		}
		temp = numbers[i];
		numbers[i] = numbers[minNumberIndex]; 
		numbers[minNumberIndex] = temp; 
	}

	for (int i = 0; i < SIZE; ++i) {
		std::cout << numbers[i] << '\n'; 
	}

	return 0; 
}
