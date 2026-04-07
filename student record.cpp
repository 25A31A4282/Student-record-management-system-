#include <iostream>
using namespace std;

struct Student {
    int roll;
    string name;
    float marks;
};

Student s[50];
int total = 0;

void addStudent() {
    cout << "Enter Roll Number: ";
    cin >> s[total].roll;

    cout << "Enter Name: ";
    cin >> s[total].name;

    cout << "Enter Marks: ";
    cin >> s[total].marks;

    total++;
}

void displayStudents() {
if(total == 0) {
    cout << "No records found";
}
    for(int i = 0; i < total; i++) {
        cout << "\nRoll: " << s[i].roll;
        cout << "\nName: " << s[i].name;
        cout << "\nMarks: " << s[i].marks << endl;
    }
}

void searchStudent() {
    int roll;
    cout << "Enter roll to search: ";
    cin >> roll;

    for(int i = 0; i < total; i++) {
        if(s[i].roll == roll) {
            cout << "\nStudent Found";
            cout << "\nName: " << s[i].name;
            cout << "\nMarks: " << s[i].marks << endl;
            return;
        }
    }
    cout << "Student not found";
}

int main() {
    int choice;

    do {
        cout << "\n1.Add Student";
        cout << "\n2.Display Students";
        cout << "\n3.Search Student";
        cout << "\n4.Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        switch(choice) {
            case 1: addStudent(); break;
            case 2: displayStudents(); break;
            case 3: searchStudent(); break;
               case 4: cout << "Exiting program"; break;
        }

    } while(choice != 4);

    return 0;
}
