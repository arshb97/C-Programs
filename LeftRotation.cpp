#include <bits/stdc++.h>

using namespace std;

vector <int> leftRotation(vector <int> a, int d) {
    
    int len = a.size();
    int i;
    if(d%len == 0)
    {
        return a;
    }
    d = d % len;
    vector<int> temp(len);
    temp = a;
    int pos = i+d;
    for(i = 0; i < len; i++)
    {
        pos = i + d;
        if(pos >= len)
        {
            pos = pos%len;
        }
        
        a[i] = temp[pos];
        
    }
    return a;
}

int main() {
    int n;
    int d;
    cin >> n >> d;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
        cin >> a[a_i];
    }
    vector <int> result = leftRotation(a, d);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? " " : "");
    }
    cout << endl;
    
    
    return 0;
}
