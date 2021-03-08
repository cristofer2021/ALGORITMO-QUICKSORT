
#include <iostream>
using namespace std;

void Quicksort(int A[], int primero, int ultimo) {
	int central, i, j, pivote;

	central = (primero+ultimo)/2; 
	pivote = A[central]; 
	i = primero;
	j = ultimo;

	do {
	
		while(A[i]<pivote) { 
			i++;
		}

		while(A[j]>pivote) {
			j--;
		}

		if(i<=j) {
			int temporal;
			temporal = A[i];
			
			A[i] = A[j];
			A[j] = temporal;
			i++;
			j--;
		}


	} while(i<=j);

	if(primero<j) {
		Quicksort(A, primero, j);
	}
	if(i<ultimo) {
		Quicksort(A, i, ultimo);
	}


}