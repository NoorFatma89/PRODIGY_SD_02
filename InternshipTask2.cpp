//Program to create a Guessing Game

#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Seed the random number generator with current time
    std::srand(std::time(nullptr));

    // Generate a random number between 1 and 100
    int randomNumber = std::rand() % 100 + 1;   

    int guess=0,attempts=0;
    std::cout<<"\nWelcome to the Guessing Game!\n";
    std::cout<<"\nGuess the Number between 1-100\n";
    do {
        //Ask user to guess the number
        std::cout<<"Enter your guess : ";
        std::cin>>guess;

        //counting the no. of attemps
        attempts++;

        if(guess==randomNumber){
            std::cout<<"\nWell done! your guess is correct\n";

            //Displaying Automatically generated Random Number
            std::cout << "Random Number is: " << randomNumber<<"\n";
            std::cout<<"You took "<<attempts<<" attempt to correctly guess the number.\n";
        }
        else if(randomNumber-guess>=50)
            std::cout<<"Guessed Number is too low! Try again. \n";

        else if(randomNumber-guess<50 && randomNumber-guess>=0)
            std::cout<<"Guessed Number is low! Try again. \n";

        else if(randomNumber-guess<=-50)   
            std::cout<< "Guessed Number is too high! Try again. \n";

        else if(randomNumber-guess>-50 && randomNumber-guess<0)
            std::cout<<"Guessed Number is high! Try again. \n";
    }
    while(randomNumber!=guess);   

    
    return 0;
}
