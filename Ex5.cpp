// Ex5.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <stdint.h>
#include <iostream>

using namespace std;

int main()
{
    int i, j, fim;
    char palavra[25], palavrainv[25];
    
    cout << "Insira uma palavra e pressione a tecla enter:\n\n";
    cin >> palavra;
    cout << "\n";
    
    fim = 0; 

    while (palavra[fim] != '\n' && palavra[fim] != '\0') {
        fim++;
    }
    
    i = fim - 1;
    j = 0;
    
    while (j < fim) {
        palavrainv[j] = palavra[i];
        i--;
        j++;
    }
    
    palavrainv[fim] = '\0';

    cout << "Inversa: \n\n" << palavrainv << "\n\n";
    
    return 0;
}
