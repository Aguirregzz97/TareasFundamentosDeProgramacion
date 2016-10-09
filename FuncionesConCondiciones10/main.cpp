// Andres Aguirre Gonzalez A01039656
#include <iostream>

using namespace std;
void CalculateMonth(int MonthNumber)
{
    switch(MonthNumber)
    {
        case 1:
					cout << "January is the month (31 days)";
					break;
				case 2:
					cout << "February is the month (30 days)";
					break;
				case 3:
					cout << "March is the month (31 days)";
					break;
				case 4:
					cout << "April is the month (30 days)";
					break;
				case 5:
					cout << "May is the month (31 days)";
					break;
				case 6:
					cout << "June is the month (30 days)";
					break;
				case 7:
					cout << "July is the month (31 days)";
					break;
				case 8:
					cout << "August is the month (31 days)";
					break;
				case 9:
					cout << "September is the month (30 days)";
					break;
				case 10:
					cout << "October is the month (31 days)";
					break;
				case 11:
					cout << "November is the month (30 days)";
					break;
				case 12:
					cout << "December is the month (31 days)";
					break;
				default:
					cout << "error you must enter a number 1-12";
    }
}

int main()
{
    int MonthNumber;
    cout << "Please tell me a number from 1 to 12" << endl;
    cin >> MonthNumber;
    CalculateMonth(MonthNumber);

    return 0;
}
