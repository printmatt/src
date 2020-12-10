#include <iostream>
#include "people.h"
void createProfessor(int i);
void createStudent(int i);

int main() {
    // get number of records that will be created
    int num_of_people;
    std::cin >> num_of_people;

    // iterate through loop to create as many based on either 'p' or 's'
    for (int i = 0; i<num_of_people; i++){
        char who;
        std::cin >> who;
        // helper method to create a professor record
        if(who == 'p'){
            createProfessor(i);
        }
        // helper method to create a student record
        else if (who == 's'){
            createStudent(i);
        }
        // invalid input
        else {
            std::cout << "Your input was incorrect, please try again!";
            i--;
            continue;
        }
    }  
    return 0;
}

// use cin to get all inputs at once
void createProfessor(int i){
    std::string rank,name;
    int publications;
    std::cin >> name;
    std::cin >> publications;
    std::cin >> rank;
    // create record and print the result
    Professor prof(rank,name,i+1,publications);
    std::cout << prof.str();
}

// use cin to get all inputs at once
void createStudent(int i){
    std::string name,major,minor;
    std::cin >> name;
    std::cin >> major;
    std::cin >> minor;
    // create record and print the result
    Student stud(major,name,i+1,minor);
    std::cout << stud.str();
}


