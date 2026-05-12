#ifndef DOCTOR_CPP
#define DOCTOR_CPP

#include "Person.cpp"

class Doctor : public Person {
    public:

    Doctor(string name, int age, string address){
        this->name = name;
        this->age = age;
        this->address = address;
    }

    void info() {
        cout << "[ Id: " << getId()
             << ", Name: " << this->name
             << ", Age: " << this->age
             << ", Role: Doctor"
             << ", Address: " << this->address
             << " ]" << endl;
    }
};

#endif