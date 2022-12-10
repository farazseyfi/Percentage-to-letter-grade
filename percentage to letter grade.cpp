
#include <iostream>
#include <string>
using namespace std;
int option;
int main()
{
	for (;;) {
		int percentage;
		cout << "Insert your percentage: " << endl;
		cin >> percentage;
		if (percentage <= 49)
			cout <<"Your letter grade is: F" << endl;
		if (percentage < 0 || percentage>100)
			cout << "Invalid input! insert a percentage between 0-100%" << endl;
		switch (percentage)
		{
		case 100:
		case 99:
		case 98:
		case 97:
		case 96:
		case 95:
			cout <<"Your letter grade is: A+" << endl;
			break;
		case 94:
		case 93:
		case 92:
		case 91:
		case 90:
			cout <<"Your letter grade is: A" << endl;
			break;
		case 89:
		case 88:
		case 87:
		case 86:
		case 85:
			cout <<" Your letter grade is: A-" << endl;
			break;
		case 84:
		case 83:
		case 82:
		case 81:
		case 80:
			cout <<"Your letter grade is: B+" << endl;
			break;
		case 79:
		case 78:
		case 77:
		case 76:
		case 75:
			cout <<"Your letter grade is: B" << endl;
			break;
		case 74:
		case 73:
		case 72:
		case 71:
		case 70:
			cout <<"Your ltter grade is: B-" << endl;
			break;
		case 69:
		case 68:
		case 67:
		case 66:
		case 65:
			cout <<"Your letter grade is: C+" << endl;
			break;
		case 64:
		case 63:
		case 62:
		case 61:
		case 60:
			cout <<"Your letter grade is: C" << endl;
			break;
		case 59:
		case 58:
		case 57:
		case 56:
		case 55:
			cout <<"Your letter grade is: C-" << endl;
			break;
		case 54:
		case 53:
		case 52:
		case 51:
		case 50:
			cout <<"Your letter grade is: D" << endl;
		}
			cout <<"Would you like to insert another percentage? 1-yes,2-no" << endl;
			cin >> option;
			if (option == 1) {
				continue;
			}
			else
			{
				break;
			}
		}
}







