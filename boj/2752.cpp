// https://www.acmicpc.net/problem/2752
#include <bits/stdc++.h>
using namespace std;

int input1, input2, input3;
int first, second, third;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> input1 >> input2 >> input3;

    first = min({input1, input2, input3});
    third = max({input1, input2, input3});
    second = (input1 + input2 + input3) - first - third;
    
    cout << first << " " << second << " " << third;
}
