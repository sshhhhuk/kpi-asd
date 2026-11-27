#include <iostream>

using namespace std;

int main() {

    bool isRunning = true;

  while (isRunning){
    
    int x;
    int y;

    cout << "Enter x value: "; cin >> x;

    if (x==101){
      break;
    }

    if (x>-21){
      if (x > 3) {
        if (x <= 12) {
        cout << "Error!" << endl;
        } else {
        y = -14*x-20;
        cout << "y = " << y << endl;
        }
      }else{
        y = -14*x-20;
        cout << "y = " << y << endl;
      }
    }else{
      if (x<=-41) {
        y = 13*x*2/11-6;
        cout << "y = " << y << endl;
      }else{
        cout << "Error!" << endl;
      }
    }
   
 } 
  return 0;
}
