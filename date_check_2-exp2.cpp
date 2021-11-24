

#include <iostream>
using namespace std;

short isValidDate( short dd, short mm, short yy )
{
	if( yy < 0 )
		return 1;
		
	if( mm < 0 || mm > 12)
		return 1;
	
	if( mm == 2)
	{	
		if ( yy % 4 == 0 )
		{
				if( dd > 29 || dd < 0) 
					return 1;
		}
		else
		{
				if( dd > 28 || dd < 0) 
					return 1;
		}
	}
	else if( mm == 1 || mm == 3 || mm  == 5 || mm == 7 || mm == 8 || mm == 10 || mm == 12 )
	{
		if( dd > 31 || dd < 0) 
			return 1;
	}
	else
	{
		if( dd > 30 || dd < 0) 
			return 1;
	}
	
	return 0;
}


int main()
{
	int ret = 0;
    int d,m,y;

    cout << "Enter the date in dd mm yy format : ";
    cin >> d>>m>>y;


	
	ret = isValidDate( d, m, y);
	if(ret==0)
	{
		cout << "Date : "<< d <<"/ "<< m <<"/"<<y<<"\n";
		cout <<"Given date is valid"<<endl;

	}

	else
	{
		cout << "Date : "<< d <<"/ "<< m <<"/"<<y<<"\n";
		cout<<"Given date is not valid"<<endl;
	}
	
	
	return 0;
}