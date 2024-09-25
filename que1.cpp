#include <iostream>
using namespace std;

bool checkEven(int num1);
int main() {
    int num;
    cout << "Enter number: "<< endl;
    cin >> num;
    bool even = checkEven(num);
    if (even){
        cout << num << " even";
    } else{
        cout << num << " odd";
    }
    return 0;
}
bool checkEven(int num1){
    return (num1 % 2 == 0);
}