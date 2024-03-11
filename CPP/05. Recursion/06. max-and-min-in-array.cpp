#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

void findMax(vector<int> arr, int index, int &max)
{
     int size = arr.size();

     // Base case
     if (index >= size)
     {
          return;
     }
     // is Current element is max or not
     if (arr[index] > max)
     {
          max = arr[index];
     }

     findMax(arr, index + 1, max);
}

void findMin(vector<int> arr, int index, int &min)
{
     int size = arr.size();

     if (index >= size)
     {
          return;
     }
     if (arr[index] < min)
     {
          min = arr[index];
     }

     findMin(arr, index + 1, min);
}

int main()
{
     vector<int> arr = {10, 20, 30, 40, 50};
     int index = 0;
     int maxi = INT_MIN;
     int mini = INT_MAX;
     findMax(arr, index, maxi);
     cout << "MAX : " << maxi << endl;

     findMin(arr, index, mini);
     cout << "MIN : " << mini << endl;
     return 0;
}