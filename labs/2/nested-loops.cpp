#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[]){
  int n;
  int count = 0;
  double result = 0;

  cout << "Enter n value: "; cin >> n;

  for (int i = 1; i <= n; i++) {
   double numerator = 1.0;
    for (int j = 1; j <= i; j++) {
     numerator *= ((j + 1 ) * sin(j));
     count += 7;
    }
    result += numerator / (i * (i + 1));
    count += 9;
  }

  count++;
  
  cout << "Result: " << fixed << setprecision(7) << result << endl;
  cout << "Number of operations: " << count << endl;

  return 0;
}
