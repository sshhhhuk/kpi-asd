#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[]){
  int n;
  int count = 0;
  double result = 0;
  double numerator = 1.0;

  cout << "Enter n value: "; cin >> n;

  for (int i = 1; i <= n; i++) {
    numerator *= ((i + 1 ) * sin(i));

    result += numerator / (i * (i + 1));
  }
  
  count = 12 * n + 1;

  cout << "Result: " << fixed << setprecision(7) << result << endl;
  cout << "Number of operations: " << count << endl;
  
  return 0;
}
