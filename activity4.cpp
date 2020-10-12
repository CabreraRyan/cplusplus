#include <iostream>

using namespace std;

int main()
{

    int studentId, quizGrade, seatWork, labWork, assignment, attendance, majorExam, performanceTask;
    string firstName, lastName;

    cout << "Enter your Student ID: ";
    cin >> studentId;

    cout << "Enter your First Name: ";
    cin >> firstName;

    cout << "Enter your Last Name: ";
    cin >> lastName;


    // Class Standing
    cout << "Enter your Quiz Grade: ";
    cin >> quizGrade;

    cout << "Enter your Seat Work: ";
    cin >> seatWork;

    cout << "Enter your Lab Work: ";
    cin >> labWork;

    cout << "Enter your assignment: ";
    cin >> assignment;

    cout << "Enter your attendance: ";
    cin >> attendance;


    // Major Exam
    cout << "Enter your Major Exam: ";
    cin >> majorExam;

    cout << "Enter your Performance Task: ";
    cin >> performanceTask;


    double classStanding = (quizGrade * 0.40) + (seatWork * 0.15) + (labWork * 0.30) + (assignment * 0.10) + (attendance * 0.05);
    double finalGrade = (classStanding * 0.60) + (majorExam * 0.20) + (performanceTask * 0.20);


    cout << "Your Final Grade is: " << finalGrade;

}

