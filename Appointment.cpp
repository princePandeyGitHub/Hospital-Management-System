#ifndef APPOINTMENT_CPP
#define APPOINTMENT_CPP

#include "Patient.cpp"
#include "Doctor.cpp"

class Appointment {
    private:
        string appointmentId;
        Patient patient;
        Doctor doctor;
        string date;
        string time;
        string status;

    public:

    Appointment(
        string appointmentId,
        Patient& patient,
        Doctor& doctor,
        string date,
        string time
    ) : patient(patient), doctor(doctor)
    {
        this->appointmentId = appointmentId;
        this->date = date;
        this->time = time;
        this->status = "Pending";
    }

    // setter
    void setStatus(string status){
        this->status = status;
    }

    // getter
    string getAppointmentId(){
        return this->appointmentId;
    }

    void info(){
        cout << "\n===== APPOINTMENT DETAILS =====" << endl;

        cout << "Appointment ID : " << this->appointmentId << endl;
        cout << "Status         : " << this->status << endl;
        cout << "Date           : " << this->date << endl;
        cout << "Time           : " << this->time << endl;

        cout << "\nPatient Details:" << endl;
        patient.info();

        cout << "\nDoctor Details:" << endl;
        doctor.info();

        cout << "================================\n" << endl;
    }
};

#endif