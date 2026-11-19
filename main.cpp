#include <iostream>
#include <string>
using namespace std;

class person {
private:
    string name;
    int age;
    string email;
protected:
    string occupation;
public:
    // Constructor
    person(string n, int a, string e, string o) {
        name = n;
        age = a;
        email = e;
        occupation = o;
        cout << "Person Created Successfully" << endl;
    }

    // Destructor
    ~person() {
        cout << "Person deleted Successfully" << endl;
    }

    string getName() const { return name; }
    int getAge()           { return age; }
    string getEmail()      { return email; }
    string getOccupation() { return occupation; }

    void setName(string n) { name = n; }

    void setAge(int a) {
        if (a > 0) age = a;
        else cout << "Invalid age" << endl;
    }

    void setEmail(string e)      { email = e; }
    void setOccupation(string o) { occupation = o; }

    void displayInfo() const {
        cout << "Name: "       << name       << endl;
        cout << "Age: "        << age        << endl;
        cout << "Email: "      << email      << endl;
        cout << "Occupation: " << occupation << endl;
    }
};

int main() {
    person p1("James Bond", 19, "james@nexus.com", "Lawyer");
    cout << endl;
    p1.displayInfo();
    return 0;
}
