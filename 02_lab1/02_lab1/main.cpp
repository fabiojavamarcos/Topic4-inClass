//
//  main.cpp
//  02_lab1
//
//  Created by Fabio Marcos De Abreu Santos on 10/30/23.
//

#include <iostream>
#include "Employee.h"
#include "Sales_Employee.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, Inheritance!\n";
    Employee e1;
    Employee e2(2000);
    
    std::cout << "e1: " << e1.getSalary() << std::endl;
    std::cout << "e2: " << e2.getSalary() << std::endl;
    
    Sales_Employee se1(2000, 300);
    Sales_Employee se2(1500);
    Sales_Employee se3;
    
    std::cout << "se1: " << se1.getTotal() << std::endl;
    std::cout << "se2: " << se2.getTotal() << std::endl;
    std::cout << "se3: " << se3.getTotal() << std::endl;
    return 0;
}
