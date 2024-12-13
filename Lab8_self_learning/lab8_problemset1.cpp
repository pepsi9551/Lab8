#include <iostream>
#include <string>

using namespace std;

char character;

int main(){
    cout << "Enter 1 character: ";
    cin >> character;

    switch (character)
    {
    case 'A':
        cout << "Awesome";
        break;
    case 'B':
        cout << "Great";
        break;
    case 'C':
        cout << "Good";
        break;
    case 'F':
        cout << "Noob";
        break;
    
    default:
        cout << "Error: Invalid Input\n";
        break;
    }
}