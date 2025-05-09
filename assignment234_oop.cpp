#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;
    virtual void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
public:
    string program;
    float gpa;
    void display() override {
        Person::display();
        cout << "Program: " << program << endl;
        cout << "GPA: " << gpa << endl;
    }
};

class Professor : public Person {
public:
    string department;
    string specialization;
    void display() override {
        Person::display();
        cout << "Department: " << department << endl;
        cout << "Specialization: " << specialization << endl;
    }
};

// ----- Course -----
class Course {
public:
    int code;
    string title;
    int credits;
    void display() {
        cout << "Course Code: " << code << endl;
        cout << "Title: " << title << endl;
        cout << "Credits: " << credits << endl;
    }
};

class Department {
public:
    string name;
    string location;
    void display() {
        cout << "Department Name: " << name << endl;
        cout << "Location: " << location << endl;
    }
};

// ----- Input Helper Functions -----
void inputStudent(Student &s) {
    cout << "--- Enter Student Details ---" << endl;
    cout << "Name: ";
    getline(cin, s.name);
    cout << "Age: ";
    cin >> s.age;
    cin.ignore();
    cout << "Program: ";
    getline(cin, s.program);
    cout << "GPA: ";
    cin >> s.gpa;
    cin.ignore();
}

void inputProfessor(Professor &p) {
    cout << "\n--- Enter Professor Details ---" << endl;
    cout << "Name: ";
    getline(cin, p.name);
    cout << "Age: ";
    cin >> p.age;
    cin.ignore();
    cout << "Department: ";
    getline(cin, p.department);
    cout << "Specialization: ";
    getline(cin, p.specialization);
}

void inputCourse(Course &c) {
    cout << "\n--- Enter Course Details ---" << endl;
    cout << "Course Code: ";
    cin >> c.code;
    cin.ignore();
    cout << "Title: ";
    getline(cin, c.title);
    cout << "Credits: ";
    cin >> c.credits;
    cin.ignore();
}

void inputDepartment(Department &d) {
    cout << "\n--- Enter Department Details ---" << endl;
    cout << "Name: ";
    getline(cin, d.name);
    cout << "Location: ";
    getline(cin, d.location);
}

int main() {
    Student s;
    Professor p;
    Course c;
    Department d;

    inputStudent(s);
    inputProfessor(p);
    inputCourse(c);
    inputDepartment(d);

    cout << "\n--- Student Information ---" << endl;
    s.display();

    cout << "\n--- Professor Information ---" << endl;
    p.display();

    cout << "\n--- Course Information ---" << endl;
    c.display();

    cout << "\n--- Department Information ---" << endl;
    d.display();

    return 0;
}