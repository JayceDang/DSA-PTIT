#include <bits/stdc++.h>
#define _ 0
using namespace std;

void Tower(int n, char a, char b, char c) {
    if (n == 1) {
        cout << a << " -> " << c << endl;
        return;
    }
    Tower(n - 1, a, c, b); //Chuyen n-1 dia A->B
    Tower(1, a, b, c); //Chuyen 1 dia A -> C
    Tower(n - 1, b, a, c); //Chuyen n-1 dia tu B->C
}

int main() {
    char a = 'A', b = 'B', c = 'C';
    int n;
    cin >> n;
    Tower(n, a, b, c);
    
    return (0^_^0);
}
