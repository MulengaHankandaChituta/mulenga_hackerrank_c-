/*
* HackerRank: functions
* Problem: Maximum of four numbers
*
* Description:
* Write a function that accepts four integers and returns
* the greatest among them
* 
* Author: Mulenga Chituta
*/

#include <iostream>
#include <cstdio>

using namespace std;

/*
* Function: max_of_four
* Parameters: Four integers (a, b, c, d)
* Returns: The largest of the four integers
*/

int max_of_four(int a, int b, int c, int d) {
    // Assume the first number is the maximum
    int maximum = a;

    // Compare the second number
    if (b > maximum) {
        maximum = b;
    }
    // Compare the third number
    if (c > maximum) {
        maximum = c;
    }
    // Compare the fourth number
    if ( d > maximum) {
        maximum = d;
    }
    // Return the greatest value
    return maximum;
}

int main() {
    int a, b, c, d;

    // Read four integers from the standard input
    scanf("%d %d %d %d", &a, &b, &c, &d);

    // Find the maximum using the function
    int answer = max_of_four(a, b, c, d);

    // Display the  result
    printf("%d\n", answer);

    return 0;
}