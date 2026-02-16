#include <iostream>
using namespace std;

int main(){
int a, b;
char repeat;
do {
cout << "Enter number of students";//*rows
cin >> a;
cout << "Enter number of quizzes";//columns
cin >> b;

double average[100];
double scores[200][200];

//Accounts for the students
for(int i=0; i<a; i++){
//Scorezzz
int sum=0;
cout << endl << "Student " << i+1 << " scores : ";
    for(int j=0; j<b; j++){
    cin >> scores[i][j];
    sum += scores[i][j];
        }
    average[i] = sum / b;
}

cout << endl << "Student ";
for (int j=0; j<b; j++){
            cout << "Q" << j + 1 << " ";
        }

cout << "Average" << endl;

for (int i=0; i<a; i++){
    cout << i+1 << "    ";
    for (int j=0; j<b; j++){
    cout << scores[i][j] << " ";
    }
    cout << average[i];
}
 cout << "Run program again? (Y/y): ";
        cin >> repeat;

        cout << endl;
        } while (repeat == 'y' || repeat == 'Y');

    cout << "Program terminated";


return 0;
}
