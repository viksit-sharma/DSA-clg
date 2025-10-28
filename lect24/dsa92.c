#include <stdio.h>
struct Addresses{
    int pinCode;
};
struct Student{
    int roll;
    char name[20];
};
struct Games{
    char name[10];
};

void main() {
    struct Addresses a1;
    a1.pinCode = 482001;

    // struct Games g1;
    // g1.name = "Gta V";

    // struct Student s1;
    // s1.roll = 1373;
    // s1.name = "Smarth";
}