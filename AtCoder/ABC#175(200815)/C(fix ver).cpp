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
    long int X, K, D;
    cin >> X >> K >> D;
    X = abs(X);

    if(K <= X / D) {
        cout << X - K * D;
    }
    else {
        int i = X / D;
        if((K - i)%2 == 0) cout << X - i * D;
        else cout << abs(X - i * D - D);
    }
    
}