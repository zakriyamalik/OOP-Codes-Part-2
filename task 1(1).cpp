#include <iostream>
#include <cstring>

using namespace std;

class Person {
private:
    char* first_name;
    char* last_name;
protected:
    int age;
public:
    Person(char* fname, char* lname, int age) {
        this->first_name = new char[strlen(fname) + 1];
        strcpy(this->first_name, fname);
        this->last_name = new char[strlen(lname) + 1];
        strcpy(this->last_name, lname);
        this->age = age;
        cout << "Person() called\n";
    }

    ~Person() {
        delete[] this->first_name;
        delete[] this->last_name;
        cout << "~Person() called\n";
    }

    char* getFirstName() {
        return first_name;
    }

    char* getLastName() {
        return last_name;
    }

    int getAge() {
        return age;
    }

    void printInformation() {
        cout << first_name << " " << last_name << " is " << age << " years old" << endl;
    }
};

class Student : public Person {
private:
    float cgpa;
public:
    Student(char* fname, char* lname, int age, float cgpa) : Person(fname, lname, age) {
        this->cgpa = cgpa;
        cout << "Student() called\n";
    }

    ~Student() {
        cout << "~Student() called\n";
    }

    float getCGPA() {
        return cgpa;
    }

    void printStudent() {
        cout << getFirstName() << " " << getLastName() << " is " << age << " years old, his cgpa is " << cgpa << endl;
    }
};

class Undergraduate : public Student {
private:
    char* fyp_name;
public:
    Undergraduate(char* fname, char* lname, int age, float cgpa, char* fyp_name) : Student(fname, lname, age, cgpa) {
        this->fyp_name = new char[strlen(fyp_name) + 1];
        strcpy(this->fyp_name, fyp_name);
        cout << "Undergraduate() called\n";
    }

    ~Undergraduate() {
        delete[] this->fyp_name;
        cout << "~Undergraduate() called\n";
    }

    char* getFYPName() {
        return fyp_name;
    }
};

class Graduate : public Student {
private:
    char* thesis_topic;
public:
    Graduate(char* fname, char* lname, int age, float cgpa, char* thesis_topic) : Student(fname, lname, age, cgpa) {
        this->thesis_topic = new char[strlen(thesis_topic) + 1];
        strcpy(this->thesis_topic, thesis_topic);
        cout << "Graduate() called\n";
    }

    ~Graduate() {
        delete[] this->thesis_topic;
        cout << "~Graduate() called\n";
    }

    char* getThesisTopic() {
        return thesis_topic;
    }
};

class Faculty : public Person {
private:
    int course_count;
    int telephone_extension;
public:
    Faculty(char* fname, char* lname, int age, int course_count, int telephone_extension) : Person(fname, lname, age) {
        this->course_count = course_count;
        this->telephone_extension = telephone_extension;
        cout << "Faculty() called\n";
    }

    ~Faculty() {
        cout << "~Faculty() called\n";
    }
    int getCourseCount() {
        return course_count;
    }
    int getTelephoneExtension() {
        return telephone_extension;
    }
};
int main() {
    // Create a Person object
    Person* person = new Person("John", "Doe", 25);
    person->printInformation();

    // Create a Student object
    Student* student = new Student("Jane", "Doe", 20, 3.5);
    student->printStudent();

    // Create an Undergraduate object
    Undergraduate* undergrad = new Undergraduate("Alice", "Smith", 22, 3.8, "Robotics");
    cout << undergrad->getFYPName() << endl;

    // Create a Graduate object
    Graduate* grad = new Graduate("Bob", "Jones", 27, 3.9, "Machine Learning");
    cout << grad->getThesisTopic() << endl;

    // Create a Faculty object
    Faculty* faculty = new Faculty("Dr.", "Johnson", 40, 3, 1234);
    cout << faculty->getCourseCount() << endl;
    cout << faculty->getTelephoneExtension() << endl;

    // Delete dynamically allocated objects
    delete person;
    delete student;
    delete undergrad;
    delete grad;
    delete faculty;

    return 0;
}
