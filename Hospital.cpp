#ifndef HOSPITAL_CPP
#define HOSPITAL_CPP

#include <vector>
#include <stdexcept>
#include "Appointment.cpp"

class Hospital {
    public:
        string name;
        string address;

    protected:
        vector<Patient> patients;
        vector<Doctor> doctors;
        vector<Appointment> appointments;

    public:

    Hospital(string name, string address){
        this->name = name;
        this->address = address;
    }

    // ================= PATIENTS =================

    void addPatient(Patient &patient){
        patients.push_back(patient);
    }

    Patient& getPatient(string id){

        for(int i=0; i<patients.size(); i++){

            if(patients[i].getId() == id){
                return patients[i];
            }
        }

        throw runtime_error("Patient Not Found");
    }

    // ================= DOCTORS =================

    void addDoctor(Doctor &doctor){
        doctors.push_back(doctor);
    }

    Doctor& getDoctor(string id){

        for(int i=0; i<doctors.size(); i++){

            if(doctors[i].getId() == id){
                return doctors[i];
            }
        }

        throw runtime_error("Doctor Not Found");
    }

    // ================= APPOINTMENTS =================

    void bookAppointment(Appointment &appointment){
        appointments.push_back(appointment);
    }

    Appointment& showAppointment(string id){

        for(int i=0; i<appointments.size(); i++){

            if(appointments[i].getAppointmentId() == id){
                return appointments[i];
            }
        }

        throw runtime_error("Appointment Not Found");
    }

    // ================= COUNTS =================

    int getPatientsCount(){
        return patients.size();
    }

    int getDoctorsCount(){
        return doctors.size();
    }

    int getAppointmentsCount(){
        return appointments.size();
    }

    // ================= HOSPITAL INFO =================

    void info(){

        cout << "\n===== HOSPITAL DETAILS =====" << endl;

        cout << "Hospital Name : " << this->name << endl;
        cout << "Address       : " << this->address << endl;
        cout << "Patients      : " << getPatientsCount() << endl;
        cout << "Doctors       : " << getDoctorsCount() << endl;
        cout << "Appointments  : " << getAppointmentsCount() << endl;

        cout << "=============================\n" << endl;
    }
};

#endif