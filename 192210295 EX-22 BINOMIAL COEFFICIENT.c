#include <stdio.h>

int i=0,j=0;



int binomialCoefficient(int n, int k) {

int C[n + 1][k + 1];


for ( i = 0; i <= n; i++) {

for (j = 0; j <= (i < k ? i : k); j++) {

if (j == 0 || j == i) {

C[i][j] = 1; // Base cases

} else {

C[i][j] = C[i - 1][j - 1] + C[i - 1][j];

}

}

}

return C[n][k];

}

int main() {

int n, k;

// Input: values for n and k

printf("Enter the value of n: ");

scanf("%d", &n);

printf("Enter the value of k: ");

scanf("%d", &k);

// Compute and print the binomial coefficient

if (k > n || k < 0) {

printf("Invalid values for n and k.\n");

} else {

printf("C(%d, %d) = %d\n", n, k, binomialCoefficient(n, k));

}

return 0;

}
