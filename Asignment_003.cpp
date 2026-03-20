#include <iostream>
#include <string>
using namespace std;

string getStanding(float gpa) {
    if (gpa >= 90) return "Excellent";
    else if (gpa >= 80) return "Very Good";
    else if (gpa >= 70) return "Good";
    else if (gpa >= 60) return "Passing";
    else return "Failed";
}

template <typename T>
bool isDuplicate(T s[], int size, int id) {
    for (int i = 0; i < size; i++) {
        if (s[i].studentID == id)
            return true;
    }
    return false;
}

template <typename T>
void input(T s[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "\nStudent " << i + 1 << endl;

        while (true) {
            cout << "Enter Student ID: ";
            cin >> s[i].studentID;

            if (isDuplicate(s, i, s[i].studentID)) {
                cout << "ID already exists! Try again.\n";
            } else {
                break;
            }
        }

        cin.ignore();

        cout << "Enter Name: ";
        getline(cin, s[i].name);

        cout << "Enter Course: ";
        getline(cin, s[i].course);

        cout << "Enter GPA: ";
        cin >> s[i].gpa;

        s[i].standing = getStanding(s[i].gpa);
    }
}

template <typename T>
void display(T s[], int n) {
    cout << "\n===== STUDENT RECORDS =====\n";
    cout << "ID\tName\tCourse\tGPA\tStanding\n";

    for (int i = 0; i < n; i++) {
        cout << s[i].studentID << "\t"
             << s[i].name << "\t"
             << s[i].course << "\t"
             << s[i].gpa << "\t"
             << s[i].standing << endl;
    }
}

int main() {
    int n;
    char choice;

    do {
        cout << "Enter number of students: ";
        cin >> n;

        struct Student {
            int studentID;
            string name;
            string course;
            float gpa;
            string standing;
        };

        Student s[100];

        input(s, n);
        display(s, n);

        cout << "\nRun again? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    return 0;
}
