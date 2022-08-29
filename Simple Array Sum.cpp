// Find the sum of all the elements in an array of integers.

#include <iostream>

int simpleArraySum(size_t arrSize){
    int array[arrSize] = {}; //Here a array of size arrSize where the default value of every element in the array is 0
    //because the array is iniitalized using list initialization.
    int sum{}, input{};
    for(int i = 0; i < arrSize; i++){
        std::cin >>input;
        //We are going to store the incoming input from the input stream to the input variable. 
        array[i] = input;
        //This expression will save the value in the array.  
    }
    //Here for each loop is used because we can easily iterate over the values of array.
    for(auto total : array){
        sum += total; //Here the total variable will be used to store the array elements 
        //and we can use it for further processing.
    }
    return sum;
}

int main(){
    int arrSize{}; //nuber of the array elemnet they want to get the sum calculated of
    std::cin >> arrSize;
    std::cout << simpleArraySum(arrSize) << std::endl; //here we called the function and passed array size as the argument which will give us the required output
    return 0;
}