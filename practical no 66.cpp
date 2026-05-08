#include <iostream>
#include <fstream>  // for file handling
#include <string>
using namespace std;

int main() {
    ifstream infile;       // Input file stream object
    string filename;

    cout << "Enter the filename to read from: ";
    cin >> filename;

    // Open file in read mode
    infile.open(filename);

    if (!infile) {
        cout << "Error: Could not open the file!" << endl;
        return 1;
    }

    cout << "\nContents of the file:\n";
    cout << "----------------------\n";

    string line;
    while (getline(infile, line)) {
        cout << line << endl;   // Display each line
    }

    infile.close();  // Close the file
    cout << "\nFile reading completed successfully." << endl;

    return 0;
}

