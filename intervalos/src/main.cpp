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

int main(void)
{
    int numero, qtd;
    int grupo1 = 0, grupo2 = 0, grupo3 = 0, grupo4 = 0, grupo5 = 0;
    cout<<"Digite a quantidade de números: ";
    cin >> qtd;

    for(int i = 1; i<=qtd; i++){
        cout<<"Digite um numero:"<<endl;
        cin >> numero;
        if(numero > 0 && numero < 25){

        }else if (numero >= 25 && numero < 50){
            grupo1++;
        }else if (numero >= 50 && numero < 75){
            
        }else if (numero >= 75 && numero < 100){
            
        }else {
            
        }     
    }

    cout<<"Grupo 1: " << grupo1 << endl;

    return 0;
}
