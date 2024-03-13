#include <iostream>
#include <vector>

using namespace std;

bool checkSorted(vector<int> &v, int i)
{
     int size = v.size();
     cout << size;

     if (i == size - 1)
     {
          return true;
     }

     if (v[i + 1] < v[i])
     {
          return false;
     }
     checkSorted(v, i + 1);
}

int main()
{
     vector<int> v{10, 20, 30, 40, 50, 60};
     int i = 0;

     bool result = checkSorted(v, i);

     cout << "Result " << result;

     return 0;
}