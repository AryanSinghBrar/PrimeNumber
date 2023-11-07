#include <iostream> // input/output stream

using namespace std;

bool isPrime(int n);

int main() //main function
{
   if (isPrime(66049)) // INPUT VALUE HERE
   {
   cout << "prime" << endl;
   }
   else
   {
    cout << "not prime" << endl;
   }
}

bool isPrime(int n){
    if (n<= 1) return false; // returns false if n is less than or equal to 1
    for (int i = 2; i<= (n/2); i++)
    {
        if (n % i == 0) return false; // e.g since 6 % 3 = 0, therefore not prime
    }
    return true;
}