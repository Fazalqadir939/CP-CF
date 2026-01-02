PROBLEM: T. Matrix
time limit per test1 second
memory limit per test256 megabytes
Given a number N and a 2D array A of size N * N. Print the absolute difference between the summation of its two diagonals (primary diagonal and secondary diagonal).

Input
First line contains a number N (1 ≤ N ≤ 100) described above.

Each of the next N lines will contain N numbers ( - 100 ≤ Ai ≤ 100).

Output
Print the absolute difference between the summation of the matrix main diagonals.

Example
InputCopy
4
1 5 12 1
2 -4 6 7
3 8 5 9
3 5 23 -6
OutputCopy
22

PROGRAM: 
//
// Created by User on 02-Jan-26.
//
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n][n];
    for (int i =0;i<n;i++)
    {
        for (int j =0;j<n;j++)
        {
            cin >> arr[i][j];
        }
    }
    int dig1=0,dig2=0;
    for (int i =0;i<n;i++)
    {
        for (int j =0;j<n;j++)
        {
            if (i==j)
            {
               dig1+=arr[i][j];
            }
            if (j==n-1-i)
            {
                dig2+=arr[i][j];
            }
        }
    }
    int origional = dig1-dig2;
    if (origional<0)
    {
        origional*=-1;
    }
    cout << origional;
}
