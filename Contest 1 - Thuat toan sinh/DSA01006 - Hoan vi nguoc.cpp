#include<bits/stdc++.h>
using namespace std;
#define _ 0

int n, a[12], b[12];

void in(){
    for(int i = 1; i <= n; i++)
        cout << a[i];
    cout << " ";
}

void Try(int i){
    int j;
    for(j = n; j >= 1; j--){
        if(b[j] == 0){
            a[i] = j;
            b[j] = 1;
            if(i == n) in();
            else Try(i+1);
            b[j] = 0;
        }
    }
}

int main(){
    int t;
	cin >> t;
    while(t--){
        cin >> n;
        Try(1);
        cout << endl;
    }
    
    return (0^_^0);
}