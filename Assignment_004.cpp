#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ofstream outFile("color.txt");

    if (!outFile.is_open()) {
        cerr << "[ERROR] Could not open color.txt for writing.\n";
        return 1;
    }

    outFile << "Red\n"
            << "Blue\n"
            << "Green\n"
            << "Yellow\n"
            << "Purple\n"
            << "Orange\n"
            << "Cyan\n";

    outFile.close();
    cout << "[OK] color.txt has been written successfully.\n";

    ifstream inFile("color.txt");

    if (!inFile.is_open()) {
        cerr << "[ERROR] Could not open color.txt for reading.\n";
        return 1;
    }

    ofstream copyFile("color_copy.txt");

    if (!copyFile.is_open()) {
        cerr << "[ERROR] Could not open color_copy.txt for writing.\n";
        inFile.close();
        return 1;
    }

    string line;
    cout << "\n--- Contents of color.txt ---\n";

    while (getline(inFile, line)) {
        cout << line << "\n";
        copyFile << line << "\n";
    }

    inFile.close();
    copyFile.close();
    cout << "-----------------------------\n";
    cout << "\n[OK] color_copy.txt has been created as an exact copy.\n";
    cout << "[OK] All file streams closed. Program completed successfully.\n";

    return 0;
}
