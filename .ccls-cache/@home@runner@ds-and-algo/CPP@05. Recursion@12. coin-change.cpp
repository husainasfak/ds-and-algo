/*
Given an array of n distinct elements. given a target number. find out the
minimum number of elements required to reach target sum.

Coin change problem

You are given an integer array coins representing coins of different
denominations and an integer amount representing a total amount of money.

Return the fewest number of coins that you need to make up that amount. If that
amount of money cannot be made up by any combination of the coins, return -1.

You may assume that you have an infinite number of each kind of coin.

https://leetcode.com/problems/coin-change/description/
*/

/* Pattern - for loop to call all the element*/


#include <iostream>
#include <limits.h>
#include <vector>

using namespace std;

int coinChange(vector<int> coins, int target) {
  if (target == 0) {
    return 0;
  }
  if (target < 0) {
    return INT_MAX;
  }
  int size = coins.size();
  int minimum = INT_MAX;

  for (int i = 0; i < size; i++) {
    int ans = coinChange(coins, target - coins[i]);
    if (ans != INT_MAX) {
      minimum = min(ans + 1, minimum);
    }
  }
  return minimum;
}

int main() {
  vector<int> coins{1, 2, 5};
  int target = 11;

  int result = coinChange(coins, target);
  cout << result;
  return 0;
}