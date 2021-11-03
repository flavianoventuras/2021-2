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
    float porcen1,porcen2,porcen3,porcen4,porcen5;
    cout<<"Digite a quantidade de números: ";
    cin >> qtd;

    for(int i = 1; i<=qtd; i++){
        cout<<"Digite um numero:"<<endl;
        cin >> numero;
        if(numero > 0 && numero < 25){
            grupo1++;
        }else if (numero >= 25 && numero < 50){
            grupo2++;
        }else if (numero >= 50 && numero < 75){
            grupo3++;
        }else if (numero >= 75 && numero < 100){
            grupo4++;
        }else {
            grupo5++;
        }     
    }

    porcen1 = (grupo1*100)/qtd;
    porcen2 = (grupo2*100)/qtd;
    porcen3 = (grupo3*100)/qtd;
    porcen4 = (grupo4*100)/qtd;
    porcen5 = (grupo5*100)/qtd;
    cout<<"Grupo 1 obteve " << porcen1 << "%" <<endl;
    cout<<"Grupo 2 obteve " << porcen2 << "%" <<endl;
    cout<<"Grupo 3 obteve " << porcen3 << "%" <<endl;
    cout<<"Grupo 4 obteve " << porcen4 << "%" <<endl;
    cout<<"Grupo 5 obteve " << porcen5 << "%" <<endl;

    return 0;
}
