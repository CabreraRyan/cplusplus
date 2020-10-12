#include <iostream>

using namespace std;

int main()
{

    int units, studentId;
    int miscFee = 3000;
    int unitFee = 750;
    string firstName, lastName;

    cout << "Enter your Student ID: ";
    cin >> studentId;

    cout << "Enter your First Name: ";
    cin >> firstName;

    cout << "Enter your Last Name: ";
    cin >> lastName;

    cout << "Enter your total Units Enrolled: ";
    cin >> units;

    int totalAmount = (unitFee * units) + 3000;

    cout << "Hello, " << firstName << " " << lastName << endl;
    cout << "Your total tuition fee for the " << units << " that you are enrolled in will be PHP " << totalAmount;

}
