// https://leetcode.com/problems/minimum-time-difference/description/

/*
Given a list of 24-hour clock time points in "HH:MM" format, return the minimum minutes difference between any two time-points in the list.


Example 1:

Input: timePoints = ["23:59","00:00"]
Output: 1
Example 2:

Input: timePoints = ["00:00","23:59","00:00"]
Output: 0

*/

#include <string>
#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>
using namespace std;

int minTimeDifference(vector<string> &timePoints)
{
     // Step 1 -  Convert all time point into minute and push into new array
     vector<int> convertToMinutes;
     int size = timePoints.size();
     for (int i = 0; i < size; i++)
     {
          string curr = timePoints[i];

          int hours = stoi(curr.substr(0, 2));
          int minutes = stoi(curr.substr(3, 2));
          int TotalMinutes = hours * 60 + minutes;
          convertToMinutes.push_back(TotalMinutes);
     }

     // Step - 2. SOrt the minutes array
     sort(convertToMinutes.begin(), convertToMinutes.end());

     // Step 3. find minimum of adjacent and among those minmiums find min
     int mini = INT_MAX;
     for (int i = 0; i < size - 1; i++)
     {
          int diff = convertToMinutes[i + 1] - convertToMinutes[i];
          mini = min(mini, diff);
     }

     // Step - 4. Clock is circulr so we need to calculate difference b/w first element and last element;
     int lastDiff = (convertToMinutes[0] + 1440) - convertToMinutes[size - 1];
     mini = min(mini, lastDiff);

     return mini;
}

int minTimeDifference(vector<string> &timePoints)
{
     // Step 1 -  Convert all time point into minute and push into new array
     vector<int> convertToMinutes;
     int size = timePoints.size();
     for (int i = 0; i < size; i++)
     {
          string curr = timePoints[i];

          int hours = stoi(curr.substr(0, 2));
          int minutes = stoi(curr.substr(3, 2));
          int TotalMinutes = hours * 60 + minutes;
          convertToMinutes.push_back(TotalMinutes);
     }

     // Step - 2. SOrt the minutes array
     sort(convertToMinutes.begin(), convertToMinutes.end());

     // Step 3. find minimum of adjacent and among those minmiums find min
     int mini = INT_MAX;
     for (int i = 0; i < size - 1; i++)
     {
          int diff = convertToMinutes[i + 1] - convertToMinutes[i];
          mini = min(mini, diff);
     }

     // Step - 4. Clock is circulr so we need to calculate difference b/w first element and last element;
     // This line of code ensures that we consider the circular nature of the clock. Since the time is represented in a 24-hour format, the clock "wraps around" after 23:59 back to 00:00.
     /*
     We calculate the difference between the first time and the last time by adding 24 hours (which is equivalent to 24 * 60 minutes) to the first time and then subtracting the last time. This is done to handle the case where the earliest time might be after the latest time due to the circular nature of the clock.
     By comparing this difference with the minDifference computed from other time differences, we ensure that we consider all possible time differences, including those that cross the boundary from 23:59 to 00:00.
     */
     int lastDiff = (convertToMinutes[0] + 24 * 60) - convertToMinutes[size - 1];
     mini = min(mini, lastDiff);

     return mini;
}

int main()
{
     vector<string> timePoints = {"00:00", "23:59", "00:00"};
     int result = minTimeDifference(timePoints);
     cout << "Min Time Diff " << result;
}