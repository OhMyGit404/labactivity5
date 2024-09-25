#include <iostream>
#include "cmath"

using namespace std;

double hypotenuse(double base, double height);
int main() {
    double Base, Height;
    cout << "Enter base: ";
    cin >> Base;
    cout << "Enter height: ";
    cin >> Height;

    double hypotenuseAnsw = hypotenuse(Base,Height);
    cout << "Hypotenuse of triangle is " << hypotenuseAnsw << endl;

    return 0;
}
double hypotenuse(double base, double height){
    return sqrt(pow(base,2)+ pow(height,2));
}
