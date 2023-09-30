#include "Professional.h"



/**calculates weekly salary
 * @return weekly salary
*/
double Professional::weeklySal() const{
    return salary / 52;
}
/**calculates healthcare contributions */
double Professional::healthCare() const{
    return salary / (salary*1.5);
}
/**calculates vacation days accrued
 * @return vacation days: salary / 260
*/
double Professional::vacation() const{
    return 15; 
}
