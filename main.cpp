//
//  main.cpp
//  assignment dp
//
//  Created by toka magdy ragab  on 11/27/18.
//  Copyright © 2018 toka magdy ragab . All rights reserved.
//

#include <iostream>

using namespace std;

int f(int start, int end, int arr[])
{
    if (start == end)
        return 0;
    int min = INT_MAX, sum;
    for (int i = start; i < end; i++)
    {
        sum = f(start,i,arr) + f(i+1,end,arr) + arr[i]*arr[start]*arr[end];
        if (sum < min)
            min = sum;
    }
    
    return min;
    
}

int main(int argc, const char * argv[]) {
    int arr[] = {4,10,3,12,20,7};
    cout << f(0,5,arr) << endl;
    return 0;
}
