#include <bits/stdc++.h>
using namespace std;
class EndOfFileException : public exception {
public:
    const char* what() const throw() {
        return "End of file exception: Reached the end of the file unexpectedly.";
    }
};

int main() {
    try {
        ifstream file("data.txt");
        if (!file) {
            cout<< "File not found." << endl;
            return 1;
        }

        string line;
        while (getline(file, line)) {
            cout << "Line read: " << line << endl;
        }

        // Attempt to read beyond the end of the file
        if (file.eof()) {
            throw EndOfFileException();
        }

        getline(file, line); // This line won't execute due to the exception

        file.close();
    }
    catch (const EndOfFileException& e) {
        cout << "Caught EndOfFileException: " << e.what() << endl;
    }

    return 0;
}
