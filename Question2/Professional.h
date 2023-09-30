#ifndef PROFESSIONAL_H_
#define PROFESSIONAL_H_

#include "Employee.h"

class Professional : public Employee {
    public:
        Professional(string name_in, double hW, double hR){}
        
        /**calculates weekly salary */
        weeklySal() const;

        /**calculates health care contributions*/
        healthCare() const;

        /**calculates vacation days accrued*/
        vacation() const;
        
}


#endif