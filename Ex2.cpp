// Desafios.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//
#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int a = 0, b = 1, c = -1, verificador = 0, resposta;

    cout << "Digite um numero inteiro positivo:\n";
    cin >> resposta;


    while (a < resposta) {
        a = b + c;
        c = b;
        b = a;

        if (resposta == a) {
            cout << "\nO valor informado faz parte da sequencia de fibonacci.\n";
            break;
        }
        else if (resposta < a) {
            cout << "\nO valor informado nao faz parte da sequencia de fibonacci.\n";
        }
    }

    if (resposta == 0) {
        cout << "\nO valor informado faz parte da sequencia de fibonacci.\n";
    }
    else if (resposta < 0) {
        cout << "\nResposta invalida.\n";
    }

    return 0;
}

