#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define MAX 1000


int maxHist(int row[])
{
    stack<int> result;
    int top_val; 
    int max_area = 0; 
    int area = 0;
    int i = 0;
    while (i < 4) {
        if (result.empty() || row[result.top()] <= row[i])
            result.push(i++);
        else {
            top_val = row[result.top()];
            result.pop();
            area = top_val * i;
            if (!result.empty())
                area = top_val * (i - result.top() - 1);
            max_area = max(area, max_area);
        }
    }
    while (!result.empty()) {
        top_val = row[result.top()];
        result.pop();
        area = top_val * i;
        if (!result.empty())
            area = top_val * (i - result.top() - 1);
        max_area = max(area, max_area);
    }
    return max_area;
}

int maxRectangle(int A[][4])
{
    int result = maxHist(A[0]);
    for (int i = 1; i < 4; i++) {
        for (int j = 0; j < 4; j++)
            if (A[i][j])
                A[i][j] += A[i - 1][j];
        result = max(result, maxHist(A[i]));
    }
    return result;
}

int main()
{
    int A[][4] = {
        { 0, 1, 1, 0 },
        { 1, 1, 1, 1 },
        { 1, 1, 1, 1 },
        { 1, 1, 0, 0 },
    };
    cout << "Area of maximum rectangle is "<< maxRectangle(A);
    return 0;
}