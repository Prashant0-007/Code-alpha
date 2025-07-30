#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of courses: ";
    cin >> n;

    float grade, credit, total_credits = 0, total_points = 0;

    for (int i = 1; i <= n; i++) {
        cout << "\nCourse " << i << ":\n";
        cout << "Enter grade (e.g. 9 for A): ";
        cin >> grade;
        cout << "Enter credit hours: ";
        cin >> credit;

        total_credits += credit;
        total_points += grade * credit;
    }

    float cgpa = total_points / total_credits;
    cout << "\nTotal Credits: " << total_credits << endl;
    cout << "Total Grade Points: " << total_points << endl;
    cout << "Final CGPA: " << cgpa << endl;

    return 0;
}
