
#include <iostream>
using namespace std;

class Distance
{
    int feet, inch;

    public:
    void get_value()
    {
        cout << "Enter a distance in feet \n";
        cin >> feet;
        cout << "Enter a distance in inch \n";
        cin >> inch;
    }

    void display_data()
    {
        cout << endl << "Feet value = " << feet << endl;
        cout << "Inch value = " << inch << endl;
    }

    friend void add_distance(Distance &obj);
};

void add_distance(Distance &obj)
{
    float temp;
    cout << "\nEnter a inch value for adding\n";
    cin >> temp;
    obj.inch += temp;
    if (obj.inch > 12 ){
        obj.feet+=(obj.inch/12);
        obj.inch= obj.inch % 12;
    }
}

int main()
{
    Distance obj1;

    obj1.get_value();
    obj1.display_data();

    add_distance(obj1);

    cout << "\nValues after calling friend function";
    obj1.display_data();

    return 0;
}
