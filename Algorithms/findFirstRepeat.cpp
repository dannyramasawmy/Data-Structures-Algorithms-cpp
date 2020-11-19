#include <iostream>
#include <vector>

using namespace std;

int firstDuplicate(const vector<int> &a)
{
    // initialise a counter
    vector<int> count(a.size(), 0);

    // loop through a
    for (int idx = 0; idx < a.size(); idx++) 
    {
        if (count[a[idx] - 1] > 0)
            return a[idx];
        else
            count[a[idx] - 1] += 1;
    }

    return -1;
}

void printDuplicate(const vector<int> &inputArray)
{
    cout << "First duplicate is: " << firstDuplicate(inputArray) << endl;
}

int main()
{
    // 1
    const vector<int> inputArray1 = {2, 1, 3, 5, 3, 2};
    printDuplicate(inputArray1);

    // 2
    const vector<int> inputArray2 = {2, 2, 3, 5, 3, 2};
    printDuplicate(inputArray2);

    // 3
    const vector<int> inputArray3 = {1, 2, 3, 4, 5, 5};
    printDuplicate(inputArray3);

    // 3
    const vector<int> inputArray4 = {1, 2, 3, 4, 5};
    printDuplicate(inputArray4);

    return 0;
}