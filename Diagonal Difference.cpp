// Q.) For a given sqaure matrix we have to calculate the absolute difference between the sum of its diagonals.

//Approach
// First we have to calculate the sum of the diagonals of the square matrix and then the absolute difference of its diagonal.
//In a square mattix number of rows and column are same so we can use nested for loop to make a square matrix

#include <iostream>
#include <cmath> //Its a library from c which provides use mathematical methods. (For example abs in this code)

int diagonalDiffernece(int arrSize){
    int input{}, mainDiagonal{}, secondaryDiagonal{}, diffDiagonal{};
    int array[arrSize][arrSize] = {};
    //This loop will take user input. The outer loop controls the row index and the inner loop
    //controls the column index. For the 1st row index we will get 3 element in each column index respectively and this will 
    //give us the required square matrix where number of columns and rows are same.

    for(int row_index=0; row_index<arrSize; row_index++){
        for(int column_index = 0; column_index < arrSize; column_index++){
            std::cin >> input;
            array[row_index][column_index] = input;
        }
    }
    //This loop will give us the sum of main diagonal as on the main diagonal the index of both column and rows are same
    for(int row_index=0; row_index < arrSize; row_index++){
        for(int column_index=0; column_index < arrSize; column_index++){
            if(row_index == column_index){
                mainDiagonal += array[row_index][column_index];
            }
        }

    //This loop will give us the sum of the secondary diagonal. On the secondary diagonal the sum of the row and column 
    //index would never exceed the size of the array.
    }for(int row_index=0; row_index < arrSize; row_index++){
        for(int column_index=0; column_index < arrSize; column_index++){
            if(row_index+column_index == arrSize-1){
                secondaryDiagonal += array[row_index][column_index];
            }
        }
    }
    diffDiagonal = mainDiagonal - secondaryDiagonal;
    return std::abs(diffDiagonal); //Here abs will give us the absolute valuue stored in the diffDiagonal variable.
}


int main(){
    int arrSize{};
    std::cin >> arrSize;
    std::cout << diagonalDiffernece(arrSize); //Called the diagonaDifference function which is already defined . 
}