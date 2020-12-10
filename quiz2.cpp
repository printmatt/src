#include <iostream>

class Cell{
    public: 
    Cell(int state, int x, int y);
    Cell();
    void setAlive();
    void setDead();
    int getX() const;
    int getY() const;
    
    private:
    int state;
    int x,y;
    static const int ALIVE = 1;
    static const int DEAD = 2;
};

Cell::Cell(){
    state = 2;
    x=1;y=1;
}

void Cell:: setAlive() {
    state = ALIVE;
} 

int main() {
    Cell c;
    c.setAlive();
    std::cout << c.getX();
}