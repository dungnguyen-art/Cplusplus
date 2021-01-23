#include<iostream>
#include <set>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t-- > 0) {
	    int n; cin >> n;
	    set<int> s;
	    for (int i = 0; i < n; i++) {
	        int x; cin >> x;
	        s.insert(x);
	    }
	    
	    if (s.size() < 2) {
	        cout << "-1\n";
	    } else {
	        auto it = s.begin();
	        cout << *it << ' ';
	        ++it;
	        cout << *it << '\n';
	    }
	}
	return 0;
}