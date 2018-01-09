//
//  hr.cpp
//  tryyhome
//
//  Created by Arshdeep Singh Bhullar on 2018-01-09.
//  Copyright © 2018 Arshdeep Singh Bhullar. All rights reserved.
//

#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    vector< vector<int> > arr(6,vector<int>(6));
    for(int arr_i = 0;arr_i < 6;arr_i++){
        for(int arr_j = 0;arr_j < 6;arr_j++){
            cin >> arr[arr_i][arr_j];
        }
    }
    
    int psum = 0;
    int sum=0;
    int count = 0;
    int *temp = new int[16];
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            temp[count++] = arr[i][j] + arr[i][j+1] + arr[i][j+2] + arr[i+1][j+1] + arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2];
        }
    }
    int max = temp[0];
    for(int i = 1; i < 16; i++)
    {
        if(temp[i] > max)
        {
            max = temp[i];
        }
    }
    cout << max;
    
    return 0;
}


