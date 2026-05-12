# Hospital Management System (C++)

A simple console-based Hospital Management System built using Object-Oriented Programming in C++.

This project was created to practice and understand core OOP concepts like:

- Classes & Objects
- Inheritance
- Encapsulation
- Composition
- Constructors
- Initializer Lists
- Exception Handling
- File Separation using Headers
- Vectors and Object Management

---

# Features

- Add Patients
- Add Doctors
- Book Appointments
- Retrieve Patient Details
- Retrieve Doctor Details
- View Appointment Information
- Hospital Summary Information
- Exception Handling for Invalid Searches

---

# Project Structure

```txt
Hospital Management System/
│
├── Person.hpp
├── Patient.hpp
├── Doctor.hpp
├── Appointment.hpp
├── Hospital.hpp
│
└── main.cpp
```

---

# Technologies Used

- C++
- OOP Concepts
- STL Vector
- Exception Handling

---

# OOP Concepts Used

## Inheritance

```cpp
class Patient : public Person
```

## Composition

```cpp
Hospital has Patients, Doctors, and Appointments
```

## Encapsulation

Getter and setter methods for protected data.

## Initializer Lists

```cpp
Appointment(...) : patient(patient), doctor(doctor)
```

---

# How to Run

## Compile

```bash
g++ main.cpp -o main
```

## Run

### Windows

```bash
.\main
```

### Linux / Mac

```bash
./main
```

---

# Sample Output

```txt
[ Id: pa200, Name: Mukesh, Age: 34, Role: Patient, Address: Gurugram ]

[ Id: do100, Name: R.K. Yadav, Age: 49, Role: Doctor, Address: Patna ]

===== APPOINTMENT DETAILS =====
Appointment ID : ap101
Status         : Pending
Date           : 12-05-2026
Time           : 10:30 AM
```

---

# Future Improvements

- File Handling
- Login System
- Billing System
- Doctor Specialization
- Appointment Cancellation
- Polymorphism using Virtual Functions
- Database Integration
- GUI Version

---

# Learning Outcome

This project helped in understanding how real-world applications can be structured using Object-Oriented Programming principles in C++.

---

# Author

Prince Pandey