#include "Employee.h"

double Professional::weeklySal() const{
    return get_hourlyRate() * get_hoursWorked();
}

