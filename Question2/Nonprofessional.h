#ifndef NONPROFESSIONAL_H_
#define NONPROFESSIONAL_H_
#include "Employee.h"
using namespace std;

class Nonprofessional : public Employee{
    private:
        double hoursWorked;
        double hourlyRate;
    
    public:
        /**construtor*/
        Nonprofessional(string name_in, double hW, double hR);

        /**calculates weekly salary 
         * @return weekly salary
        */
        double weeklySal() const override;

        /**calculates healthcare contributions 
         * @return flat amount contributed for insurance
        */
        double healthCare() const override;

        /**calculates vacation days accrued
         * @return vacation days 
        */
        double vacation() const override;
};

#endif