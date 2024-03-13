#include <iostream>
#include <vector>

using namespace std;

int binarySearch(vector<int> &arr, int start, int end, int key)
{
     // Base case
     if (start > end)
     {
          return -1;
     }
     int mid = start + (end - start) / 2;

     if (arr[mid] == key)
     {
          return mid;
     }
     if (arr[mid] < key)
     {
          return binarySearch(arr, mid + 1, end, key);
     }
     else
     {
          return binarySearch(arr, start, mid - 1, key);
     }
}

int main()
{
     vector<int> v{10, 20, 30, 40, 50, 60};
     int start = 0;
     int end = v.size() - 1;
     int key = 80;
     int result = binarySearch(v, start, end, key);

     cout << "Index " << result;
     return 0;
}