#ifndef PERSON_CPP
#define PERSON_CPP

#include <iostream>
#include <string>
using namespace std;

class Person {
    public:
        string name;
        int age;
        string address;

    protected:
        string id = "Not available";

    public:
        void setId(string id){
            this->id = id;
        }

        string getId(){
            return this->id;
        }
};

#endif