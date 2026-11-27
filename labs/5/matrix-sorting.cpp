#include <iostream>

using namespace std;

int main() {

  const int ROWS = 7;
  const int COLUMNS = 7;

   
int arr[ROWS][COLUMNS] = {
    {9, 8, 9, 8, 9, 7, 7},
    {8, 7, 7, 6, 4, 6, 5},
    {6, 4, 6, 6, 4, 6, 4},
    {5, 3, 5, 2, 3, 4, 4},
    {4, 3, 5, 2, 2, 2, 1},
    {2, 2, 3, 2, 2, 2, 0},
    {1, 1, 2, 0, 1, 1, 0}
};


  for ( int j = 0; j < COLUMNS; j++) {
    for ( int i = 1; i < ROWS; i++) {
      int temporary = arr[i][j];
      int row = 0;
      
      while(row < i && arr[row][j] <= temporary) {
        row++;
      }
      
      for (int shift = i; shift > row; shift--) {
        arr[shift][j] = arr[shift - 1][j];
      }
      
      arr[row][j] = temporary;   
    }
  }

  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLUMNS; j++) {
        cout << arr[i][j] << " ";
    }
    cout << "\n";
  }
  

 return 0; 
}