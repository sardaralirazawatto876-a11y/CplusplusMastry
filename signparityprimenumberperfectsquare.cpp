/**
* @file advanced_number_analyzer.cpp
* @brief Professioly C++Program analyzing Sign, Parity,and Square properties
* @author Professional Devolper
*/

#include<iostream>
#include<limits>
#include<cmath>

//Function Declaration
void checkNumber(int num);
bool getValidatedInput(int &num);
bool isPrime(int num);
bool isPerfectSquare(int num);

int main(){
	//Display a clean,Proffesional banner
	std::cout<<"=====================================\n";
	std::cout<<"Advanced Professional number analyzer\n";
	std::cout<<"======================================\n";
	
	char continueChoice;
	do {
		int number;
		
		//Get valid integer input from the user
		if(getValidatedInput(number)){
			checkNumber(number);
		}
		///promp user to exit or continue
		std::cout<<"Would you like to analyze another number(y/n)\n";
		std::cin>>continueChoice;
		std::cout<<".............................................\n";
	}while(continueChoice == 'y' || continueChoice == 'Y');
	
	std::cout<<"Thank you for using Advanced Number Analyzer\n";
	return 0;
}
/**
* @breif Perform Comprehensive mathematical analysis on a given integer.
* @param num the integer to analyze.
*/
void checkNumber(int num){
	std::cout<<"\n-----Comprehensive analysis for["<< num <<"]-----\n";
	
	//1. Check sign(positive, Negative,Zero)
	if(num>0){
		std::cout<<".Sign      :positive\n";
	}
	else if(num<0){
		std::cout<<".Sign      :Negative\n";
	}
	else{
		std::cout<<".Sign      :Zero\n";
	}
	//2. Check Parity(even or odd)
	if(num %= 0){
		std::cout<<".Parity         :Even\n";
	}
	else{
		std::cout<<".Parity          :Odd\n";
	}
	//3.Check Prime status
	if(isPrime(num)){
		std::cout<<".Prime Status    :Prime number\n";
	}
	else{
		std::cout<<".Prime Status    :Not Prime\n";
	}
	//4.Check Perfect Square Root 
	if(isPerfectSquare(num)){
		std::cout<<".Square Status   :Perfect Square\n";
	}
	else{
		std::cout<<".Square Status    :Not Perfect Square\n";
	}
}
/**
* @breif Determines If an Integer is prime number.
* @param num the integer to check,
* @return true if prime, false otherwise.
*/
bool isPrime(int num){
	if(num <= 1)return false;
	if(num<= 3)return true;
	if(num%2==0 || num%3 ==0) return false;
	
	for(int i =5; i*i <= num; i += 6){
		if (num%i == 0|| num%(i + 2)==0){
			return false;
		}
	}
	return true;
}
/**
* @breif Determines if an integer is a perfect square
* @param num the integer to check.
* @return true if it's a non Negative perfect square, false otherwise
*/
bool isPerfectSquare(int num){
	if(num<0)return false;
	for(long long i = 0;i*i<=num;++i){
		if(i*i == num){
			return true;
		}
	}
	return false;
	
}
/**
*@breif handles input validation to ensure the usser provide a valid integer.
*@param num Refrence to store the validated input.
*@return true if input is valid,false otherwise.
*/
bool getValidatedInput(int &num){
	std::cout<<"\nEnter an integer:";
	if(!(std::cin>>num)){
		std::cout<<"error "
		//clear the error of flag on cin
		std::cin.clear();
		
		//Discard the invalid input from the input buffer
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
		return false;
	}
	return true;
}
