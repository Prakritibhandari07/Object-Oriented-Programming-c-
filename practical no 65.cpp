#include <iostream>
#include <fstream>  // for file handling
#include <string>
using namespace std;

int main() {
    ofstream outfile;          // Output file stream object
    string filename;

    cout << "Enter the filename to write to: ";
    cin >> filename;

    // Open file in write mode
    outfile.open(filename);

    if (!outfile) {
        cout << "Error: Could not open the file!" << endl;
        return 1;
    }

    cout << "Enter lines of text (type 'exit' to stop):" << endl;
    cin.ignore();  // Clear newline left in the buffer

    string line;
    while (true) {
        getline(cin, line);
        if (line == "exit")
            break;
        outfile << line << endl;
    }

    outfile.close();  // Close the file
    cout << "Data successfully written to " << filename << endl;

    return 0;
}








