#ifndef PROFESSIONAL_H_
#define PROFESSIONAL_H_
#include "Employee.h"

using namespace std;

class Professional : public Employee {
    private:
        double salary;

    public:
        /**constructor*/
        Professional(string name_in, double salary_in);

        /**calculates weekly salary 
         * @return weekly salary
        */
        double weeklySal() const override;

        /**calculates healthcare contributions 
         * @return amount contributed for insurance
        */
        double healthCare() const override;

        /**calculates vacation days
         * @return vacaction days
        */
        double vacation() const override;
};


#endif