#include <bits/stdc++.h>
using namespace std;

int dice[7]; // 주사위를 던져서 나온 숫자의 누적횟수 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    for(int i = 0; i < 3; i++) {
        int number;
        cin >> number;
        ++dice[number]; // 나온 숫자에 +1
    }

    int prize;
    for(int i = 1; i < 7; i++) {
        if(dice[i] == 3) { // 같은 숫자 3개일 때
            prize = 10000 + i * 1000;
            break;
        }
        if(dice[i] == 2) { // 같은 숫자 2개일 때
            prize = 1000 + i * 100;
            break;
        }
        // 모두 다른 숫자일 때
        // 인덱스가 오름차순이므로 최종 상금은 (그 중 가장 큰 눈)×100원
        if(dice[i] == 1) prize = i * 100;
    }
    cout << prize;
}
