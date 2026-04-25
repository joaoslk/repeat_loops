#include <iostream>

int main(){
    int i, s = 0;
    for(i = 0; i <=20; i++ ){
        s = i + s;
        std::cout << "Número: " << i << "\t" << "Soma: "<< s << "\n";
    }
    std::cout << "Soma total: " << s;
}