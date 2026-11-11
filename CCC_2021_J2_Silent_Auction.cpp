// Problem: CCC '21 J2 - Silent Auction
// Date: 2026-11-08
// Difficulty: Junior 2
// Approach: Used a struct to store the name and bid. 
// Maintained the highest bid while looping. 
// Tie-breaker rule: used strictly ">" instead of ">=" so the first bidder wins.

#include <bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h>
using namespace std;

struct a
{
    string name;
    int num;
};

int main() {
    int N;
    cin >> N;
    a now;
    a maxn;
    maxn.name = "no";
    maxn.num = 0;
    for(int i = 1; i <= N; i++)
    {
        cin >> now.name >> now.num;
        if(now.num > maxn.num)
        {
            maxn.name = now.name;
            maxn.num = now.num;
        }
    }
    cout << maxn.name << endl;

    return 0;
}
