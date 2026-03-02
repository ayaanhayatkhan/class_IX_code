#include <iostream>
using namespace std;

int main()
{
    int num;
    int square, cube;

    cout << "Enter a number: ";
    cin >> num;

    square = num * num;
    cube = num * num * num;

    cout << "Square = " << square << endl;
    cout << "Cube = " << cube;

    return 0;
}