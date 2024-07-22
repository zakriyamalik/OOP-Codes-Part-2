#include <iostream>
#include <string>

using namespace std;

class Person {
private:
    string* fullName;
    int* height;

public:
    Person(string name, int height) {
        this->fullName = new string(name);
        this->height = new int(height);
    }

    virtual ~Person() {
        cout << "Person destructor" << endl;
        delete fullName;
        delete height;
    }

    virtual void printInfo() {
        cout << "Name: " << *fullName << ", Height: " << *height << endl;
    }
};

class Employee : public Person {
private:
    string* department;
    int* ID;

public:
    Employee(string name, int height, string department, int ID)
        : Person(name, height) {
        this->department = new string(department);
        this->ID = new int(ID);
    }

    ~Employee() {
        cout << "Employee destructor" << endl;
        delete department;
        delete ID;
    }

    void printInfo() {
        cout << "Employee: ";
        Person::printInfo();
        cout << "Department: " << *department << ", ID: " << *ID << endl;
    }
};

class Student : public Person {
private:
    string* schoolName;

public:
    Student(string name, int height, string schoolName)
        : Person(name, height) {
        this->schoolName = new string(schoolName);
    }

    ~Student() {
        cout << "Student destructor" << endl;
        delete schoolName;
    }

    void printInfo() {
        cout << "Student: ";
        Person::printInfo();
        cout << "School name: " << *schoolName << endl;
    }
};

int main() {
    Person* people[2];
    people[0] = new Employee("John Doe", 180, "Marketing", 12345);
    people[1] = new Student("Jane Smith", 165, "University of California");

    for (int i = 0; i < 2; i++) {
        people[i]->printInfo();
    }

    for (int i = 0; i < 2; i++) {
        delete people[i];
    }

    return 0;
}
// For multiple in heritance 
#include <iostream>
#include <string>

using namespace std;

class Faculty {
public:
    virtual void print() = 0; 
};

class Administrator : virtual public Faculty {
public:
    void print() { cout << "Administrator" << endl; }
};

class Teacher : virtual public Faculty {
public:
    void print() { cout << "Teacher" << endl; }
};
class AdministratorTeacher : public Administrator, public Teacher {
public:
    void print() { Teacher::print(); } 
};

int main() {
    Faculty* facultyArray[3];

    Administrator admin;
    Teacher teacher;
    AdministratorTeacher adminTeacher;

    facultyArray[0] = &admin;
    facultyArray[1] = &teacher;
    facultyArray[2] = &adminTeacher;

 
    for (int i = 0; i < 3; i++) {
        facultyArray[i]->print();
    }

    return 0;
}
