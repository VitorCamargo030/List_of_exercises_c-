#include <iostream>
#include <iomanip>

using namespace std;

//Finding the area of a square
int main() {
    // Write C++ code here
    const int month{26};
    double salary_month{0}, value_per_hour{0};
    int hour_did_worked{0};
    
    cout << "Please tell me how much you earn per hour: $";
    cin >> value_per_hour;
    cout << "How many hours did you work? ";
    cin >> hour_did_worked;
    
    salary_month = (value_per_hour * hour_did_worked) * month;
    
    cout << "Your monthly salary: $" << fixed << setprecision(2) << salary_month << endl;

    return 0;
}