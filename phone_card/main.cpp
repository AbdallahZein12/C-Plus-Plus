#include <iostream> 
#include <string>
#include <windows.h>

using namespace std;
string firstName; 
string lastName;
long long number;
int first_p;
int second_p;
int third_p;

int main () {
    system("cls");
    cout << "PHONE CARD\n\n";
    cout << "Please enter first name: ";
    getline(cin, firstName);
    
    system("cls");
    cout << "FirstName: " << firstName << "\n\n";
    cout << "Please enter lastname: ";
    getline(cin, lastName);

    system("cls");
    cout << "FirstName: " << firstName << endl;
    cout << "LastName: " << lastName << "\n\n";
    cout << "Enter phone number: ";
    cin >> number;

    first_p = number % 10000;
    second_p = (number / 10000) % 1000;
    third_p = (number / 10000000) % 1000;


    system("cls");

    cout << "FirstName: " << firstName << endl;
    cout << "LastName: " << lastName << endl;
    cout << "Number: " << third_p << "-" << second_p << "-" << first_p << endl; 

    return 0;


}
