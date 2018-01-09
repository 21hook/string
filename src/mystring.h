#ifndef MYSTRING_H
#define MYSTRING_H
#include <string>
using namespace std;


class MyString {
public:
    // a set of constructors & destructors
    /**
     * Create a MyString object from C++ string.
     * Usage:
     *  new MyString(str);
     *
     * @param str C++ string object
     */
    MyString(string str);
    /**
     * Usage:
     *  antomatically implicit calling by the compiler
     * Free the heap memory allocated by the MyString object.
     */
    ~MyString();
    /**
     * Copy constructor:
     * Usage:
     *  automatically implicit calling whenever an object is initialized.
     * @param src
     */
    MyString(const MyString &src);


    // a set of public methods of the class
    /**
     * Return the length of a MyString object
     * Usage:
     *  str.length();
     */
    int length() const;

    /**
     * Return a copy of a substring of a MyString object.
     * Usage:
     *  str.substr(start, n);
     *
     * @param start the start position of str
     * @param n the length of the substring
     */
     MyString substr(int start, int n = -1) const;


    /**
     * Return a string representation of a MyString object.
     * Usage:
     *  str.toString();
     */
    string toString() const;

    // a set of overloading operators
    // comparision operators
    bool operator !=(const MyString str2) const;
    bool operator ==(const MyString str2) const;
    bool operator <(const MyString str2) const ;
    bool operator >(const MyString str2) const;
    bool operator <=(const MyString str2) const;
    bool operator >=(const MyString str2) const;
    //concatenation operators
    MyString operator +(const MyString &str2) const;
    //MyString &operator +=(const MyString &str2);
    //insertion operator
    ostream &operator <<(const MyString &src) const;
    //selection operator
    char &operator [](int k) const;
    //assignment operator
    MyString &operator =(const MyString &src);

private:
    //a set of attributes to represent a MyString object.
    //instace variables
    char *array;// dynamic array
    int size;

    //instance methods
    void deepCopy(const MyString &src);
};

#endif // MYSTRING_H
