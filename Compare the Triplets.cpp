//To compare the Triplets using a function .

#include <iostream> 

//This function defination will compare the values of array and store them in a new array.
void compareTriplet(int arrSize){
    int input{};
    int a[arrSize], b[arrSize];
    int result[2] = {};
    
    for(int i = 0 ; i < arrSize; i++){
        std::cin >> input;
        a[i] = input;  //Storing the incoming inputs in the required array.
    }
    for(int i = 0 ; i < arrSize; i++){
        std::cin >> input;
        b[i] = input; 
    }
    //This for loop will compare each index value and give use the required solution.

    for(int i = 0; i < 3; i++){
        if(a[i] > b[i]){
            result[0] += 1;
        }
        else if(a[i] < b[i]){
            a[i] > b[i];
             result[1] += 1;
        }
        else
            continue;
    }
    for(auto v : result){
       std::cout << v << " ";
    }
    
    
};

//We use main funnctions to call all the required function which need to execut for our program .
int main(){
    int arrSize = {3};
    compareTriplet(arrSize); //We called the above defined function and main will execute it .
    return 0;
}

