#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    int a;
    cout << "Enter Your Number:";
    cin >> a;

    {
        while (true)
        {

            if (!cin)
            {
                cout << "Wrong Choice. Enter again " << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                break;
            }
             
            else if (a % 2 == 0)
            {
                cout << "This is an even number" << endl;

            }
            else if (a % 2 != 0) {
                cout << "This is anodd number";
            }
            else {
                cout << "Enter the correct number:";

            }
            break;
        }


    }
}

