#include "Professional.h"
using namespace std;

Professional::Professional(string name_in, double salary_in):Employee(name_in, 0, 0){
    salary = salary_in;
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
    return weeklySal() * contributionPercent;
}
/**calculates vacation days accrued
 * @return vacation days 
*/
double Professional::vacation() const{
    return vacationDays; 
}
