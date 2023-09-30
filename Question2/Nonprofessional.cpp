#include "Nonprofessional.h"
using namespace std;

/**calculates weekly salary 
 * @return weekly salary
*/
double Nonprofessional::weeklySal() const{
    return get_hourlyRate() * get_hoursWorked();
}

double Nonprofessional::healthCare() const{
    return 12;
}

double Nonprofessional::vacation() const{
    return ((15*get_hoursWorked())/52);
}
