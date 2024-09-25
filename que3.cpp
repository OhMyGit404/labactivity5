#include <iostream>
#include "cmath"
using namespace std;

double squareroot();
double power();
int num;
double s_answer;
double p_answer;
int main() {
    cout << "Enter a number: "<< endl;
    cin >> num;

    squareroot();
    power();

    cout << "Square root of " << num << " is " << s_answer << endl;
    cout << "Power of " << num << " to 5 " << " is " << p_answer;

    return 0;
}
double squareroot(){
   s_answer = sqrt(num);
}
double power(){
    p_answer = pow(num,5);

}
