#include "Employee.h"
#include "Professional.h"
#include "Nonprofessional.h"
#include <iomanip>
#include <iostream>

using namespace std;

int main(){
    Professional Worker0090("Emma Johnson", 55000.00);//init professional worker
    cout << setprecision (2) << fixed;

    cout << "Professional " << Worker0090.get_name() << " has a weekly salary of $" 
    << Worker0090.weeklySal() << " and $" << Worker0090.healthCare() 
    << " will be taken out for insurance. Every professional has a fixed number of vacation days: " 
    << setprecision(0) << Worker0090.vacation() << ".\n";

    Nonprofessional Worker3284("Evelyn Ma", 44.50, 22.02);//init nonprofesional worker
    cout << setprecision (2) << fixed;
    cout << "\nNonprofessional " << Worker3284.get_name() << " has a weekly salary of $"
    << Worker3284.weeklySal() << " and a flat rate of $" << Worker3284.healthCare() 
    << " will be taken out for insurance. They have " << Worker3284.vacation() << " hours of vacation.";

    return 0;
}
