#include <iostream>

using namespace std;

int main(){

  bool isRunning = true;

  while (isRunning){

    int x;
    int y;

    cout << "Enter x value: ";
    cin >> x;

    if (x == 101){
      break;
    }

    if (x > -41){
      if (x <= -21){
        cout << "Error!" << endl;
      }else{
        if (x > 3 && x <= 12){
          cout << "Error!" << endl;
        }else{
          y = -14 * x - 20;
          cout << "y = " << y << endl;
        }
      }
    }
    else{
      y = 13 * x * 2 / 11 - 6;
      cout << "y = " << y << endl;
    }
  }
  return 0;
}
