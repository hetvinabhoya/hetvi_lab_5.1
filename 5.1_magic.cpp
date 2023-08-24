#include<iostream>
using namespace std;

int main()
{
	int n,A;
	int sum=0;
	int swap=0;
	int B;
	
	cout << "Enter Any Number : ";
	cin >> n;
	
	A = n;
	
	while(n > 0)
	{
		sum = sum + (n % 10);
		n = n /10;
	}
	
	B = sum ;
	
	while(sum > 0)
	{
		swap = (swap * 10) + (sum % 10);
		sum = sum / 10;
	}
	
	if((B * swap) == A)
	{
		cout << "Magic Number...";
	}
	else
	{
		cout << "Not Magic Number...";
	}
	
	return 0;
}
