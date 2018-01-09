//library inclusions
#include <string>
#include <iostream>
#include "mystring.h"
#include "error.h"
//using namespace
using namespace std;


//function definitions
MyString::MyString(string str) {
    //initialize a set of fields of a MyString object
    array = new char[str.length()];
    for(int i=0; i<str.length(); i++) {
        array[i] = str[i];
    }
    size = str.length();
}

MyString::~MyString() {
    //empty
}

MyString::MyString(const MyString &src) {
    deepCopy(src);
}

//helper methods
void MyString::deepCopy(const MyString &src) {
    //copy all fields of the object from src
    array = new char[src.length()];

    for(int i=0; i<src.length(); i++) {
        array[i] = src.array[i];
    }

    size = src.length();
}

int MyString::length() const {
    return size;
}

MyString MyString::substr(int start, int n) const {
    if(n == -1) return MyString(this->toString().substr(start));
    else return MyString(toString().substr(start, n));
}

string MyString::toString() const {
    string str = "";

    for(int i=0; i<length(); i++) {
        str += array[i];
    }

    return str;
}

bool MyString::operator !=(const MyString str2) const {
    return toString() != str2.toString();
}

bool MyString::operator ==(const MyString str2) const {
    return this->toString() == str2.toString();
}

bool MyString::operator >(const MyString str2) const {
    return this->toString() > str2.toString();
}

bool MyString::operator >=(const MyString str2) const {
    return this->toString() >= str2.toString();
}

bool MyString::operator <(const MyString str2) const {
    return this->toString() < str2.toString();
}

bool MyString::operator <=(const MyString str2) const {
    return this->toString() <= str2.toString();
}

MyString MyString::operator +(const MyString &str2) const {
    return MyString(string(this->toString()) + str2.toString());
}

//MyString &MyString::operator +=(const MyString &str2) {
//    return MyString(this->toString() += string(str2.toString()));
//}

ostream &MyString::operator <<(const MyString &src) const {
    return *this << src.toString();
}

char &MyString::operator [](int k) const {
    if(k<0 || k > length()) error("Out of bounds");
    return array[k];
}

MyString &MyString::operator =(const MyString &src) {
    if(this != &src) {
        delete[] array;
        deepCopy(src);
    }
    return *this;
}
