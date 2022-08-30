//To calculate the sum and print the sum of the elements in an array.

#include <iostream>

//This fucntion will return us the value of sum which will be a long int.
long int aVeryBigSum(int arrSize){   
    long int numbers[arrSize] = {};
    long int input{},sum {};
    for(int i=0; i<arrSize; i++){
        std::cin >> input;
        numbers[i] = input;
    }

    for(auto v : numbers){
        sum += v;
    }
    return sum;
}

int main(){
    int arrSize{};
    std::cin >> arrSize;
    std::cout << aVeryBigSum(arrSize) << std::endl; //called the function and passed size a argument 
    return 0;
}