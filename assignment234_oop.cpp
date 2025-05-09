#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Student {
private:
    string name;
    int rollNumber;
    float cgpa;
    vector<string> courses;

public:
    // Default Constructor
    Student() : name("N/A"), rollNumber(0), cgpa(0.0) {}

    // Parameterized Constructor
    Student(string n, int roll, float c) {
        name = n;
        rollNumber = roll;
        setCGPA(c);
    }

    // Copy Constructor
    Student(const Student& other) {
        name = other.name;
        rollNumber = other.rollNumber;
        cgpa = other.cgpa;
        courses = other.courses;
    }

    // Destructor
    ~Student() {
        // No dynamic memory to release explicitly
        courses.clear();
    }

    // Add a course
    void addCourse(const string& course) {
        if (find(courses.begin(), courses.end(), course) != courses.end()) {
            cout << "Course already added.\n";
        } else {
            courses.push_back(course);
        }
    }

    // Set CGPA with validation
    void setCGPA(float newCGPA) {
        if (newCGPA >= 0.0 && newCGPA <= 10.0) {
            cgpa = newCGPA;
        } else {
            cout << "Invalid CGPA. It must be between 0.0 and 10.0.\n";
        }
    }

    // Get roll number
    int getRollNumber() const {
        return rollNumber;
    }

    // Display student information
    void displayInfo() const {
        cout << "Name: " << name << "\n";
        cout << "Roll Number: " << rollNumber << "\n";
        cout << "CGPA: " << cgpa << "\n";
        cout << "Courses Enrolled: ";
        if (courses.empty()) {
            cout << "None";
        } else {
            for (const auto& course : courses) {
                cout << course << ", ";
            }
        }
        cout << "\n";
    }
};

class StudentManagementSystem {
private:
    vector<Student> students;

public:
    // Add a new student
    void addStudent(const Student& s) {
        students.push_back(s);
    }

    // Search student by roll number
    Student* searchStudent(int roll) {
        for (auto& s : students) {
            if (s.getRollNumber() == roll) {
                return &s;
            }
        }
        return nullptr;
    }

    // Display all student records
    void displayAllStudents() const {
        if (students.empty()) {
            cout << "No students in the system.\n";
        } else {
            for (const auto& s : students) {
                s.displayInfo();
                cout << "---------------------\n";
            }
        }
    }
};

int main() {
    StudentManagementSystem sms;
    int choice;

    while (true) {
        cout << "\n--- Student Management System ---\n";
        cout << "1. Add Student\n";
        cout << "2. Add Course to Student\n";
        cout << "3. Update Student CGPA\n";
        cout << "4. Display All Students\n";
        cout << "5. Search Student by Roll Number\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 0) break;

        switch (choice) {
            case 1: {
                string name;
                int roll;
                float cgpa;
                cout << "Enter name: ";
                cin.ignore();
                getline(cin, name);
                cout << "Enter roll number: ";
                cin >> roll;
                cout << "Enter CGPA: ";
                cin >> cgpa;
                Student s(name, roll, cgpa);
                sms.addStudent(s);
                cout << "Student added successfully.\n";
                break;
            }
            case 2: {
                int roll;
                string course;
                cout << "Enter roll number: ";
                cin >> roll;
                Student* s = sms.searchStudent(roll);
                if (s) {
                    cout << "Enter course name to add: ";
                    cin.ignore();
                    getline(cin, course);
                    s->addCourse(course);
                    cout << "Course added successfully.\n";
                } else {
                    cout << "Student not found.\n";
                }
                break;
            }
            case 3: {
                int roll;
                float newCGPA;
                cout << "Enter roll number: ";
                cin >> roll;
                Student* s = sms.searchStudent(roll);
                if (s) {
                    cout << "Enter new CGPA: ";
                    cin >> newCGPA;
                    s->setCGPA(newCGPA);
                    cout << "CGPA updated successfully.\n";
                } else {
                    cout << "Student not found.\n";
                }
                break;
            }
            case 4:
                sms.displayAllStudents();
                break;

            case 5: {
                int roll;
                cout << "Enter roll number to search: ";
                cin >> roll;
                Student* s = sms.searchStudent(roll);
                if (s) {
                    s->displayInfo();
                } else {
                    cout << "Student not found.\n";
                }
                break;
            }

            default:
                cout << "Invalid choice. Try again.\n";
        }
    }

    return 0;
}