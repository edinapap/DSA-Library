/* 
Author : Sanjay Marreddi

Even Fibonacci Numbers

Problem Statement :- 

Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be:
1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
By considering the terms in the Fibonacci sequence whose values do not exceed four million(4,000,000), find the sum of the even-valued terms.*/

#include <stdio.h>

int main(){

    int temporary, Sum = 0 ;
    int current_no = 0 ;
    int next_no = 1; 
 
// Considering the terms in the Fibonacci sequence whose values do not exceed four million.
while (next_no < 4e6){
    temporary = current_no ;
    current_no = next_no ;
    next_no = current_no + temporary ;
    
    // Assigning only if the Number is Even.
    if(current_no%2 == 0){
        Sum += current_no;}
}

printf("\n The Sum of Even Valued Terms of Fibonacci sequence is %d",Sum);

}