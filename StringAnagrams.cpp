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
#include <unordered_map>

using namespace std;

int number_needed(string a, string b) {
    int *arr1 = new int[28];             //lower alphabets ascii is 97-122
    int *arr2 = new int[28];
    for(int i = 0; i < 28; i++)
    {
        arr1[i] = 0;
        arr2[i] = 0;
    }
    
    int len1, len2;
    len1 = a.length();
    len2 = b.length();
    int res = 0;;
    for(int i = 0; i < len1 ; i++)      //counting the max of each alphabet in string b
    {
        int temp = a[i];
        arr1[temp - 97]++;
    }
    for(int i = 0; i < len2 ; i++)      //counting the max of each alphabet in string a
    {
        int temp = b[i];
        arr2[temp - 97]++;
    }
    
    for(int i = 0; i < 28; i++)         //calculating the required minimum number required to make string anagram
    {
        res = res + abs(arr1[i] - arr2[i]);
    }
    return res;
}

int main(){
    string a;
    cin >> a;
    string b;
    cin >> b;
    cout << number_needed(a, b) << endl;
    return 0;
}


