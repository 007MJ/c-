#include "Array.hpp"


int main(void){
    // // {
    // //     Array<int> Arrayint;
    // //     Arrayint.acces(23);
    // }

    // {
    //     unsigned int n = 100;
    //     Array<int> Arrayint(n);
    //     Arrayint.acces(23);
    //     std::cout << Arrayint.size() << std::endl;
    // }

    // {
    //     unsigned int n = 100;
    //     Array<int> Arrayint(n);
    //     Arrayint.acces(23);
    //     std::cout << Arrayint.size() << std::endl;
    // }

    // {
    //     unsigned int n = 100;
    //     Array<int> Arrayint(n);
    //     // Arrayint.acces(1001);
    //     std::cout << Arrayint.size() << std::endl;
    //     Array<int> ArrayTake;

    //     ArrayTake = Arrayint;

    //     ArrayTake.acces(23);
    //     ArrayTake.size();

    // }

    {
        unsigned int len = 100;
        Array<char > Arraychar(len);
        Arraychar.acces(12);
        Arraychar.add('c', 0);
        Arraychar.acces(0);
        std::cout << "==============other============" << std::endl;
        Array<char > ArraycharTAake = Arraychar;
        Arraychar.acces(0);


    }

}