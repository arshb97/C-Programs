#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    string *arr = new string[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int nq;
    cin >> nq;
    string *sarr = new string[nq];
    for(int i = 0; i < nq; i++)
    {
        cin >> sarr[i];
    }
    int count = 0;
    for(int i = 0; i < nq; i++)
    {
        count = 0;
        for(int j = 0; j < n; j++)
        {
            if(sarr[i]==(arr[j]))
            {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}


