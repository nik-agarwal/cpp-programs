// Shift an element in spiral matrix 
// for ex- 1  2  3  4 
//         5  6  7  8
//         9  10 11 12
//         13 14 15 16

// becomes:-  5  1  2  3
//            9  10 6  4
//            13 11 7  8 
//            14 15 16 12

// Ans is :-


#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    int row=4, column=4;
    int arr1[row][column];
    for(int i=0; i<row;++i){
        for(int j=0;j<column;++j){
           cin>>arr1[i][j];}
    }
    int count =0;
    int total = row*column;
    int arr2[row][column];
    int startrow=0;
    int startcol=0;
    int endcol=column-1;
    int endrow= row-1;
    int i=0;
    while(count<total)
    {
    
    
    for(i = startcol;i<endcol;++i){
        arr2[startrow][i+1] = arr1[startrow][i];
         count++;
        
    }
    for(i = startrow;i<endrow;++i){
        arr2[i+1][endcol] = arr1[i][endcol];
        count++;
    }
    for(i = endcol;i>startcol;--i){
        arr2[endrow][i-1] = arr1[endrow][i];
        count++;
    }
    for(i = endrow;i>startrow;--i){
        arr2[i-1][startcol] = arr1[i][startcol];
        count++;
    }
    
    startrow++;
    endrow--;
    startcol++;
    endcol--;
    //cout<<count<<" count";
    }
    
    for(int i=0; i<row;++i){
        for(int j=0;j<column;++j){
          cout<<arr2[i][j]<<" ";}
          cout<<endl;
    }
    
    return 0;
}
