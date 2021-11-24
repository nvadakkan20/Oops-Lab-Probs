#include <iostream>
#include <cmath>

using namespace std;

int d1,d2,d3;
    inline float shortdist(int x1,int x2,int x3,int y1,int y2,int y3)
    {
        
        d1=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
        d2=sqrt(pow(x3-x1,2)+pow(y3-y1,2));
        d3=sqrt(pow(x3-x2,2)+pow(y3-y2,2));
        
        float avg=d1+d2+d3/3;
        
        cout<<"-----------------------\nThe shoerted distance is: "<<avg;
    }
   bool checkvalid()
    {
        if(d1+d2<d3 && d2+d3<d1 && d3+d1<d2)
        return 0;
        else 
        return 1;
    
    }



int main()
{
    int a1,a2,a3,b1,b2,b3;
    cout<<"Enter the ordinates of side1: ";
    cin>>a1>>b1;
    cout<<"Enter the ordinates of side2: ";
    cin>>a2>>b2;
    cout<<"Enter the ordinates of side3: ";
    cin>>a3>>b3;
    shortdist(a1,a2,a3,b1,b2,b3);
    if(checkvalid()==1)
    cout<<"\nTriangle is VALID";
    else
    cout<<"Triangle is NOT VALID";
   
    return 0;
}

