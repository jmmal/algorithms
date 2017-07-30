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
    int n;
    cin >> n;
    vector<int> height(n);
    for(int height_i = 0;height_i < n;height_i++){
       cin >> height[height_i];
    }

    int max = height[0];
    int numCandles = 1;

    for (int i = 1; i < height.size(); i++) {
        if (height[i] == max) {
            numCandles++;
        } else if (height[i] > max) {
            max = height[i];
            numCandles = 1;
        }
    }
    cout << numCandles << endl;

    return 0;
}
