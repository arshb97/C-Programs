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


int main(){
    int n1;
    int n2;
    int n3;
    stack<int> s1;
    stack<int> s2;
    stack<int> s3;
    
    cin >> n1 >> n2 >> n3;
    vector<int> h1(n1);
    for(int h1_i = n1-1;h1_i >= 0;h1_i--){
        cin >> h1[h1_i];
    }
    for(int h1_i = 0;h1_i < n1 ;h1_i++){
        int x = h1[h1_i];
        if(h1_i == 0)
        {
            s1.push(x);
        }
        else
        {
            int y = s1.top();
            int z = h1[h1_i];
            int k = y+z;
            s1.push(k);
        }
    }
    vector<int> h2(n2);
    for(int h2_i = n2-1; h2_i >= 0; h2_i--){
        cin >> h2[h2_i];
    }
    for(int h2_i = 0; h2_i < n2; h2_i++){
        int x = h2[h2_i];
        if(h2_i == 0)
        {
            s2.push(x);
        }
        else
        {
            int y = s2.top();
            int z = h2[h2_i];
            int k = y+z;
            s2.push(k);
        }
    }
    vector<int> h3(n3);
    for(int h3_i = n3-1; h3_i >= 0; h3_i--){
        cin >> h3[h3_i];
    }
    for(int h3_i = 0;h3_i < n3;h3_i++){
        int x = h3[h3_i];
        if(h3_i == 0)
        {
            s3.push(x);
        }
        else
        {
            int y = s3.top();
            int z = h3[h3_i];
            int k = y+z;
            s3.push(k);
        }
    }
    
    int count = 0;
    while(!(s1.empty() || s2.empty() || s3.empty()))
    {
        if((s1.top() == s2.top()) && (s2.top() == s3.top()))
        {
            cout << s1.top() << endl;
            return 1;
        }
        while((s1.top() > s2.top()) || (s1.top() > s3.top()))
        {
            s1.pop();
            if(s1.empty())
            {
                count = 1;
                break;
            }
        }
        if(count != 1)
        {
            while((s2.top() > s1.top()) || (s2.top() > s3.top()))
            {
                s2.pop();
                if(s2.empty())
                {
                    count = 1;
                    break;
                }
            }
        }
        if(count != 1)
        {
            
            while((s3.top() > s2.top()) || (s3.top() > s1.top()))
            {
                s3.pop();
                if(s3.empty())
                {
                    count = 1;
                    break;
                }
            }
        }
        if(count == 1)
        {
            break;
        }
    }
    cout << "0" << endl;
    return 0;
}

