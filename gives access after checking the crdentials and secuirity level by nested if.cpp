#include<iostream>
using namespace std;
int main()
{
    string username, password,validUsername = "admin",validPassword = "password123";
    int securityLevel,requiredSecurityLevel = 3;

    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;
    cout << "Enter your security level (1-5): ";
     cin >> securityLevel;
    if (username == validUsername) {
        if (password == validPassword) {
            if (securityLevel == requiredSecurityLevel) {
			
                cout << "Access granted. Welcome to the system!";
            } }
            }
     else cout<<"access denied";
	return 0;
}
