#include <iostream>

using namespace std;

bool multiples(int num1, int num2);
int main() {
    int Num1, Num2;
    cout << "Enter first number: ";
    cin >> Num1;
    cout << "Enter second number: ";
    cin >> Num2;

    bool multiple = multiples(Num1,Num2);
    if (multiple){
        cout << Num2 << " is a multiple of " << Num1 << "." << endl;
    } else{
        cout << Num2 << " is not a multiple of " << Num1 << "." << endl;
    }

    return 0;
}
bool multiples(int num1, int num2){
    return (num1 != 0 && num2 % num1 == 0);
}
