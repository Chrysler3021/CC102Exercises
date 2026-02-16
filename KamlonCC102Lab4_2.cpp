#include <iostream>
using namespace std;

int main() {
    int salesperson, product;
    double amount;
    char choice, repeat;

    do {
        double sales[5][4] = {0};

        do {
            cout << "SALESPERSON (1-4): ";
            cin >> salesperson;

            cout << "PRODUCT (1-5): ";
            cin >> product;

            cout << "AMOUNT: ";
            cin >> amount;

            sales[product - 1][salesperson - 1] += amount;

            cout << "ENTER ANOTHER SLIP? (Y/y): ";
            cin >> choice;
            cout << endl;
        } while (choice == 'Y' || choice == 'y');

        cout << "\nSALESPERSON\n";
        cout << "PRODUCT\t1\t2\t3\t4\tTOTAL\n";
        cout << "---------------------------------------------\n";

        double colTotal[4] = {0};
        double grandTotal = 0;

        for (int i = 0; i < 5; i++) {
            double rowTotal = 0;
            cout << i + 1 << "\t";

            for (int j = 0; j < 4; j++) {
                cout << sales[i][j] << "\t";
                rowTotal += sales[i][j];
                colTotal[j] += sales[i][j];
            }

            cout << rowTotal << endl;
            grandTotal += rowTotal;
        }
cout << "---------------------------------------------\n";
        cout << "TOTAL\t";

        for (int j = 0; j < 4; j++) {
            cout << colTotal[j] << "\t";
        }
        cout << grandTotal << endl;

        cout << "\nRUN PROGRAM AGAIN? (Y/y): ";
        cin >> repeat;
        cout << endl;

    } while (repeat == 'Y' || repeat == 'y');

    cout << "PROGRAM TERMINATED";
    return 0;
}
