// my project

#include <iostream>
#include "console.h"
#include "gwindow.h" // for GWindow
#include "simpio.h"  // for getLine
#include "vector.h"  // for Vector
#include <cassert>
#include "mystring.h"
using namespace std;

//function prototypes

int main() {

    string s = "Hello, world!";
    string s1 = "Karel";
    MyString *str = new MyString(s);
    MyString *str1 = new MyString(s1);

    assert(str->length() == s.length());
    assert(str->substr(0, 3) == s.substr(0, 3));


    if(str > str1) cout << true << endl;
    else if(str >= str1) cout << true << endl;

    //cout << string(str[0]) << endl;

    str1 = str;
    cout << str1->toString() << endl;
    cout << str->toString() << endl;

    str += 'a';







    return 0;
}
//function definitions


