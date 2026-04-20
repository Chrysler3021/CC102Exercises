#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ofstream outFile("original.txt");

    if (!outFile.is_open()) {
        cerr << "[ERROR] Could not open original.txt for writing.\n";
        return 1;
    }

    outFile << "One\n"
            << "Two\n"
            << "Three\n"
            << "Four\n"
            << "Five\n"
            << "Six\n";

    outFile.close();
    cout << "[OK] original.txt has been written successfully.\n";

    ifstream inFile("original.txt");

    if (!inFile.is_open()) {
        cerr << "[ERROR] Could not open original.txt for reading.\n";
        return 1;
    }

    vector<string> words;
    string line;

    while (getline(inFile, line)) {
        words.push_back(line);
    }

    inFile.close();

    cout << "\n--- Contents of original.txt ---\n";
    for (const string& w : words) {
        cout << w << "\n";
    }
    cout << "--------------------------------\n";

    sort(words.begin(), words.end());

    ofstream sortedFile("sorted.txt");

    if (!sortedFile.is_open()) {
        cerr << "[ERROR] Could not open sorted.txt for writing.\n";
        return 1;
    }

    for (const string& w : words) {
        sortedFile << w << "\n";
    }

    sortedFile.close();

    cout << "\n--- Contents of sorted.txt ---\n";
    for (const string& w : words) {
        cout << w << "\n";
    }
    cout << "------------------------------\n";
    cout << "\n[OK] sorted.txt has been written successfully.\n";
    cout << "[OK] All file streams closed. Program completed successfully.\n";

    return 0;
}
