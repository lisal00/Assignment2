#include "Nonprofessional.h"
using namespace std;

/**constructor*/
Nonprofessional::Nonprofessional(string name_in, double hW, double hR):Employee(name_in){
    hoursWorked = hW;
    hourlyRate = hR;
    set_vacationDays((15*hoursWorked)/52);
    set_contribution(50);
}

/**calculates weekly salary 
 * @return weekly salary
*/
double Nonprofessional::weeklySal() const{
    return hoursWorked*hourlyRate;
}

/**calculates healthcare contributions 
 * @return flat amount contributed for insurance
*/
double Nonprofessional::healthCare() const{
    return get_contribution();
}

/**calculates vacation days accrued
 * @return vacation days 
*/
double Nonprofessional::vacation() const{
    return get_vacationDays();
}
