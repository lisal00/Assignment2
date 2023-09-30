#ifndef NONPROFESSIONAL_H_
#define NONPROFESSIONAL_H_
#include "Employee.h"
using namespace std;

class Nonprofessional : public Employee{
    public:
    /**construtor*/
    Nonprofessional(string name_in, double hW, double hR):Employee(name_in, hW, hR){}

    double weeklySal() const;

    double healthCare() const;

    double vacation() const;
};

#endif