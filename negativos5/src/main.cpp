#include <iostream>
using std::cin;
using std::cout;

const int SIZE = 5; // input size.

int main(void)
{
    // TODO: Adicione aqui seu código.
    int num;
    int qtd = 0;
    for(int i = 1; i<=SIZE; i++){
        cin>>num;
           if(num < 0){
               qtd++;
           }
    }

    cout << qtd <<std::endl;
    return 0;
}
