#include <iostream>
using namespace std;

int main()
{
    float om, tm, percentage;

    cout << "Enter total marks: ";
    cin >> tm;

    int i = 1;
    while (i <= 3)
    {
        cout << "\nEnter obtained marks: ";
        cin >> om;

        percentage = (om / tm) * 100;

        cout << "Percentage = " << percentage;

        if (percentage >= 90)
        {
            cout << "\nGrade A+";
        }

        if (percentage >= 80 && percentage < 90)
        {
            cout << "\nGrade A";
        }

        i++;
    }

    return 0;
}