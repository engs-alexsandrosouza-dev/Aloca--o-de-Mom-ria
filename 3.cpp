#include <iostream>
using namespace std;

void mostrar(){
    cout << "Qual o tamanho do vetor? ";
}
int vetor (int* arr, int tam){
    int* v = new int[tam];
    for (int i = 0; i < tam; i++){
        cin >> v[i];
        v[i] = arr[i] + 100*v[i];
    }
}

void mostrarVetor(int* arr, int tam){
    for (int i = 0; i < tam; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void liberarMemoria(int* arr){
    delete[] arr;
}

int main(){
    int tam;
    mostrar();
    cin >> tam;
    int* arr = new int[tam];
    vetor(arr, tam);
    mostrarVetor(arr, tam);
    liberarMemoria(arr);
    return 0;
}
