#include <iostream>
#include <string>
using namespace std;
class Teacher {
protected:
    int tid;
    string subject;

public:
    Teacher(int tid=0, const string& subject = "")
        : tid(tid), subject(subject) {}

    void readTeacher() {
        cout<<"Enter Teacher ID:";
        cin>>tid;
        cout<<"Enter Subject:";
        cin>>subject;
    }

    void displayTeacher() const {
        cout<<"Teacher ID:"<<tid<<"\n";
            cout<<"Subject:"<<subject<<"\n";
    }
};
class Staff {
protected:
    int sid;
    string position;

public:
    Staff(int sid = 0, const string& position = "")
        : sid(sid), position(position) {}

    void readStaff() {
        cout<<"Enter Staff ID: ";
        cin>>sid;
        cout<<"Enter Position: ";
        cin>>position;
    }

    void displayStaff() const {
        cout<<"Staff ID:"<<sid<<"\n";
         cout<<"Position:"<<position<<"\n";
    }
};


class Coordinator : public Teacher, public Staff {
private:
    string department;

public:
    Coordinator(const string& department = "")
        : Teacher(), Staff(), department(department) {}

    void readCoordinator() {
        cout<<"--- Reading Teacher Details ---\n";
        readTeacher();
        cout<<"--- Reading Staff Details ---\n";
        readStaff();

        cout<<"Enter department: ";
        cin>>department;
    }

    void displayCoordinator() const {
        cout<<"\n--- Coordinator Details ---\n";
        displayTeacher();
        displayStaff();
        cout<<"department:"<<department<<"\n";
    }
};

int main() {
    Coordinator coord1, coord2;

    cout<<"Enter details for Coordinator 1:\n";
    coord1.readCoordinator();

    cout<<"\nEnter details for Coordinator 2:\n";
    coord2.readCoordinator();

    cout<<"\n=== Displaying Coordinator 1 ===\n";
    coord1.displayCoordinator();

    cout<<"\n=== Displaying Coordinator 2 ===\n";
    coord2.displayCoordinator();

    return 0;
}

