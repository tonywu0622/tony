#include <iostream>
using namespace std;

int sum(int);

int main()
{
    while(true)
    {
        cout << "Type number (0 to stop):  \n";
        int x = 0;
        cin >> x;
        if (x==0)
        {
            cout << "Stopped. \n";
            break;
        }
        else
            sum(x);
    }
    return 0;
}

int sum(int x)
{
    int y = 0;
    for (int i = 0; i <= x; i ++)
        {
            y = y + i;
        }
    cout << "1+2+3+...+" << x << " = " << y << endl << "------------------------------------" << endl;
}

