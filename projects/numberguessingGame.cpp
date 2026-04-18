#include <iostream>

int main(){
    int randNum;
    int guess;
    int tries;
    char playGame;
    char restartGame;

srand(time(NULL));
while(true){
    std::cout << "Welcome to the number guessing game! Would you like to play? (Y / N)" << std::endl;   //Ask the user if he wants to start the program.
    std::cin >> playGame;
    if(playGame == 'Y' || playGame == 'y'){
        std::cout << "Lets get started" << std::endl;
        break; //If the answer is yes (Y) display a message then break the while loop.
    }
        
    else if(playGame == 'N' || playGame =='n'){
        std::cout << "Maybe next time! ";
        return 0; //Break the while loop and stop the program.
    }
    else{
        std::cout << "Please put a valid answer (Y or N only)." << std::endl;
    }
}
 do{      //Main game loop
    tries = 0;
    randNum = rand() % 100 + 1;
    do{
        std::cout << "Enter a number (1-100) ";
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

    std::cout << "Would you like to play again? (Y / N) " << std::endl;  //Ask if the user wants to restart the game
    std::cin >> restartGame;

 }while (restartGame == 'Y' || restartGame == 'y');  

std::cout << "Thanks for playing! " << std::endl;
return 0;
}
