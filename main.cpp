#include "Hospital.cpp"

int main(){

    try {

        // Hospital
        Hospital aiims("AIIMS Hospital", "Delhi");

        // Patients
        Patient rakesh("Rakesh", 20, "Delhi");
        Patient mukesh("Mukesh", 34, "Gurugram");

        // Doctor
        Doctor yadav("R.K. Yadav", 49, "Patna");

        // IDs
        rakesh.setId("pa100");
        mukesh.setId("pa200");
        yadav.setId("do100");

        // Add to hospital
        aiims.addPatient(rakesh);
        aiims.addPatient(mukesh);
        aiims.addDoctor(yadav);

        // Create appointment
        Appointment ap1(
            "ap101",
            rakesh,
            yadav,
            "12-05-2026",
            "10:30 AM"
        );

        // Book appointment
        aiims.bookAppointment(ap1);

        // Print details
        aiims.getPatient("pa200").info();

        cout << endl;

        aiims.getDoctor("do100").info();

        cout << endl;

        aiims.showAppointment("ap101").info();

        aiims.info();
    }

    catch(runtime_error &e){
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}