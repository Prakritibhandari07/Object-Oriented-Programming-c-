#include <iostream>
#include <fstream>  // for file handling
#include <string>
using namespace std;

int main() {
    string sourceFile, destFile;

    cout << "Enter source filename: ";
    cin >> sourceFile;

    cout << "Enter destination filename: ";
    cin >> destFile;

    ifstream infile(sourceFile);    // Open source file in read mode
    ofstream outfile(destFile);     // Open destination file in write mode

    // Check if files opened successfully
    if (!infile) {
        cout << "Error: Cannot open source file!" << endl;
        return 1;
    }
    if (!outfile) {
        cout << "Error: Cannot open destination file!" << endl;
        return 1;
    }

    string line;
    while (getline(infile, line)) {
        outfile << line << endl;    // Write each line to destination file
    }

    cout << "File copied successfully from " << sourceFile
         << " to " << destFile << endl;

    infile.close();
    outfile.close();

    return 0;
}



