/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>
using namespace std;
int main() {
// Create a vector called cars that will store strings
vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};
cout << cars[0];
// Change the value of the first element
cars[0] = "Opel";
cout << cars[0];
// Get the first element
cout << cars.front();
// Get the last element
cout << cars.back();
// Get the second element
cout << cars.at(1);
cout << cars.at(6);
// Print vector elements
for (string car : cars) {
 cout << car <<"/n";
}
}