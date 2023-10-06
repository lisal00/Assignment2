#include "Professional.h"
using namespace std;

/**Constructor*/
Professional::Professional(string name_in, double salary_in):Employee(name_in){
    salary = salary_in;
    set_vacationDays(15);
    set_contribution(0.08);
}

/**calculates weekly salary
 * @return weekly salary
*/
double Professional::weeklySal() const{
    return salary / 52;
}

/**calculates healthcare contributions 
 * @return amount contributed for insurance
*/
double Professional::healthCare() const{
    return weeklySal() * get_contribution();
}

/**calculates vacation days accrued
 * @return vacation days 
*/
double Professional::vacation() const{
    return get_vacationDays(); 
}
