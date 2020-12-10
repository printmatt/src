#include <string>
#include "people.h"
#include <sstream>
// Class people

// Constructor
People::People(std::string name, int id){
    this-> name  = name;
    this-> id = id;
}
// get person's name
std::string People::getName() const{
    return name;
}
// get person's ID
int People::getID() const{
    return id;
}
// convert person's id into a string for output printing
std::string People::to_string(int num) const {
    std::stringstream ss;
    ss << num;
    std::string str;
    ss >> str;
    return str;
}

// Class professor constructor
Professor::Professor(std::string rank, std::string name, int id, int publications) : People(name,id){
    this-> rank = rank;
    this->publications = publications;
}
// getters
int Professor::getPublications() const{
    return publications;
}
std::string Professor::getRank() const{
    return rank;
}
// string method
std::string Professor::str() const{
    return getRank() + " professor " + getName() + " (id " +to_string(getID()) +") has " + to_string(getPublications()) + " publications\n";
}

// Class students
Student::Student(std::string major, std::string name, int id, std::string minor) : People(name,id){
    this->major = major;
    this->minor = minor;
}
// getters
std::string Student::getMajor() const{
    return major;
}
std::string Student::getMinor() const{
    return minor;
}
// string method for printing. Depends if minor is entered.
std::string Student::str() const{
    if (getMinor() != "none")
    return getMajor() + " major " + getName() + " (id " + to_string(getID()) + ") minors in "+ getMinor() + "\n";
    else
    {
        return getMajor() + " major " + getName() + " (id " + to_string(getID()) + ")\n";
    }
    
}

