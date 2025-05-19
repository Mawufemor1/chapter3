#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double netbalance;
    double averagedailybalance;
    double payment;
    double interestratepermonth;
    double interest;
    int d1, d2;
    cout << "Enter Net Balance: ";
    cin >> netbalance;
    cout << "Payment: ";
    cin >> payment;
    cout << "Enter number of days in billing cycle: ";
    cin >> d1;
    cout << "Enter number of days payment is made before billing cycle: ";
    cin >> d2;
    cout << "Enter  interest rate per month: ";
    cin >> interestratepermonth;
    averagedailybalance = (netbalance * d1 - payment * d2) / d1;
    interest = averagedailybalance * interestratepermonth;
    cout << fixed << showpoint << setprecision(2);
    cout << "Interest: " << "$ " << interest;
    






return 0;
}