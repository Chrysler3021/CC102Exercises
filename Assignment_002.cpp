#include <iostream>
using namespace std;

void analyzeGrades(int *grades, int n, int m){
    int highest = *(grades);

    cout << "\nGrade Matrix:\n";

    for(int i = 0; i < n; i++)
    {
        float sum = 0;

        for(int j = 0; j < m; j++)
        {
            int value = *((grades + i * m) + j);
            cout << value << "\t";


            sum += value;



            if(value > highest){
                highest = value;}
    }

        float average = sum / m;
        cout << " | Average: " << average << endl;
}

    cout << "\nHighest Grade in Matrix: " << highest << endl;
}

int main()
{
    int n, m;

    cout << "Enter number of students: ";
    cin >> n;
    cout << "Enter number of subjects: ";
    cin >> m;

    int grades[n][m];

    cout << "\nEnter the grades:\n";

    for(int i = 0; i < n; i++)
    {

        for(int j = 0; j < m; j++)
        {

            cout << "Student " << i+1 << ", Subject " << j+1 << ": ";
            cin >> grades[i][j];
    }
}

                    analyzeGrades(&grades[0][0], n, m);

    return 0;
}
