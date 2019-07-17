#include <iostream>
using namespace std;
int main()
{
	int score ;
	cout << "Enter Score : ";
	cin >> score ;
	if (score > 100) 
	{
		cout << "Score error" << endl;
	}

	else if (score >= 90)
	{
		cout << "Grade A " << endl;
	}

	else if (score >= 80)
	{
		cout << "Grade B " << endl;
	}

	else if (score >=70)
	{
		cout << "Grade C " << endl;
	}

	else if (score >=60)
	{
		cout << "Grede D " << endl;
	}

	else if (score >=0)
	{
		cout << "Grade F " << endl;
	}
	else
	{
		cout << "Score error " << endl;
	}
	return(0);

}
