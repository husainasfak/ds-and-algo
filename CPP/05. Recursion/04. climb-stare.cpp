// https://leetcode.com/problems/climbing-stairs/description/

/*
     * You are climbing a staircase. It takes n steps to reach the top.
     * Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?


*/

#include <iostream>
using namespace std;

int climbStaris(int n)
{
     // base case
     if (n == 0 || n == 1)
     { // from 0 to n. for 0th or 1st stairs 1 ways to climb
          return 1;
     }
     return climbStaris(n - 1) + climbStaris(n - 2);
}

int main()
{
     int stairCount = 3;

     int result = climbStaris(stairCount);

     cout << "Ways " << result;
}