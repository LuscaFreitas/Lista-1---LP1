#include <iostream>

using namespace std;

int main (){
	int soma=0, maiorNumero=0, ultimoNumero=1;
	
	cout << "Digite valores inteiro e lhe direi qual o maior valor digitado e qual a soma dos valores: " << endl;
	cout << "Para finalizar, digite 0" << endl;
	
	
	// enquanto o ultimonumero for diferente de 0 o laço não para
	while (ultimoNumero != 0){
		
		cin >> ultimoNumero;
		
		//a variavel soma, soma todos numeros digitados
		soma+=ultimoNumero;
		
		// a condição de ser o maior numero é: caso o ultimo numero digitado seja maior que o atual maior numero
		// a variavel digitada por ultimo vira o maior
		if (ultimoNumero > maiorNumero){
			
			maiorNumero = ultimoNumero;
		
		}
		
	}
	cout << "O maior numero digitado foi: " << maiorNumero << endl;
	cout << "A soma de todos os valores eh igual a: " << soma << endl;
	
	return 0;
}
