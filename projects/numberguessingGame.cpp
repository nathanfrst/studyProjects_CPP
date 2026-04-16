#include <iostream>

int main(){
    int randNum;
    int guess;
    int tries = 0;
    char playGame;
    char restartGame;

srand(time(NULL));

while(true){
    std::cout << "Welcome to the number guessing game! Would you like to play? (Y / N)" << std::endl;
    std::cin >> playGame;
    if(playGame == 'Y' || playGame == 'y'){
        std::cout << "Lets get started" << std::endl;
        randNum = (rand() % 10) + 1;
        break;
    }
        
    else if(playGame == 'N' || playGame =='n'){
        std::cout << "Maybe next time! ";
        return 0;
    }
    else{
        std::cout << "Please put a valid answer. (Y or N only)";
    }
}
    
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
