#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int m, s;           //Length and sum of digits
    cin >> m >> s;

    vector<int> l;
    for (int i = 0; i < m; i++ ) {
        if (s >= 9) {
	    l.push_back(9); s -= 9;
        }
        else {
	    l.push_back(s); s = 0;
        }	    
    }

    vector<int> smallest;
   smallest  = reverse(l.begin(), l.end());
    if (smallest[0] == 0) {
        smallest[0] = 1;
	smallest.end()--;
    }

    for (vector<int>::iterator it = smallest.begin(); it!=smallest.end(); ++it)
        cout << *it;
    cout << " ";
    for (vector<int>::iterator it = l.begin(); it!=l.end(); ++it)
        cout << *it;
    cout << endl;
}
