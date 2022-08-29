//To add two integers using a function 

#include <iostream> //iostream is input output stream class  which is one of the
//stream whcih handels the input output operations which can be used for both user input 
//and displaying information to the user by the help of terminal or console.

//global function which is having two integer parameter.
int solveMeFirst(int a, int b){
    int sum = a+b;
    return sum;
};

//This is main function which serves as the starting point of execution of the program.
int main(){
    int num1, num2, sum;
    std::cin >> num1 >> num2; //here we used the cin from the iostream and the std here is standerd library of c++ and the namespace of this library is std
    sum = solveMeFirst(num1, num2); //here we call the function which is already and after executing 
    std::cout << sum << std::endl;
    //the namespace helps in structuring the header file into logical groups such that all the required functions are inside the socpe of the namspace and it
    //and to prevent name collisions that can occur especially when your code base includes multiple libraries.
    return 0;
}

