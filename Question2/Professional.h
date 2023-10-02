#ifndef PROFESSIONAL_H_
#define PROFESSIONAL_H_
#include "Employee.h"

using namespace std;

class Professional : public Employee {
    private:
    double salary;
    int const vacationDays = 15; //set number of vacation days
    double const contributionPercent = 0.08; //8% is taken out for health insurance

    public:
        /**constructor*/
        Professional(string name_in, double salary_in);

        /**calculates weekly salary 
         * @return weekly salary
        */
        double weeklySal() const;

        /**calculates healthcare contributions 
         * @return amount contributed for insurance
        */
        double healthCare() const;

        /**calculates vacation days
         * @return vacaction days
        */
        double vacation() const;
};


#endif