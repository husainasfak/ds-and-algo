#include <iostream>
#include <vector>
using namespace std;

void printRecuersively(vector<int> arr, int index)
{
     int size = arr.size();

     // // Base case
     if (index >= size)
     {
          return;
     }

     cout << arr[index] << " ";

     printRecuersively(arr, index + 1);
}
int main()
{
     vector<int> arr = {10, 20, 30, 40, 50};
     int index = 0;
     printRecuersively(arr, index);
     return 0;
}