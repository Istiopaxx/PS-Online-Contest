#include <iostream>
#include <string>
#include <array>
#include <vector>
#include <deque>
#include <list>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <utility>
#include <cstdlib>
#include <cmath>
#define INF 987654321
#define INT_MAX 2147483647
#define MIN(a, b) ((a) < (b) ? a : b)
#define MAX(a, b) ((a) > (b) ? a : b)
 
using namespace std;
 

int main() {
    
    string S;
    cin >> S;
    int cnt = 0;
    int mcnt = 0;
    for(int i = 0; i < 3; i++) {
        if(S[i] == 'R') {
            cnt++;
            mcnt = MAX(mcnt, cnt);
        }
        else cnt = 0;
    }
    cout << mcnt;
}