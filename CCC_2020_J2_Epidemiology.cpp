// Problem: CCC '20 J2 - Epidemiology
// Date: 2026-11-08
// Approach: Used a while loop to simulate the daily spread of infection.
    
using namespace std;

int main() {
    long long n, r, p;
    long long total, day = 0;
    cin >> p >> n >> r;
    total = n;
    while(total<=p)
    {
        day++;
        total+=n*r;
        n =n*r;
    }
    cout << day << endl;
    return 0;
}
