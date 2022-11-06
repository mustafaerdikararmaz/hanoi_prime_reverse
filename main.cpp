#include "hanoi.hpp"
#include "reverse.hpp"
#include "prime.hpp"
#include <iostream>

int main(){

    Hanoi H1(20);

    Disc D1 = H1.Display();
    cout<<D1.GiveD()<<endl;

    H1.move(0,1);

    cout<<D1.GiveD()<<endl;

    char str[10] = "kabaklarl";

    print_backwards(str);

    cout << nth_prime(4) << endl;





    return 0;
}