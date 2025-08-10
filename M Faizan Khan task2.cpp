#include <iostream>
using namespace std;

int main() {
    string name;
    int rollNo;
    float marks1, marks2, marks3;
    float total, percentage;
    string grade;

    cout << "Enter Student Name: ";
    getline(cin, name);
    cout << "Enter Roll Number: ";
    cin >> rollNo;

    cout << "Enter Marks in Subject 1 (out of 100): ";
    cin >> marks1;
    cout << "Enter Marks in Subject 2 (out of 100): ";
    cin >> marks2;
    cout << "Enter Marks in Subject 3 (out of 100): ";
    cin >> marks3;

    total = marks1 + marks2 + marks3;
    percentage = (total / 300) * 100;

    if (percentage >= 90)
        grade = "A+";
    else if (percentage >= 80)
        grade = "A";
    else if (percentage >= 70)
        grade = "B";
    else if (percentage >= 60)
        grade = "C";
    else if (percentage >= 50)
        grade = "D";
    else
        grade = "F";

    cout << "\nStudent Result" << endl;
    cout << "Name       : " << name << endl;
    cout << "Roll No.   : " << rollNo << endl;
    cout << "Subject 1  : " << marks1 << endl;
    cout << "Subject 2  : " << marks2 << endl;
    cout << "Subject 3  : " << marks3 << endl;
    cout << "Total Marks: " << total << " / 300" << endl;
    cout << "Percentage : " << percentage << "%" << endl;
    cout << "Grade      : " << grade << endl;

    return 0;
}
