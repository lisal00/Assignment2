#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_
#include <string>
using namespace std;


class Employee{
    private:
        double hoursWorked;
        double hourlyRate;
        string name;
        
    public:
        /**constructor*/
        Employee(string name_in, double hW, double hR){
            hoursWorked = hW;
            hourlyRate = hR;
            name = name_in;
        }

        /**destructor*/
        virtual ~Employee(){}

        /**calculates weekly salary */
        virtual double weeklySal() const = 0;

        /**calculates health care contributions*/
        virtual double healthCare() const = 0;

        /**calculates vacation days accrued*/
        virtual double vacation() const = 0;

        double get_hoursWorked() const{
            return hoursWorked;
        }
        double get_hourlyRate() const{
            return hourlyRate;
        }

};

#endif