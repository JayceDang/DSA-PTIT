#include <bits/stdc++.h>
using namespace std;
#define _ 0

int idx = 0;

int BinaSearch(int a[], int n, int x) {
	int l = 0, r = n-1;
	
	while (l <= r) {
		int mid = (l+r)/2;
		if (a[mid] == x) {
			idx = mid;
			return true;
		}		
		else if (a[mid] > x)
			r = mid - 1;	
		else
			l = mid + 1;
	}
	return false;
}

int main(){	
	int T; cin >> T;
	while (T--) {
		int n;
        cin >> n;
        int a[n];
        int x;
        cin >> x;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        
        if (BinaSearch(a, n, x) == 1) 
            cout << idx+1;
        else 
            cout << "NO";
            
        cout << "\n";
	}

	return (0^_^0);
}