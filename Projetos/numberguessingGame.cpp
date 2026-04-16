#include <iostream>

int main(){
    int randNum;
    int guess;
    int tries = 0;

    srand(time(NULL));
    randNum = (rand() % 10) + 1;

    std::cout << "Welcome to the number guessing game! " << std::endl;

    do{
        std::cout << "Enter a number (1-10) ";
        std::cin >> guess;
        tries++;
        
        if(guess > randNum){
            std::cout << "Too high! Try again. " << std::endl;
        }else if (guess < randNum){
            std::cout << "Too low! Try again. " << std::endl;            
        }else {
            std::cout << "Correct! You guessed the number in " << tries << " tries!" << std::endl;
        }

    }while (guess != randNum);
}