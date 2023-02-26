#include <iostream>
#include <string>
#include "knights.h"

int main() 
{
    // 5 by 5 board with starting point at (0,0) == [0][0]
    int arr[5][5];
    bool b = false;
    fill(arr);
    sol(arr, 0, 0, b, 1);
    print(arr);
    return 0;
}
