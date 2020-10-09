#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
#include <numeric>
using namespace std;


int main() {
    vector< int >arr; // khai bao vector chua phan tu
    string input; //
    getline(cin, input);
    istringstream is(input);
    int num = 3;
    while(is>>num) arr.push_back(num);
    int sum = std::accumulate(std::begin(arr), std::end(arr), 0);
    cout << sum;
    return 0;
}
