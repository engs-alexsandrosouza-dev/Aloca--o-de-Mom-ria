#include <iostream>
#include <memory>
using namespace std;

void vetor(){
    int n;
    cout << "Informe quantas posições terá o seu vetor: ";
    cin >> n;
    int arr = new int [n];
    cout << "Informe os valores de seu vetor: ";
    
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        arr[i] = 100*i;
    }
    
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    
    delete[] arr;
    arr = nullptr;
}

int main(){
    
    vetor();
    return 0;
}
