#include <bits/stdc++.h>
using namespace std;

class ClassNotFoundException : public exception {
public:
    const char* what() const throw() {
        return "Class not found exception: The specified class does not exist.";
    }
};


class Student {
public:
    string name;
    int age;

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    try {
        // Demonstrate "Class not found" scenario
        Student* studentPtr = nullptr;
        if (!studentPtr) {
            throw ClassNotFoundException();
        }
    }
    catch (const ClassNotFoundException& e) {
        cout << "Caught ClassNotFoundException: " << e.what() << endl;
    }
    catch (const exception& e) {
        cout << "Caught an exception: " << e.what() << endl;
    }

    return 0;
}
