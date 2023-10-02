#ifndef NONPROFESSIONAL_H_
#define NONPROFESSIONAL_H_
#include "Employee.h"
using namespace std;

class Nonprofessional : public Employee{
    private:
    double const contributionAmt = 50.00;
    
    public:
    /**construtor*/
    Nonprofessional(string name_in, double hW, double hR);

    /**calculates weekly salary 
     * @return weekly salary
    */
    double weeklySal() const;

    /**calculates healthcare contributions 
     * @return flat amount contributed for insurance
    */
    double healthCare() const;

    /**calculates vacation days accrued
     * @return vacation days 
    */
    double vacation() const;
};

#endif