//#include <iostream>
//#include <ctime>
//
//using namespace std;
//
//class Person {
//protected:
//    string name;
//    string address;
//    string email;
//
//public:
//    Person(string name, string address, string email) {
//        this->name = name;
//        this->address = address;
//        this->email = email;
//    }
//
//    string getName() {
//        return name;
//    }
//
//    string getAddress() {
//        return address;
//    }
//
//    string getEmail() {
//        return email;
//    }
//};
//
//class Patient : public Person {
//private:
//    string patientId;
//    Appointment** appointments;
//    int numAppointments;
//
//public:
//    Patient(string name, string address, string email, string patientId) : Person(name, address, email) {
//        this->patientId = patientId;
//        this->appointments = new Appointment * [10];
//        this->numAppointments = 0;
//    }
//
//    void addAppointment(Appointment* appointment) {
//        appointments[numAppointments] = appointment;
//        numAppointments++;
//    }
//
//    Appointment** getAppointments() {
//        return appointments;
//    }
//
//    int getNumAppointments() {
//        return numAppointments;
//    }
//
//    string getPatientId() {
//        return patientId;
//    }
//};
//
//class Doctor : public Person {
//private:
//    string employeeId;
//    Appointment** appointments;
//    int numAppointments;
//    Department* department;
//
//public:
//    Doctor(string name, string address, string email, string employeeId, Department* department) : Person(name, address, email) {
//        this->employeeId = employeeId;
//        this->department = department;
//        this->appointments = new Appointment * [10];
//        this->numAppointments = 0;
//    }
//
//    void addAppointment(Appointment* appointment) {
//        appointments[numAppointments] = appointment;
//        numAppointments++;
//    }
//
//    Appointment** getAppointments() {
//        return appointments;
//    }
//
//    int getNumAppointments() {
//        return numAppointments;
//    }
//
//    string getEmployeeId() {
//        return employeeId;
//    }
//
//    Department* getDepartment() {
//        return department;
//    }
//};
//
//class Appointment {
//private:
//    string appointmentId;
//    time_t appointmentDateTime;
//    Patient* patient;
//    Doctor* doctor;
//
//public:
//    Appointment(string appointmentId, time_t appointmentDateTime, Patient* patient, Doctor* doctor) {
//        this->appointmentId = appointmentId;
//        this->appointmentDateTime = appointmentDateTime;
//        this->patient = patient;
//        this->doctor = doctor;
//    }
//
//    string getAppointmentId() {
//        return appointmentId;
//    }
//
//    time_t getAppointmentDateTime() {
//        return appointmentDateTime;
//    }
//
//    Patient* getPatient() {
//        return patient;
//    }
//
//    Doctor* getDoctor() {
//        return doctor;
//    }
//};
//
//class Department {
//private:
//    string departmentName;
//    Doctor** doctors;
//    int numDoctors;
//
//public:
//    Department(string departmentName) {
//        this->departmentName = departmentName;
//        this->doctors = new Doctor * [10];
//        this->numDoctors = 0;
//    }
//
//    void addDoctor(Doctor* doctor) {
//        doctors[numDoctors] = doctor;
//        numDoctors++;
//    }
//
//    Doctor** getDoctors() {
//        return doctors;
//    }
//
//    int getNumDoctors() {
//        return numDoctors;
//    }
//
//    string getDepartmentName() {
//        return departmentName;
//    }
//};
//int main() {
//    // Create a new department
//    Department* department = new Department("Cardiology");
//
//    // Create new doctors and add them to the department
//    Doctor* doctor1 = new Doctor("John Smith", "123 Main St.", "johnsmith@example.com", "EMP001", department);
//    department->addDoctor(doctor1);
//
//    Doctor* doctor2 = new Doctor("Jane Doe", "456 Elm St.", "janedoe@example.com", "EMP002", department);
//    department->addDoctor(doctor2);
//
//    // Create new patients
//    Patient* patient1 = new Patient("Bob Johnson", "789 Oak St.", "bobjohnson@example.com", "PAT001");
//    Patient* patient2 = new Patient("Sarah Lee", "987 Pine St.", "sarahlee@example.com", "PAT002");
//
//    // Create new appointments
//    Appointment* appointment1 = new Appointment("APP001", time(NULL) + 86400, patient1, doctor1);
//    Appointment* appointment2 = new Appointment("APP002", time(NULL) + 172800, patient2, doctor2);
//    Appointment* appointment3 = new Appointment("APP003", time(NULL) + 259200, patient1, doctor2);
//
//    // Add appointments to patients and doctors
//    patient1->addAppointment(appointment1);
//    patient1->addAppointment(appointment3);
//    patient2->addAppointment(appointment2);
//
//    doctor1->addAppointment(appointment1);
//    doctor2->addAppointment(appointment2);
//    doctor2->addAppointment(appointment3);
//
//    // Output appointment information
//    cout << "Appointments:\n";
//    cout << "Appointment 1: " << appointment1->getAppointmentId() << ", " << asctime(localtime(&appointment1->getAppointmentDateTime()));
//    cout << "Patient: " << appointment1->getPatient()->getName() << "\n";
//    cout << "Doctor: " << appointment1->getDoctor()->getName() << "\n\n";
//
//    cout << "Appointment 2: " << appointment2->getAppointmentId() << ", " << asctime(localtime(&appointment2->getAppointmentDateTime()));
//    cout << "Patient: " << appointment2->getPatient()->getName() << "\n";
//    cout << "Doctor: " << appointment2->getDoctor()->getName() << "\n\n";
//
//    cout << "Appointment 3: " << appointment3->getAppointmentId() << ", " << asctime(localtime(&appointment3->getAppointmentDateTime()));
//    cout << "Patient: " << appointment3->getPatient()->getName() << "\n";
//    cout << "Doctor: " << appointment3->getDoctor()->getName() << "\n\n";
//
//    // Output doctor information
//    cout << "Doctors:\n";
//    cout << "Doctor 1: " << doctor1->getName() << ", " << doctor1->getEmployeeId() << ", " << doctor1->getDepartment()->getDepartmentName() << "\n";
//    cout << "Appointments:\n";
//    for (int i = 0; i < doctor1->getNumAppointments(); i++) {
//        cout << "Appointment " << i + 1 << ": " << doctor1->getAppointments()[i]->getAppointmentId() << ", " << asctime(localtime(Doctor.getAppointments()[i]->getAppointmentDateTime())) << "\n";
//    }
//    cout << "\n";
//    cout << "Doctor 2: " << doctor2->getName() << ", " << doctor2->getEmployeeId() << ", " << doctor2->getDepartment()->getDepartmentName() << "\n";
//    cout << "Appointments:\n";
//    for (int i = 0; i < doctor2->getNumAppointments(); i++) {
//        cout << "Appointment " << i + 1 << ": " << doctor2->getAppointments()[i]->getAppointmentId() << ", " << asctime(localtime(&doctor2->getAppointments()[i]->getAppointmentDateTime())) << "\n";
//    }
//    cout << "\n";
//}