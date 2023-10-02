#ifndef PROFESSIONAL_H_
#define PROFESSIONAL_H_
#include "Employee.h"

using namespace std;

class Professional : public Employee {
    private:
    double salary;

    public:
        Professional(string name_in, double hW, double salary):Employee(name_in, hW){
            salary = 0;
        }
        
        /**calculates weekly salary 
         * @return weekly salary
        */
        double weeklySal() const;

        /**calculates health care contributions*/
        double healthCare() const;

        /**calculates vacation days
         * @return vacaction days
        */
        double vacation() const;
        
};


#endif