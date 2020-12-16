#include <iostream>
#include <time.h>
#define SIZE 20
#define INDEX 100
int arr[INDEX] = { 0 };

int main() {
	srand(time(NULL));
	int numbers[SIZE];
	for (int i = 0; i < SIZE; ++i) {
		numbers[i] = rand() % INDEX;
	}
	for (int i = 0; i < SIZE; ++i) {
		(arr[(numbers[i])])++;
	}
	int index = 0; // it's for numbers to sorting ,
	for (int i = 0; i < INDEX; ++i) {
		while (arr[i] > 0) {
			numbers[index++] = i; 
			arr[i]--;
		}
	}
	for (int i = 0; i < SIZE; ++i) {
		std::cout << numbers[i] << '\n';
	}

	return 0; 
}
