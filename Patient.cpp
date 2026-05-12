#ifndef PATIENT_CPP
#define PATIENT_CPP

#include "Person.cpp"

class Patient : public Person {
    public:

    Patient(string name, int age, string address){
        this->name = name;
        this->age = age;
        this->address = address;
    }

    void info() {
        cout << "[ Id: " << getId()
             << ", Name: " << this->name
             << ", Age: " << this->age
             << ", Role: Patient"
             << ", Address: " << this->address
             << " ]" << endl;
    }
};

#endif