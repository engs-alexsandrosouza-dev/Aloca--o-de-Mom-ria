#include <iostream>
#include <memory>
using namespace std;

int** alocar(int n) {
	int** vetor = new int *[n];
	for(int i = 0; i < n; i++) {
		vetor[i] = new int;
	}

	return vetor;
}
void alocarVetor(int** vetor, int n) {
	cout << "Quais os valores do vetor:" << endl;
	for(int i = 0; i < n; i++) {
		cin >> *vetor[i];

	}
}

void preencher(int** vetor, int n) {
	for(int i = 0; i < n; i++) {
		*vetor[i] = 100 * i;
	}
}

void mostrarVetor(int** vetor, int n){
    
    for (int i = 0; i < n; i++){
        cout << *vetor[i] << " ";
    }
}


void liberar(int** vetor, int n) {
	for(int i = 0; i < n; i++) {
		delete vetor[i];
	}
	delete[] vetor;
}

int main() {
	int n;
	cout << "Qual o tamanho do seu vetor: " << endl;
	cin >> n;

	if(n <= 0) {
		cout <<"Valor inválido: ";
		return 0;
	}

	int **vetor = alocar(n);
	preencher(vetor,n);
	alocarVetor(vetor, n);
	mostrarVetor(vetor, n);
	liberar(vetor, n);
}


