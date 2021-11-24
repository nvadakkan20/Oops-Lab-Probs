#include <iostream>
#include <string>

using namespace std;

struct phone
{
    int area;
    int exchange;
    long int phone;


};

int main() {
    phone mynumber{212, 767, 8900};
    phone yournumber{};
    
    cout<<"Enter you area code, exchange, phone number in xxx yyy zzzz format  : ";

    cin >> yournumber.area >> yournumber.exchange >> yournumber.phone;

    cout << "My number : ("<< mynumber.area <<") "<< mynumber.exchange <<"-"<< mynumber.phone <<" \n";
    cout << "Your Number : ("<< yournumber.area <<") "<< yournumber.exchange <<"-"<< yournumber.phone <<" \n";


    return 0;




}
