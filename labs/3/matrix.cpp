#include<iostream>
#include <unistd.h>

using namespace std;


 void gotoxy(int x, int y) {
    cout << "\033[" << y << ";" << x << "H";
   }


int main(){
  char arr[24][80];

  cout << "\033[2J\033[H";

  for  ( int i = 0; i < 24; i++) {
    for (int j = 0; j < 80; j++) {
        arr[i][j] = '*';
    } 
  }
  

  int i = 11;
  int j = 40;
  int sideLength = 1;
  int charAmount = 1;

    gotoxy(j + 1, i + 1);
    cout << arr[i][j] << flush;
    usleep(5000);

    while(charAmount < 1920) {
        for (int l = 0; l < sideLength && charAmount < 1920; l++) {
            j--;

          if (i >= 0 && i < 24 && j >= 0 && j < 80) {
            gotoxy(j + 1, i + 1);
            cout << arr[i][j] << flush;
            usleep(5000);
            charAmount++;
          }
        }

        for (int u = 0; u < sideLength && charAmount < 1920; u++) {
            i--;

          if (i >= 0 && i < 24 && j >= 0 && j < 80) {
            gotoxy(j + 1, i + 1);
            cout << arr[i][j] << flush;
            usleep(5000);
            charAmount++;
          }
        }

        sideLength++;

        for (int r = 0; r < sideLength && charAmount < 1920; r++) {
            j++;

          if (i >= 0 && i < 24 && j >= 0 && j < 80) {
            gotoxy(j + 1, i + 1);
            cout << arr[i][j] << flush;
            usleep(5000);
            charAmount++;
          }
        }

        for (int d = 0; d < sideLength && charAmount < 1920; d++) {
            i++;

          if (i >= 0 && i < 24 && j >= 0 && j < 80) {
            gotoxy(j + 1, i + 1);
            cout << arr[i][j] << flush;
            usleep(5000);
            charAmount++;
          }
        }

        sideLength++;
    }

    return 0;
}
  