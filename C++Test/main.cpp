#include <iostream>

using namespace std;

int main()
{
    short i = 65535;
    *(char*)&i = 1;

     cout << i << endl;


    return 0;
}
