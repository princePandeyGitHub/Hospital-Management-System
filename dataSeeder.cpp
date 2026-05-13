#ifndef DATA_SEEDER_HPP
#define DATA_SEEDER_HPP

#include "Hospital.cpp"

void seedData(Hospital &hospital){

    // ================= PATIENTS =================

    Patient p1("Rakesh Sharma", 22, "Delhi");
    p1.setId("pa101");

    Patient p2("Mukesh Verma", 34, "Gurugram");
    p2.setId("pa102");

    Patient p3("Anjali Singh", 27, "Noida");
    p3.setId("pa103");

    Patient p4("Priya Yadav", 31, "Lucknow");
    p4.setId("pa104");

    Patient p5("Rahul Mehta", 25, "Jaipur");
    p5.setId("pa105");

    hospital.addPatient(p1);
    hospital.addPatient(p2);
    hospital.addPatient(p3);
    hospital.addPatient(p4);
    hospital.addPatient(p5);

    // ================= DOCTORS =================

    Doctor d1("Dr. R.K. Yadav", 49, "Patna");
    d1.setId("do101");

    Doctor d2("Dr. Amit Sharma", 41, "Delhi");
    d2.setId("do102");

    Doctor d3("Dr. Neha Kapoor", 38, "Mumbai");
    d3.setId("do103");

    hospital.addDoctor(d1);
    hospital.addDoctor(d2);
    hospital.addDoctor(d3);

    // ================= APPOINTMENTS =================

    Appointment a1(
        "ap101",
        hospital.getPatient("pa101"),
        hospital.getDoctor("do101"),
        "15-05-2026",
        "10:00 AM"
    );

    Appointment a2(
        "ap102",
        hospital.getPatient("pa102"),
        hospital.getDoctor("do102"),
        "15-05-2026",
        "11:30 AM"
    );

    Appointment a3(
        "ap103",
        hospital.getPatient("pa103"),
        hospital.getDoctor("do103"),
        "16-05-2026",
        "01:00 PM"
    );

    Appointment a4(
        "ap104",
        hospital.getPatient("pa104"),
        hospital.getDoctor("do101"),
        "16-05-2026",
        "03:30 PM"
    );

    hospital.bookAppointment(a1);
    hospital.bookAppointment(a2);
    hospital.bookAppointment(a3);
    hospital.bookAppointment(a4);

    // --------------------- Bills ----------------------
    Bill b1("b101",a1,300,250,0);
    Bill b2("b102",a2,300,550,1000);
    Bill b3("b103",a3,300,250,0);

    hospital.addBill(b1);
    hospital.addBill(b2);
    hospital.addBill(b3);

    cout << "\nDummy Data Loaded Successfully\n" << endl;
}

#endif