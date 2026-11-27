#include<iostream>

using namespace std;



int main() {
  double arr[7][7] = {
    {16, 4, 90, 60, 34, 22, 5},
    {14, 3, 33, 8, 9, 10, 44},
    {12, 20, 47, 2, 22, 6, 7},
    {10, 33, 55, 66, 12, 47, 1},
    {8, 24, 5, 2, 4, 66, 30},
    {6, 21, 64, 32, 46, 4, 90},
    {4, 3, 2, 0, -16, -20, -40}
    };

  cout << "Binary search in first column: ";

  int low = 0;
  int high = 6;

  while (low <= high) {
    int mid = low + (high - low) / 2;

    if (arr[mid][0] >= 0 && arr[mid][0] <= 5) {
        cout << arr[mid][0] << endl;
        cout << " row: " << mid << " column: 0" << endl;
        break;
    }

    if (arr[mid][0] > 5) {
        low = mid + 1;
    }else if (arr[mid][0] < 0) {
        high = mid - 1;
    }
  }

    if (low > high) {
        cout << "Not found." << endl;
    }

  cout << "Binary search in last row: ";

  low = 0;
  high = 6;


  while (low <= high) {
    int mid = low + (high - low) / 2;

    if (arr[6][mid] >= 0 && arr[6][mid] <= 5) {
        cout << arr[6][mid] << endl;
        cout << " row: 6" << " column: " << mid;
        break;
    }

    if (arr[6][mid] > 5) {
        low = mid + 1;
    }else if (arr[6][mid] < 0) {
        high = mid - 1;
    }
  }

  if (low > high) {
    cout << "Not found." << endl;
  }

 return 0;
}
