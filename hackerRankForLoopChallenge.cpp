#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Declare variables to store the starting and ending integers
    int a, b;

    // Read the  two integers from the user
    cin >> a >> b;

    // Array containing the English representation of numbers 0 to 9
    string numbers[] = {
        "zero", "one", "two", "three", "four",
        "five", "six", "seven", "eight", "nine"
    };
    
    // Loop through every integer in the inclusive range [a,b]
    for (int i = a; i <= b; i++) {
        // Numbers from 1 to 9 are printed using their English names
        if (i >= 1 && i <= 9) {
            cout << numbers[i] << endl;
        }
        // Numbers greater than 9 are checked to determine
        // whether they are even
        else if (i % 2 == 0) {
            cout << "even" << endl;
        }
        // If the number is not even, it must be odd
        else {
            cout << "odd" << endl;
        }
    }

    return 0;
}