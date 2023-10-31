#include <iostream>
#include <string>

class Professor {
protected:
    int id;
    std::string name;
    double salary;
    int hours;
    std::string title;

public:
    // Constructor
    Professor(int id, const std::string& name, double salary, const std::string& title)
        : id(id), name(name), salary(salary), title(title) {
        hours = 0; // Initialize to 0, as it's abstract and will be set in derived classes
    }

    // Getters
    int getId() const { return id; }
    std::string getName() const { return name; }
    double getSalary() const { return salary; }
    int getHours() const { return hours; }
    std::string getTitle() const { return title; }

    // Setters
    void setId(int newId) { id = newId; }
    void setName(const std::string& newName) { name = newName; }
    void setSalary(double newSalary) { salary = newSalary; }
    void setHours(int newHours) { hours = newHours; }
    void setTitle(const std::string& newTitle) { title = newTitle; }

    // Abstract method
    virtual double calculateSalary() const = 0;
};

class FullTimeProfessor : public Professor {
public:
    // Constructor
    FullTimeProfessor(int id, const std::string& name, double salary, const std::string& title)
        : Professor(id, name, salary, title) {
        hours = 40; // Initialize hours to 40 for FullTimeProfessors
    }

    // Override calculateSalary
    double calculateSalary() const {
        if (title == "Master")
            return salary * 1.5;
        else if (title == "PHD")
            return salary * 2;
        else
            return salary;
    }
};

class AdjunctProfessor : public Professor {
public:
    // Constructor
    AdjunctProfessor(int id, const std::string& name, double salary, int hours, const std::string& title)
        : Professor(id, name, salary, title) {
        this->hours = hours; // Initialize hours for AdjunctProfessors
    }

    // Override calculateSalary
    double calculateSalary() const {
        return salary * hours;
    }
};

int main() {
    // Create instances of FullTimeProfessor and AdjunctProfessor
    FullTimeProfessor fullTimeProf(1, "John Doe", 30000, "PHD");
    AdjunctProfessor adjunctProf(2, "Jane Smith", 5000, 20, "Master");

    // Calculate and display salaries
    std::cout << "Full-Time Professor Salary: $" << fullTimeProf.calculateSalary() << std::endl;
    std::cout << "Adjunct Professor Salary: $" << adjunctProf.calculateSalary() << std::endl;

    return 0;
}