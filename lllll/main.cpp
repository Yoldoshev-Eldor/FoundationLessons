#include <iostream>
#include <ctype.h>
#include <math.h>

using namespace std;

int main()
{

    string str;

    getline(cin, str);


    int n = 1,f;

    for (int i = 0; i <= str.size(); i++) {
        if (isdigit(str[i])) {
           f= n * str[i];

        }
    }

    cout << f << endl;
}


