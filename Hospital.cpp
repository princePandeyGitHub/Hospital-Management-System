#ifndef HOSPITAL_CPP
#define HOSPITAL_CPP

#include <vector>
#include <stdexcept>
#include "Appointment.cpp"
#include "Bill.cpp"

class Hospital {
    public:
        string name;
        string address;

    protected:
        vector<Patient> patients;
        vector<Doctor> doctors;
        vector<Appointment> appointments;
        vector<Bill> bills;

    public:

    Hospital(string name, string address){
        this->name = name;
        this->address = address;
    }

    // ================= PATIENTS =================

    void addPatient(Patient &patient){
        if(patient.getId() == "Not available"){
            cout << "Request Denied! Patient should be assigned a Unique Id before adding them to Hospital." << endl;
            return;
        }
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
        if(doctor.getId() == "Not available"){
            cout << "Request Denied! Doctor should be assigned a Unique Id before adding them to Hospital." << endl;
            return;
        }
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

    // ------------------ Bills ------------------
    void addBill(Bill& bill){
        bills.push_back(bill);
    }

    Bill& getBill(string id){
        for(int i=0; i<bills.size(); i++){
            if(bills[i].getBillId() == id){
                return bills[i];
            }
        }
        throw runtime_error("Bill Not Found");
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