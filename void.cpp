#include <iostream>


void password () {
    std::string pass = "OmarAdly2006";
    std::string guess;
    int i = 0;
    int guessLimit = 5;
    bool noleft = false;

    while (pass != guess && !noleft) {
        if(i < guessLimit) {
            std::cout << "Enter Password: ";
            std::cin >> guess;
            i++;

        } else { noleft = true;}



        if (noleft && pass != guess) {
            std::cout << "You ran out of guesses." << std::endl;
        } else if (!noleft && pass !=guess)  {
            std::cout << "Password Incorrect!" << std::endl;
        } else  {
            std::cout << "Password Correct!"<< std::endl;
        }


    }
}

int main () {

 password ();


    return 0;
}
