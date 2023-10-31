//
//  Employee.h
//  02_lab1
//
//  Created by Fabio Marcos De Abreu Santos on 10/30/23.
//

#ifndef Employee_h
#define Employee_h
#include <stdio.h>
class Employee {
private:
    int salary;
public:
    Employee() : salary(1000) {}
    Employee(int sal) : salary(sal) {}
    int getSalary()const { return salary; }
    int getTotal()const { return getSalary(); }
};

#endif /* Employee_h */
