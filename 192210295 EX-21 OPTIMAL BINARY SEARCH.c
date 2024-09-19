#include <stdio.h>
#include <limits.h>
int i=0,len=0,k=0,j=0;
void optimalBST(float p[], int n) {



float e[n][n], w[n][n];

int root[n][n];



for (i = 0; i < n; i++) {

e[i][i] = p[i];

w[i][i] = p[i];

root[i][i] = i;

}


for ( len = 2; len <= n; len++) {

for (i = 0; i <= n - len; i++) {

int j = i + len - 1;

e[i][j] = INT_MAX;

w[i][j] = w[i][j - 1] + p[j];


for ( k = i; k <= j; k++) {

float t = (k > i ? e[i][k - 1] : 0) + (k < j ? e[k + 1][j]

: 0) + w[i][j];

if (t < e[i][j]) {

e[i][j] = t;

root[i][j] = k;

}

}

}

}



printf("Minimum cost of the optimal BST: %.2f\n", e[0][n - 1]);



printf("Root table:\n");

for ( i = 0; i < n; i++) {

for ( j = 0; j < n; j++) {

printf("%2d ", root[i][j]);

}

printf("\n");

}

}

int main() {

int n;



printf("Enter the number of keys: ");

scanf("%d", &n);

float p[n];



printf("Enter the probabilities of the keys:\n");

for ( i = 0; i < n; i++) {

printf("Probability of key %d: ", i + 1);

scanf("%f", &p[i]);

}



optimalBST(p, n);

return 0;

}
