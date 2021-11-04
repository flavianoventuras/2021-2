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
    int numero, qtd;
    //int grupo1 = 0, grupo2 = 0, grupo3 = 0, grupo4 = 0, grupo5 = 0;
    float porcen1,porcen2,porcen3,porcen4,porcen5;
    cout<<"Digite a quantidade de números: ";
    cin >> qtd;
    int vetor[qtd];

    for(int i = 0; i<qtd; i++){
        cout<<"Digite um numero:"<<endl;
        cin >> numero;
        vetor[i] = numero   ;

    }

    for(int i = 0; i<qtd; i++){
        cout << vetor[i] << endl;
    }

    
    for(int i = 0; i < qtd; i++){
        if(numero > 0 && numero < 25){
            vetor[i]++;
        }else if (numero >= 25 && numero < 50){
           // grupo2++;
        }else if (numero >= 50 && numero < 75){
           // grupo3++;
        }else if (numero >= 75 && numero < 100){
           // grupo4++;
        }else {
           //    grupo5++;
        }     
    }
    for(int i = 0; i < 0; i++){

    }

    porcen1 = (vetor[0]*100)/qtd;
    porcen2 = (vetor[1]*100)/qtd;
    porcen3 = (vetor[2]*100)/qtd;
    porcen4 = (vetor[3]*100)/qtd;
    
    cout<<"Grupo 1 obteve " << porcen1 << "%" <<endl;
    cout<<"Grupo 2 obteve " << porcen2 << "%" <<endl;
    cout<<"Grupo 3 obteve " << porcen3 << "%" <<endl;
    cout<<"Grupo 4 obteve " << porcen4 << "%" <<endl;
    cout<<"Grupo 5 obteve " << porcen5 << "%" <<endl;

    return 0;
}
