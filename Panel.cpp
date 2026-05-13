#ifndef PANEL_HPP
#define PANEL_HPP

#include "Hospital.cpp"

class Panel {

    public:

    void panel(Hospital &hospital){

        while(true){

            int choice;

            cout << "\n===== HOSPITAL MANAGEMENT SYSTEM =====" << endl;

            cout << "1. Add Patient" << endl;
            cout << "2. Add Doctor" << endl;
            cout << "3. Book Appointment" << endl;
            cout << "4. Show Patient Info" << endl;
            cout << "5. Show Doctor Info" << endl;
            cout << "6. Show Appointment Info" << endl;
            cout << "7. Show Hospital Info" << endl;
            cout << "8. Exit" << endl;

            cout << "\nEnter Choice: ";
            cin >> choice;

            switch(choice){

                // ================= ADD PATIENT =================

                case 1: {

                    int age;
                    string name, address, id;

                    cin.ignore();

                    cout << "Enter Name of the Patient: ";
                    getline(cin, name);

                    cout << "Enter Age of the Patient: ";
                    cin >> age;

                    cin.ignore();

                    cout << "Enter Address of the Patient: ";
                    getline(cin, address);

                    cout << "Enter Id of the Patient: ";
                    getline(cin, id);

                    Patient patient(name, age, address);

                    patient.setId(id);

                    hospital.addPatient(patient);

                    cout << "\nPatient Successfully Added" << endl;

                    break;
                }

                // ================= ADD DOCTOR =================

                case 2: {

                    int age;
                    string name, address, id;

                    cin.ignore();

                    cout << "Enter Name of the Doctor: ";
                    getline(cin, name);

                    cout << "Enter Age of the Doctor: ";
                    cin >> age;

                    cin.ignore();

                    cout << "Enter Address of the Doctor: ";
                    getline(cin, address);

                    cout << "Enter Id of the Doctor: ";
                    getline(cin, id);

                    Doctor doctor(name, age, address);

                    doctor.setId(id);

                    hospital.addDoctor(doctor);

                    cout << "\nDoctor Successfully Added" << endl;

                    break;
                }

                // ================= BOOK APPOINTMENT =================

                case 3: {

                    string date, time;
                    string patientId, doctorId, appointmentId;

                    cin.ignore();

                    cout << "Enter Appointment ID: ";
                    getline(cin, appointmentId);

                    cout << "Enter Patient ID: ";
                    getline(cin, patientId);

                    cout << "Enter Doctor ID: ";
                    getline(cin, doctorId);

                    try {

                        Patient& patient =
                            hospital.getPatient(patientId);

                        Doctor& doctor =
                            hospital.getDoctor(doctorId);

                        cout << "Enter Date: ";
                        getline(cin, date);

                        cout << "Enter Time: ";
                        getline(cin, time);

                        Appointment appointment(
                            appointmentId,
                            patient,
                            doctor,
                            date,
                            time
                        );

                        hospital.bookAppointment(appointment);

                        cout << "\nAppointment Booked Successfully"
                             << endl;
                    }

                    catch(runtime_error &e){

                        cout << "\nError: "
                             << e.what()
                             << endl;
                    }

                    break;
                }

                // ================= SHOW PATIENT =================

                case 4: {

                    string id;

                    cin.ignore();

                    cout << "Enter Patient ID: ";
                    getline(cin, id);

                    try {

                        hospital.getPatient(id).info();
                    }

                    catch(runtime_error &e){

                        cout << "\nError: "
                             << e.what()
                             << endl;
                    }

                    break;
                }

                // ================= SHOW DOCTOR =================

                case 5: {

                    string id;

                    cin.ignore();

                    cout << "Enter Doctor ID: ";
                    getline(cin, id);

                    try {

                        hospital.getDoctor(id).info();
                    }

                    catch(runtime_error &e){

                        cout << "\nError: "
                             << e.what()
                             << endl;
                    }

                    break;
                }

                // ================= SHOW APPOINTMENT =================

                case 6: {

                    string id;

                    cin.ignore();

                    cout << "Enter Appointment ID: ";
                    getline(cin, id);

                    try {

                        hospital.showAppointment(id).info();
                    }

                    catch(runtime_error &e){

                        cout << "\nError: "
                             << e.what()
                             << endl;
                    }

                    break;
                }

                // ================= HOSPITAL INFO =================

                case 7: {

                    hospital.info();

                    break;
                }

                // ================= EXIT =================

                case 8: {

                    cout << "\nExiting Program..." << endl;

                    return;
                }

                // ================= INVALID =================

                default: {

                    cout << "\nInvalid Choice" << endl;
                }
            }
        }
    }
};

#endif