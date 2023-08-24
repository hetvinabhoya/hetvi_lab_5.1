#include<iostream>
using namespace std;

class Cricket{
	public:
		int n;
		void getTotalOvers()
		{
			cout << "Enter Total Overs : ";
			cin >> n;
		}
		
};

class T20Match : public Cricket{
	public:
		void getTotalOvers()
		{
			cout << "T20 Match overs : " << n << endl;
		}
};

class TestMatch : public Cricket{
	public:
		void getTotalOvers()
		{
			cout << "Test Match overs : " << n << endl;
		}
	
};

int main()
{
	T20Match i;
	TestMatch j;
	
	i.Cricket::getTotalOvers();
	i.getTotalOvers();
	
	cout << endl;
	
	j.Cricket::getTotalOvers();
	j.getTotalOvers(); 
	return 0;
}

