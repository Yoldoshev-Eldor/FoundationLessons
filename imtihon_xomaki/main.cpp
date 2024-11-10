#include <iostream>
#include <string.h>
using namespace std;


string satr(string str) {
    if (isupper(str[0])) {
        for (int i = 0; i < str.size(); ++i) {
            if (isupper(str[i])) {
                str.erase(i, 1);
                i--;
            }
        }
        return str;
    } else {
        return str;
    }
}

int main() {
    string s;
    getline(cin, s);

    cout << satr(s);
}
