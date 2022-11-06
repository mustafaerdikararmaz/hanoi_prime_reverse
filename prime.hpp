#include <iostream>
#include <math.h>


bool isPrime(int prime) {
    bool flag = true;
    for (int i = 2; i <= sqrt(prime); i++) {//Here we are searching with O(N) also
        if (prime % i == 0) {
            flag = false;
        }
    }
    return flag;
}


int nth_prime(int n){
    int count = 0;
    int prime = 2;

    //The program runs with O(n^2).

    while(true){//Here we search with O(N)
        if(isPrime(prime))
            count++;
            if(count == n)
                return prime;
        prime++;
    }

}