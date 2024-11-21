#include <iostream>

int main () {

    int gryffindor = 0;
    int hufflepuff = 0;
    int ravenclaw = 0;
    int slytherin = 0;

    int answer1;
    int answer2;
    int answer3;
    int answer4;

    std::cout << "The Sorting Hat Quiz!\n" << "\n" << "\n";

    std::cout << "Q1) When I'm dead, I want people to remember me as: \n";
    std::cout << "\n";
    std::cout << "1) The Good\n";
    std::cout << "2) The Great\n";
    std::cout << "3) The Wise\n";
    std::cout << "4) The Bold\n" << "\n";

    std::cin >> answer1;

    if (answer1 == 1) {
        hufflepuff++;
    } else if (answer1 == 2) {
        slytherin++;
    } else if (answer1 == 3) {
        ravenclaw++;
    } else if (answer1 == 4) {
        gryffindor++;
    } else {
        std::cout << "Invalid input.";
    }


}