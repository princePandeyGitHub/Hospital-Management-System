#ifndef BILL_CPP
#define BILL_CPP

#include "Appointment.cpp"
class Bill {
    private:
        string billId;

        Appointment appointment;

        double consultationFee;
        double medicineFee;
        double roomFee;

        double totalAmount;

        string paymentStatus;

    public:
            Bill(
                string billId,
                Appointment& appointment,
                double consultationFee,
                double medicineFee,
                double roomFee
            )
            : appointment(appointment)
            {
                this->billId = billId;

                this->consultationFee = consultationFee;
                this->medicineFee = medicineFee;
                this->roomFee = roomFee;

                this->totalAmount =
                    consultationFee +
                    medicineFee +
                    roomFee;

                this->paymentStatus = "Pending";
            }
            
            //print bill
            void info(){
                cout << "Bill ID: " << billId << endl;
                cout << "Patient: " << appointment.getPatientName() << endl;
                cout << "Doctor: " << appointment.getDoctorName() << endl;
                cout << "Total: " << totalAmount << endl;
                cout << "Payment Status: " << paymentStatus << endl;
            }

            void markPaid() {
                this->paymentStatus = "Paid";
            }

            string getBillId() {
                return this->billId;
            }
};

#endif