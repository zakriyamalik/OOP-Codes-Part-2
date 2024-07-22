#include <iostream>
using namespace std;

class Faculty {
public:
    virtual void print() {
        cout << "Faculty" << endl;
    }
    virtual int get_id() = 0; 
};

class Administrator : virtual public Faculty { 
public:
    void print() {
        cout << "Administrator" << endl;
    }
    int get_id() {
        return 1001;
    }
};

class Teacher : virtual public Faculty { 
public:
    void print() {
        cout << "Teacher" << endl;
    }
    int get_id() {
        return 1002;
    }
};

class AdministratorTeacher : public Administrator, public Teacher {
public:
    void print() {
        cout << "AdministratorTeacher" << endl;
    }
    int get_id() {
        return Administrator::get_id();
    }
};

int main() {
    Faculty* fac_arr[3];
    fac_arr[0] = new AdministratorTeacher();
    fac_arr[1] = new Administrator();
    fac_arr[2] = new Teacher();

    for (int i = 0; i < 3; i++) {
        fac_arr[i]->print();
        cout << "ID: " << fac_arr[i]->get_id() << endl;
    }

    for (int i = 0; i < 3; i++) {
        delete fac_arr[i];
    }

    return 0;
}
