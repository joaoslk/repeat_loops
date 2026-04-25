#include <iostream>

int main(){
    //somar numeros pares de 1 ate 20
    int i, s = 0;
    for(i = 1; i <=20; i++){
        if(i % 2 == 0){
            s = s + i;
            std::cout << "Número: " << i << "\tSoma: " << s << "\n";
        }
    }
    std::cout << "Soma total: " <<  s;
}