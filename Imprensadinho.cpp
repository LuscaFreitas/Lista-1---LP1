#include <iostream>
#include <locale.h>
#include <time.h>
#include <stdlib.h>

using namespace std;

bool Existe(int valores[],int tam, int valor){
    for(int i = 0;i<tam;i++){
        if(valores[i]==valor)
            return true;
    }
    return false;
}

void GeraAleatorios(int numeros[],int quantNumeros,int Limite){
    srand(time(NULL));

    int v;
    for(int i=0;i<quantNumeros;i++){
        v = rand() % Limite;
        while(Existe(numeros,i,v)){
            v = rand() % Limite;
        }
        numeros[i] = v;
    }

}


int main (){
	setlocale(LC_ALL,"Portuguese");
	
	int numeroLido, numeroSecreto[1];
	
    GeraAleatorios(numeroSecreto,1,101);

	
	cout << "Adivinhe um número inteiro entre 1 e 100" << endl;
	
	while (1){	
	
	cin >> numeroLido;
	
	if (numeroLido > numeroSecreto[0]){
		
		cout << "Muito alto." << endl;
		
	}else if (numeroLido < numeroSecreto[0]){
		
		cout << "Muito baixo" << endl;
		
	}else {
		
		cout << "Acertô Mizeravi!!" << endl;
		
		
		return 0;
	
		}
	
	}

}
