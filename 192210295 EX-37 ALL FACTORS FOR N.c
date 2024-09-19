#include <stdio.h>

// Function to print all factors of a number

void printFactors(int n) {

int i;

printf("Factors of %d are:\n", n);

// Loop through all numbers from 1 to n

for ( i = 1; i <= n; i++) {

if (n % i == 0) { // If i is a factor of n

printf("%d ", i);

}

}

printf("\n");

}

int main() {

int n;

// Input: number to find factors for

printf("Enter a number: ");

scanf("%d", &n);

// Print all factors of the number

printFactors(n);

return 0;

}
