#include <iostream>

using namespace std;

int main()
{

    int arr[10]{};

    arr[0] = {100};
    arr[9] = {1000};

    cout << "The number at arr[0] is: " << arr[0]
         << "\nThe number at arr[9] is: " << arr[9] << endl;

    return 0;
}