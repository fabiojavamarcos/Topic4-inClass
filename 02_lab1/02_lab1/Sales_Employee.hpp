//
//  Sales_Employee.hpp
//  02_lab1
//
//  Created by Fabio Marcos De Abreu Santos on 10/30/23.
//

#ifndef Sales_Employee_hpp
#define Sales_Employee_hpp

#include <stdio.h>
#include "Employee.h"

class Sales_Employee : Employee {
private:
    int bonus;
public:
    Sales_Employee() : Employee() { bonus = 100; }
    Sales_Employee(int sal) : Employee(sal) { bonus = 200; }
    Sales_Employee(int sal, int bon) : Employee(sal) { bonus = bon; }
    int getBonus()const { return bonus; }
    int getTotal()const { return getSalary() + bonus; }
};
#endif /* Sales_Employee_hpp */
