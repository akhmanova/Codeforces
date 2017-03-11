#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int n;
  cin >> n;
     
  int price[105], quality[105];
  for (int i = 0; i < n; i++) 
    cin >> price[i] >> quality[i];
	  	
  int step = n / 2;
  while (step > 0) {
    for (int i = 0; i < (n - step); i++) {
      int j = i;
      while (j >= 0 && price[j] > price[j + step]) {
        int temp = price[j];
        price[j] = price[j + step];
        quality[j] = quality[j + step];
        price[j + step] = temp;
        quality[j + step] = temp;
        j--;
      }
    }
    step = step / 2;
  }    
  bool litmus = true;
  for (int i = 0; i + 1 < n; i++) {
    if (quality[i] > quality[i + 1]) {
      litmus = false;
      cout << "Happy Alex" << endl;
      break;
    }
  }
  if (litmus == true)
  cout << "Poor Alex" << endl;
}
