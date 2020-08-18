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
    int len[101];
    multiset<int> s;
 
    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> len[i];
        s.insert(len[i]);
    }
    vector<pair<int, pair<int, int>>> comb;
    for(int i = 0; i < N; i++) {
        for(int j = i + 1; j < N; j++) {
            for(int k = j + 1; k < N; k++) {
                if(len[i] == len[j]) continue;
                if(len[j] == len[k]) continue;
                if(len[i] == len[k]) continue;
                if(len[i] + len[j] > len[k]) {
                    comb.push_back(make_pair(i, make_pair(j, k)));
                }
                else {
                    if(MIN(len[i], len[j]) + len[k] > MAX(len[i], len[j])) {
                        comb.push_back(make_pair(i, make_pair(j, k)));
                    }
                    else continue;
                }
            }
        }
    }
    int cnt = 0;
    for(int i = 0; i < comb.size(); i++) {
        cnt += s.count(comb[i].first) * s.count(comb[i].second.first) * s.count(comb[i].second.second);
    }
    cout << cnt;
}