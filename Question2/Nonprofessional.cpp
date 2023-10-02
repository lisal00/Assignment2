#include "Nonprofessional.h"
using namespace std;

/**constructor*/
Nonprofessional::Nonprofessional(string name_in, double hW, double hR):Employee(name_in, hW, hR){}

/**calculates weekly salary 
 * @return weekly salary
*/
double Nonprofessional::weeklySal() const{
    return get_hourlyRate() * get_hoursWorked();
}

/**calculates healthcare contributions 
 * @return flat amount contributed for insurance
*/
double Nonprofessional::healthCare() const{
    return contributionAmt;
}

/**calculates vacation days accrued
 * @return vacation days 
*/
double Nonprofessional::vacation() const{
    return ((15*get_hoursWorked())/52);
}
