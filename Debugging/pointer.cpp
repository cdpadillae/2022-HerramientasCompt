#include <iostream>

int main(int arcg, char **argv){

    double v1[5]{15.24, 13.8, 19.45};
    double * ptr = nullptr;
    ptr = &v1[0];
    std::cout << v1 << std::endl; //Primer elemento
    std::cout << *ptr << std::endl; //Memoria primer elemento
    return 0;
}
