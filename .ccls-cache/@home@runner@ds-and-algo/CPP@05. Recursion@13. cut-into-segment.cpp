/*
https://www.codingninjas.com/studio/problems/cut-into-segments_1214651

You are given an integer ‘N’ denoting the length of the rod. You need to determine the maximum number of segments you can make of this rod provided that each segment should be of the length 'X', 'Y', or 'Z'.

test case
7 5 2 2

n = 7,
x = 5,
y = 2,
z = 2
*/

#include<iostream>
#include<limits.h>
using namespace std;


int cutIntoSegment(int n,int x,int y, int z){
  // base case
  if(n  == 0){
    return 0;
  }

  if(n < 0){
    return INT_MIN;
  }

  int a = 0;
  if(n - x > 0){
    a = cutIntoSegment(n-x,x,y,z) + 1;
  }

  int b = 0;
  if(n - y > 0){
    b = cutIntoSegment(n-y,x,y,z) + 1;
  }
  
  int c = 0;
  if(n - z > 0){
    c = cutIntoSegment(n-z,x,y,z) + 1;
  }
}

int main(){
  int n = 7;
  int x = 5;
  int y = 2;
  int z = 2;
  int result = cutIntoSegment(n,x,y,z);
  return 0;
}