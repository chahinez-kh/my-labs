/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int sumArray(int arr[], int size) {
 if (size == 0)
 return 0;
 else
 return arr[size - 1] + sumArray(arr, size - 1); }
int main() {
 int tab[5] = {1, 8, 6, 7, 3};
 cout << "Sum of the array is " << sumArray(tab, 5) << endl;
}