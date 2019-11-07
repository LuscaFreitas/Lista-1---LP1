#include <iostream>
#include <stdlib.h>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
    float porcentagem;
	int ar[7], cont, x;
    
    ar[0]=0;
	ar[1]=0;
	ar[2]=0;
	ar[3]=0;
	ar[4]=0;
	ar[5]=0;
	ar[6]=0;
	
    cout << "Arremesse o dado!" << endl;
    cout << "Digite de 1 à 6, qual a face caiu pra cima: " << endl;

    while(1){
    	
        cin >> x;
        
		ar[x]++;
        cont++;
        
        if(ar[0]==1){
            cont--;
			break;
        }
    }
    
    x=0;
    
    for (1; x < 6; x++){

		porcentagem = ar[x+1];	
    	cout << "O lado " << x+1 << " apareceu " <<  (porcentagem/cont)*100 << " % das vezes" << endl;
    	
	}

}
