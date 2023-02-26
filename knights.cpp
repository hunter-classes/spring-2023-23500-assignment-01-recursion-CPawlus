#include <iostream>
#include <string>
#include "knights.h"

void fill(int (&arr)[5][5]) 
{
     for(int i = 0; i < 5; i++)  
     {
          for(int j = 0; j < 5; j++) 
          {
               arr[i][j] = 0;
          }
     }
}

void print(int (&arr)[5][5]) 
{
     for(int i = 0; i < 5; i++)  
     {
          for(int j = 0; j < 5; j++) 
          {
               std::cout << arr[i][j] << ": ";
          }
          std::cout << "\n";
     }
}

bool full(int (&arr)[5][5]) 
{
     int a = 0;
     for(int i = 0; i < 5; i++)  
     {
          for(int j = 0; j < 5; j++) 
          {
               if(arr[i][j] > 0) 
               {
                    a++;
               }
          }
     }
     if(a == 25) 
     {
          return true;
     }
     return false;
}

void sol(int (&arr)[5][5], int r, int c, bool &b, int ct) 
{
     // Base
     if(full(arr)) 
     {
          b = true;
          return;
     }
     if(r < 0 || c < 0 || r >= 5 || c >= 5 || arr[r][c] > 0) 
     {
          return;
     }
     if(arr[r][c] < 1) 
     {
          arr[r][c] = ct;
     }
     
     // Recursive calls 
     sol(arr, r+2, c+1, b, ct+1); // 1
     sol(arr, r+1, c+2, b, ct+1); // 2
     sol(arr, r-1, c+2, b, ct+1); // 3
     sol(arr, r-2, c+1, b, ct+1); // 4
     sol(arr, r-2, c-1, b, ct+1); // 5
     sol(arr, r-1, c-2, b, ct+1); // 6
     sol(arr, r+1, c-2, b, ct+1); // 7
     sol(arr, r+2, c-1, b, ct+1); // 8

     // Reset
     if(!b) 
     {
          arr[r][c] = 0;
          return;
     }
}
