#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  cin >> n;
     
  int hungred = 0, fifty = 0, tw_five = 0, cashbox = 0;
  for (int i = 0; i < n; i++) {
    int temp;
    cin >> temp;
    if (temp == 100) {
      if (fifty > 0 && tw_five > 0) {
  	fifty--;
  	tw_five--;
  	hungred++;
      }
      else if (tw_five > 2) {
  	tw_five -= 3;
  	hungred++;
      }
        else {
          cout << "NO" << endl;
          cashbox = -1;
          break;
        }
    }
    else if (temp == 50) {
      if (tw_five > 0) {
        tw_five--;
        fifty++;
      }
      else {
	cout << "NO" << endl;
	cashbox = -1;
	break;
      }
    }
      else tw_five++;	
  }
  if (cashbox >= 0)
    cout << "YES" << endl;
}

