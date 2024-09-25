#include <iostream>
using namespace std;


void area();
void perimeter();
double length;
double AreaAnsw;
double PerimeterAnsw;
int main() {
    cout << "Enter length: " << endl;
    cin >> length;

    area();
    perimeter();

    cout << "The area is " << AreaAnsw <<endl;
    cout << "The perimeter is " << PerimeterAnsw;
    return 0;
}
void area(){
    AreaAnsw = length*length;
}
void perimeter() {
    PerimeterAnsw = length*4;
}