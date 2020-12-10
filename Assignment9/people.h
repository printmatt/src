#include <string>
#include <sstream>
#ifndef PEOPLE_H
#define PEOPLE_H
// parent class people
class People{
    // constructor, getters, and tostring to convert a number into a string
    public:
        People(std::string name, int id);
         std::string getName() const;
         int getID() const;
         std::string to_string(int num) const;
    private:
        std::string name;
        int id; 
};

// professor class extends people
class Professor : public People{
    // constructor, getters, and str() 
    public:
        Professor(std::string rank, std::string name, int id, int publications);
        int getPublications() const;
        std::string getRank() const;
        std::string str() const;
    
    private:
        int publications;
        std::string rank;
};

// student class extends people
class Student : public People{
    // constructor, getters, and str()     
    public:
        Student(std::string major, std::string name, int id, std::string minor);
        std::string getMajor() const;
        std::string getMinor() const;
        std::string str() const;
    private:
        std::string major;
        std::string minor;
};


#endif