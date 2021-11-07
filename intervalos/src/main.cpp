   
/*!
 * @brief This code implements the Intervalos programming problem
 * @author selan
 * @data June, 6th 2021
 */
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <iomanip>
using std::setprecision;

// Se desejar, crie funções aqui, antes do main().

int main(int argc, char * argv[])
{
    int qtd;
    int soma=0;
    while(cin >> numero){
        soma += numero;
    }
    cout<<"Digite a quantidade de números: ";
    cin >> qtd;
    int vetor[qtd];
    float porcentagem[5] = {0};

    for(int i = 0; i<qtd; i++){
        cout<<"Digite um numero:"<<endl;
        cin >> vetor[i];
    }

    for(int i = 0; i < qtd; i++){
        if(vetor[i] > 0 && vetor[i] < 25){
            porcentagem[0]++;//Armazena no vetor porcentagem posicao 0
        }else if (vetor[i] >= 25 && vetor[i] < 50){
            porcentagem[1]++;//Armazena no vetor porcentagem posicao 1
        }else if (vetor[i] >= 50 && vetor[i] < 75){
            porcentagem[2]++;//Armazena no vetor porcentagem posicao 2
        }else if (vetor[i] >= 75 && vetor[i] < 100){
            porcentagem[3]++;// grupo4++;//Armazena no vetor porcentagem posicao 3
        }else {
            porcentagem[4]++;//    grupo5++;//Armazena no vetor porcentagem posicao 4
        }     
    }
    cout << "=============Porcentagem:===================="<<endl;
    for(int i=0;i<5;i++){
        porcentagem[i] = (porcentagem[i]*100)/qtd; // Coloca os valores da porcentagem no vetor porcentagem
    }

    for(int i = 0; i<5; i++){
        cout<< setprecision(4) << porcentagem[i] << "%" <<endl;
    }

    return 0;
}
