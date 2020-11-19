#include <iostream>
#include <string>

using namespace std;

// Check pallindrome
bool checkPallindrome(const string &str);

// Test function
void testString(const string &str);

// main
int main()
{

    // t1
    testString("testset");
    // t2
    testString("testsetasda");
    // t3
    testString("testtset");
    // t4
    testString("test 1 tset");
    // t5
    testString("test 12tset");

    return 0;
}

// Check pallindrome
bool checkPallindrome(const string &str)
{
    for (int idx = 0; idx < (str.length() + 1) / 2; idx++)
    {
        // reverse index
        int jdx = str.length() - 1 - idx;
        // condition
        if (str[idx] != str[jdx])
            return false;
    }
    return true;
}

// Test function
void testString(const string &str)
{
    cout << "Test string: \"" << str.c_str() << "\" is " << (checkPallindrome(str) ? "True" : "False") << endl;
}