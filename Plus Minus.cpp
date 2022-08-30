//An array of integer will be given to us by user. Now we have to calculate the ratios of its elements that are 
//postive, negative and zero.

#include <iostream> //C++ library is an input output stream class.
#include <iomanip> //C++ library to maniplulate the output.

//Its a void function which mean it will not return any value.
void plusMinus(int arrSize){
    int input{}, positive{}, negative{}, zero{};
    float positiveAvg{}, negativeAvg{}, zeroAvg{};
    int array[arrSize];
    //This loop will take input and save it to array and within it lies our conditional statment where we will
    //check if the incoming input is positive negative or zero.
    for(int i=0; i<arrSize; i++){
        std::cin >> input;
        if(input < 0){
            negative +=1;
        }
        else if(input > 0){
            positive += 1;
        }
        else if(input == 0) {
            zero += 1;
        }
    }
    positiveAvg = static_cast<float>(positive)/static_cast<float>(arrSize); //Here type cast is required to get the output in decimal.
    negativeAvg = static_cast<float>(negative)/static_cast<float>(arrSize);
    zeroAvg = static_cast<float>(zero)/static_cast<float>(arrSize);
    std::cout << std::setprecision(6) << positiveAvg << "\n" << negativeAvg << "\n" << zeroAvg; //The setprecision function will set the number of digitis occuring after decimal.
}

int main () {
    int arrSize{};
    std::cin >> arrSize;
    plusMinus(arrSize);
}