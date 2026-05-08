#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Base class: Student
class Student {
protected:
    int rollNo;
    string name;

public:
    // Constructor with initializer list
    Student(int rollNo, const string& name)
        : rollNo(rollNo), name(name) {}

    virtual ~Student() = default;  // Virtual destructor for safety in inheritance

    void showInfo() const {
        cout << "Roll Number: " << rollNo << "\n"
             << "Name       : " << name << "\n";
    }
};

// Derived class: Computer Science Student
class ComputerScienceStudent : public Student {
private:
    double algorithms;
    double dataStructure;
    double operatingSystem;

public:
    ComputerScienceStudent(int rollNo, const string& name,
                           double alg, double ds, double os)
        : Student(rollNo, name),
          algorithms(alg),
          dataStructure(ds),
          operatingSystem(os) {}

    double averageMarks() const {
        return (algorithms + dataStructure + operatingSystem) / 3.0;
    }

    void display() const {
        showInfo();
        cout << fixed << setprecision(2)
             << "Algorithms       : " << algorithms << "\n"
             << "Data Structures  : " << dataStructure << "\n"
             << "Operating System : " << operatingSystem << "\n"
             << "Average (CS)     : " << averageMarks() << "\n\n";
    }
};

// Derived class: Mathematics Student
class MathematicsStudent : public Student {
private:
    double calculus;
    double algebra;
    double statistics;

public:
    MathematicsStudent(int rollNo, const string& name,
                       double calc, double alg, double stat)
        : Student(rollNo, name),
          calculus(calc),
          algebra(alg),
          statistics(stat) {}

    double averageMarks() const {
        return (calculus + algebra + statistics) / 3.0;
    }

    void display() const {
        showInfo();
        cout << fixed << setprecision(2)
             << "Calculus       : " << calculus << "\n"
             << "Algebra        : " << algebra << "\n"
             << "Statistics     : " << statistics << "\n"
             << "Average (Math) : " << averageMarks() << "\n\n";
    }
};

int main() {
    ComputerScienceStudent csStudent(101, "Prakriti", 84.5, 75.0, 65.0);
    MathematicsStudent mathStudent(102, "Pranil", 99.0, 89.0, 87.0);

    cout << "=== Computer Science Student ===\n";
    csStudent.display();

    cout << "=== Mathematics Student ===\n";
    mathStudent.display();

    return 0;
}

