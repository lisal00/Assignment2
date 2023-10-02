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
        Employee(string name_in, double hW, double hR): name(name_in), hourlyRate(hR), hoursWorked(hW){}

        /**destructor*/
        virtual ~Employee(){}

        /**calculates weekly salary */
        virtual double weeklySal() const = 0;

        /**calculates health care contributions*/
        virtual double healthCare() const = 0;

        /**calculates vacation days*/
        virtual double vacation() const = 0;

        /**gets hours worked
         * @return hours worked
        */
        double get_hoursWorked() const{
            return hoursWorked;
        }
        /**gets hourly rate
         * @return hourly rate
        */
        double get_hourlyRate() const{
            return hourlyRate;
        }
        /**gets name
         * @return name
        */
        string get_name() const{
            return name;
        }
};

#endif