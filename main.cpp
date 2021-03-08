#include <iostream>
#include "quicksort.h"
//#include "operaciones.h"

using namespace std;
#define T 1250
# include <fstream>

void Ingresarelementos( int A[T], int n);
void Imprimirlementos( int A[T], int n);
void Ordenamientolementos( int A[T], int n);
void Quicksort(int A[T], int primero, int ultimo);


int main(int argc, char** argv) {
	int num, A[T];
	cout<<endl<<"Digite el numero de elmentos del arreglo: ";
	cin>>num;
	Ingresarelementos( A, num);
	Imprimirlementos( A, num);
	Ordenamientolementos( A, num);
	
}

void Ingresarelementos( int A[T], int n) {
	cout<<endl<<"\n\t\t\t*********************\n\t\t\tINGRESO DE ELEMENTOS\n\t\t\t*********************"<<endl<<endl;
	for(int i=0; i<n; i++) {
		cout<<"ARREGLO["<<i+1<<"] =";
		cin>>A[i];
	}
}
void Imprimirlementos( int A[T], int n) {
	ofstream quicksort;
	quicksort.open("QUICKSORT.txt", ios::app);
	quicksort<<"\n\t\t\t*******************\n\t\t\tElEMENTOS INGRESADOS/DESORDENADOS\n\t\t\t*****************"<<endl<<endl;
	cout<<"\n\t\t\t**************************************\n\t\t\tElEMENTOS INGRESADOS/DESORDENADOS\n\t\t\t**************************************"<<endl<<endl;
	for(int i=0; i<n; i++) {
		cout<<"Arreglo["<<i<<"] = "<<A[i];
		cout<<endl;
		quicksort<<"Arreglo["<<i<<"] = "<<A[i];
	}
	quicksort.close();
}

void Ordenamientolementos( int A[T], int n) {
	Quicksort(A, 0, n-1);
    ofstream quicksort;
	quicksort.open("QUICKSORT.txt", ios::app);
	quicksort<<"\n\t\t\t******************************\n\t\t\tElEMENTOS ORDENADOS-QUICKSORT\n\t\t\t*****************************"<<endl<<endl;
	cout<<endl<<"\n\t\t\t******************************\n\t\t\tElEMENTOS ORDENADOS-QUICKSORT\n\t\t\t*****************************"<<endl<<endl;
	for(int i=0; i<n; i++) {
		cout<<"["<<A[i]<<"]";
		
		quicksort<<"["<<A[i]<<"]";
	}
	quicksort.close();
}

