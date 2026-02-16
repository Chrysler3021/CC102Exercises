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
system ("cls");
cout << "Salesperson(1-5): ";
cin >> salesperson;

cout << "Product(1-4): ";
cin >> product;

cout << "Amount: ";
cin >> amount;

sales[product-1][salesperson-1] += amount;

cout << "Enter another slip? (Y/y): ";
cin >> choice;

cout << endl;

} while(choice == 'Y' || choice == 'y');

cout << "Salesperson" << endl;
cout << "Product ";

for(int j=0; j<4; j++){
    cout << j+1 << " ";
}
cout << " Total" << endl;


double grandTotal = 0;
double columnTotal[4] = {0};

for(int i=0; i<5; i++){
    double rowTotal = 0;
    cout << i+1 << " ";

    for(int j=0; j<4; j++){
        cout << sales[i][j] << " ";
        rowTotal += sales[i][j];
        columnTotal[j] += sales[i][j];
    }

    cout << rowTotal << endl;
    grandTotal += rowTotal;
}

cout << "Total ";
for(int j=0; j<4; j++){
    cout << columnTotal[j] << " ";
}
cout << grandTotal << endl;

cout << endl << "Run program again? (Y/y): ";
cin >> repeat;

cout << endl;

} while (repeat == 'y' || repeat == 'Y');

cout << "Program terminated";

return 0;
}
