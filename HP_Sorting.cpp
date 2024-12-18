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

    int max = 0;

    //Title 
    std::cout << "The Sorting Hat Quiz!\n" << "\n" << "\n";

    //Question 1
    std::cout << "Q1) When I'm dead, I want people to remember me as: \n" << "\n";
    std::cout << "1) The Good\n";
    std::cout << "2) The Great\n";
    std::cout << "3) The Wise\n";
    std::cout << "4) The Bold\n" << "\n";
    //user input
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
        std::cout << "Invalid input.\n";
    }

    //Question 2
    std::cout << "Q2) Dawn or Dusk?\n" << "\n";
    std::cout << "1) Dawn\n";
    std::cout << "2) Dusk\n" << "\n";
    //User input
    std::cin >> answer2;

    if (answer2 == 1) {
        gryffindor++;
        ravenclaw++;
    } else if (answer2 == 2) {
        hufflepuff++;
        slytherin++;
    } else {
        std::cout << "Invald input.\n";
    }

    //Question 3
    std::cout << "Which kind of instrument most pleases your ear?\n" << "\n";
    std::cout << "1) The violon\n";
    std::cout << "2) The trumpet\n";
    std::cout << "3) The piano\n";
    std::cout << "4) The drum\n" << "\n";

    //user input
    std::cin >> answer3;

    if (answer3 == 1) {
        slytherin++;
    } else if (answer3 == 2) {
        hufflepuff++;
    } else if (answer3 == 3) {
        ravenclaw++;
    } else if (answer3 == 4) {
        gryffindor++;
    } else {
        std::cout << "Invalid input.\n";
    }

    //Question 4
    std::cout << "Which road tempts you most?\n" << "\n";

    std::cout << "1) The wide, sunny grassy lane\n";
    std::cout << "2) The narrow, dark, lantern-lit alley\n";
    std::cout << "3) The twisting, leaf-strewn path through woods\n";
    std::cout << "4) The cobbled street lined (ancient buildings)\n";

    //user input
    std::cin >> answer4;

    if (answer4 == 1) {
        hufflepuff++;
    } else if (answer4 == 2) {
        slytherin++;
    } else if (answer4 == 3) {
        gryffindor++;
    } else if (answer4 == 4) {
        ravenclaw++;
    } else {
        std::cout << "Invalid input.\n";
    }

    //Caldulate answer
    std::string house;

    if (gryffindor > max) {
        max = gryffindor;
        house = "Gryffindor\n";
    } 
    if (hufflepuff > max) {
        max = hufflepuff;
        house = "Hufflepuff\n";
    }
    if (ravenclaw > max) {
        max = ravenclaw;
        house = "Ravenclaw\n";
    }
    if (slytherin > max) {
        max = slytherin;
        house = "Slytherin\n";
    }

    std::cout << house << "!\n";

}