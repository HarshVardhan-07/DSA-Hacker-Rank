#include <iostream> 

//This fucntion is a void function and it will execute and generate required staricase patter.
void staircase(int size){
   for(int i = 0; i<size; i++){ //THis loop will control number rows.
    for(int j=size; j>0; j--){ //This loop will control what will be printed in each row.
        //This condtional statment will generate space and *.
        if(j-1>i){ 
            std::cout << " " ; //This conditon wuill create the required spaces as specified in the pattern.
            //We have the above loop which will be decrease the value in variable j and then it will be compared with the value of vaiable i.
        
        }
        else{
            std::cout << "#"; //If the above condtion is not true then stars will be printed.
        }
        //Here the number of star in each comlum is equal to the the row number (i.e 1st row is having 1 * similarly the 2nd row is having 2 * and hence this pattern) and
        //the number of spaces is size-1 in each row (i.e. if the size = 6 then the number of spaces in 1st column will be 5 ) and this will print out the required pattern.
    }
        std::cout << std::endl;
   }

}

int main(){
    int size {};
    std::cin >> size; //Taking the size as user input.
    staircase(size);
    return 0;    
}