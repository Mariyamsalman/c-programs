#include<iostream>
using namespace std;

int main() {
    int hour;

    cout << "Enter the hour of the day (0-24): ";
    cin >> hour;

    switch (hour) {
        case 0: case 1: case 2: case 3: case 4: case 5:
            cout << "It's night." << endl;
            break;
        case 6: case 7: case 8: case 9: case 10: case 11:
            cout << "It's morning." << endl;
            break;
        case 12: case 13: case 14: case 15: case 16: case 17:
            cout << "It's afternoon." << endl;
            break;
        case 18: case 19: case 20: case 21: case 22: case 23:case24:
            cout << "It's evening." << endl;
            break;
        default:
            cout << "Invalid hour!" << endl;
            break;
    }

    return 0;
}

