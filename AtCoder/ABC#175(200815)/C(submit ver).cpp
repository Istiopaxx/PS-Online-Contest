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
 
    if(X < 0) {
        long int temp = X;
        long int i = abs(temp) / D;
        if(i <= K) {
            temp += i * D;
            if((K-i)%2 == 0) cout << abs(temp);
            else cout << MIN(abs(temp + D), abs(temp - D));
        }
        else cout << X + K * D;
    }
    
    if(X >= 0) {
        long int temp = X;
        long int i = abs(temp) / D;
        if(i <= K) {
            temp -= i * D;
            if((K-i)%2 == 0) cout << abs(temp);
            else cout << MIN(abs(temp + D), abs(temp - D));
        }
        else cout << X - K * D;
    }
 
}