#include <iostream>
using namespace std;

int main(){
    int salesperson, product;
    double amount;
    char repeat;

    do {
        double sales[5][4] = {0};
        char choice;

        do {

            cout << "Salesperson (1-5): ";
            cin >> salesperson;

            cout << "Product (1-4): ";
            cin >> product;

            cout << "Amount: ";
            cin >> amount;

            sales[product-1][salesperson-1] += amount;

            cout << "Enter another slip? (Y/y): ";
            cin >> choice;
            cout << endl;
        } while(choice == 'Y' || choice == 'y');


        cout << "\nProduct/Sales\t";
        for(int j=0; j<4; j++){
            cout << "S" << j+1 << "\t";
        }
        cout << "Total\n";

        double grandTotal = 0;
        double columnTotal[4] = {0};


        for(int i=0; i<5; i++){
            double rowTotal = 0;
            cout << "P" << i+1 << "\t\t";

            for(int j=0; j<4; j++){
                cout << sales[i][j] << "\t";
                rowTotal += sales[i][j];
                columnTotal[j] += sales[i][j];
            }

            cout << rowTotal << endl;
            grandTotal += rowTotal;
        }


        cout << "Total\t\t";
        for(int j=0; j<4; j++){
            cout << columnTotal[j] << "\t";
        }
        cout << grandTotal << endl;

        cout << endl << "Run program again? (Y/y): ";
        cin >> repeat;
        cout << endl;

    } while (repeat == 'y' || repeat == 'Y');

    cout << "Program terminated";

    return 0;
}
