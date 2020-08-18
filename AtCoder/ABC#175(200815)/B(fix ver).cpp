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
    int N;
    cin >> N;

    vector<int> L(N);
    for(int i = 0; i < N; i++) {
        cin >> L[i];
    }
    sort(L.begin(), L.end());

    int cnt = 0;
    for(int i = 0; i < N; i++)
        for(int j = i+1; j < N; j++)
            for(int k = j+1; k < N; k++) {
                if(L[i] + L[j] > L[k] && (L[i] != L[j]) && (L[j] != L[k])) cnt++;
            }
    cout << cnt;
}