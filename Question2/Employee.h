#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_
#include <string>
using namespace std;


class Employee{
    private:
        double contribution;
        double vacationDays;
        string name;
        
    public:
        /**constructor*/
        Employee(string name_in): name(name_in), contribution(0), vacationDays(0){}

        /**destructor*/
        virtual ~Employee(){}

        /**calculates weekly salary */
        virtual double weeklySal() const = 0;

        /**calculates health care contributions*/
        virtual double healthCare() const = 0;

        /**calculates vacation days*/
        virtual double vacation() const = 0;

        /**gets name
         * @return name
        */
        string get_name() const{return name;}

        /**gets vacation days
         * @return vacation days
        */
        double get_vacationDays ()const{return vacationDays;}

        /**sets vacation days*/
        void set_vacationDays(double vacationDays){
            this->vacationDays = vacationDays;
        }

        /**gets health carecontribution
         * @return contribution amount
         */
        double get_contribution() const{return contribution;}

        /**sets contribution amount*/
        void set_contribution(double contribution){
            this->contribution = contribution;
        }
};

#endif