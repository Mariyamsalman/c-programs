#include <iostream>
#include <string>

using namespace std;

int main() {
    double income;

    cout << "Enter your annual income: ";
    cin >> income;

    
    if (income < 0) {
        cout << "Income is negative. Please enter a valid income.\n";
    
    }

    // Determine the tax bracket using if-else if ladder
    if (income <= 10275) {
        cout << "Your tax bracket is: 10%\n" ;
    }
    else if (income <= 41775) {
        cout << "Your tax bracket is: 12%\n";
    }
    else if (income <= 89075) {
        cout << "Your tax bracket is: 22%\n";
    }
    else if (income <= 170050) {
        cout << "Your tax bracket is: 24%\n";
    }
    else if (income <= 215950) {
        cout << "Your tax bracket is: 32%\n";
    }
    else if (income <= 539900) {
        cout << "Your tax bracket is: 35%\n";
    }
    else {
        cout << "Your tax bracket is: 37%\n";
    }

    return 0;
}

