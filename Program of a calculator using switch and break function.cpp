/* NAME - MAYANK YADAV
   PRN - 24070123060
   ENTC A-3 */
#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    char choice;
    int x, y;
    cout << "Enter the first number:";
    cin >> x;
    cout << "Enter the second number:";
    cin >> y;

    cout << "Enter the operation you want to perform:\n1) Addition.\n2) Subtraction\n3) Multiplication\n4) Division\n5) Enter any other number to exit.\n";
    cin >> choice;

    switch (choice) {
    case '1':
        cout << x << " + " << y << " = " << x + y << endl;
        break;

    case '2':
        cout << x << " - " << y << " = " << x - y << endl;
        break;

    case '3':
        cout << x << " * " << y << " = " << x * y << endl;
        break;
    case '4':
        cout << x << " / " << y << " = " << x / y << endl;
        break;
    default:
        printf("This is a wrong choice.\n");
    }

    return 0;
}


/* OUTPUT 
Enter the first number:5
Enter the second number:7
Enter the operation you want to perform:
1) Addition.
2) Subtraction
3) Multiplication
4) Division
5) Enter any other number to exit.
6
This is a wrong choice. */
