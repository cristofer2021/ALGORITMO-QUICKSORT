#include <iostream>
using namespace std;

void Imprimirlementos( int A[], int n) {
	ofstream quicksort;
	quicksort.open("QUICKSORT.txt", ios::app);
	quicksort<<"\t\t--------ElEMENTOS INGRESADOS/DESORDENADOS------------"<<endl<<endl;
	cout<<"\t\t\t-----------------------ELEMENTOS INGRESADOS----------------------"<<endl<<endl;
	for(int i=0; i<n; i++) {
		cout<<"Arreglo["<<i<<"] = "<<A[i];
		cout<<endl;
		quicksort<<"Arreglo["<<i<<"] = "<<A[i];
	}
	quicksort.close();
}
