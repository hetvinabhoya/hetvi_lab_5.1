#include<iostream>
using namespace std;

class Number{
	public:
	int a,b,c,d,e,T;
	
};

class Total : public Number{
	public:
		calculate(int a,int b)
		{
			cout << "Enter 1st : ";
			cin >> a;
			cout << "Enter 2nd : ";
			cin >> b;
			
			T = a / b;
			
			cout << "Division = " << T << endl;
		}
		
		calculate(int a,int b,int c)
		{
			cout << "Enter 1st : ";
			cin >> a;
			cout << "Enter 2nd : ";
			cin >> b;
			cout << "Enter 3rd : ";
			cin >> c;
			
			T = a - b - c;
			
			cout << "Subtraction = " << T << endl;
		}
		
		calculate(int a,int b,int c,int d)
		{
			cout << "Enter 1st : ";
			cin >> a;
			cout << "Enter 2nd : ";
			cin >> b;
			cout << "Enter 3rd : ";
			cin >> c;
			cout << "Enter 4th : ";
			cin >> d;
			
			T = a * b * c * d;
			
			cout << "Multiplication = " << T << endl;
		}
		
		calculate(int a,int b,int c,int d,int e)
		{
			cout << "Enter 1st : ";
			cin >> a;
			cout << "Enter 2nd : ";
			cin >> b;
			cout << "Enter 3rd : ";
			cin >> c;
			cout << "Enter 4th : ";
			cin >> d;
			cout << "Enter 5th : ";
			cin >> e;
			
			T = a + b + c + d + e;
			
			cout << "Addition = " << T << endl;
		}
};

int main()
{
	Total h;
	
    h.calculate(50,2);
    h.calculate(20,5,2);
    h.calculate(2,4,10);
    h.calculate(2,5,10,6,7);
	
	return 0;
}
