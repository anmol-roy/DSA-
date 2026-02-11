# include <bits/stdc++.h>
// #include "hero.cpp"
using namespace std;

class hero {
public:
    int health;
    char level;  

    
    void display() {
        // // function to display hero details
        // cout << "Health: " << health  << endl;
        // cout << "level: " << level << endl;
    }
    int getHealth() {
        return health;
    }
    char getLevel() {
        return level;
    }
    void setHealth(int h, char name) {
        if (name == 'A') {
            health = h;
        } 
    }
    void setLevel(char l) {
        level = l;
    }

};





int main (){
    //  creating object statically
    hero h1;
    h1.health = 80;
    h1.level = 'A';


    cout << "health is:" << h1.health << endl;
    cout<< " levell is " << h1.getLevel() << endl;
    h1.setHealth(70, 'A');
    h1.setLevel('B');
    cout << "health is:" << h1.health << endl;
    cout<< " levell is " << h1.getLevel() << endl;
    
    


    // creating object dynamically

    hero *h2 = new hero;  // dynamically allocated object
    cout << "size of h2: " << sizeof(h1) << endl;
    cout << "level is " << (*h2).level << endl;
    cout << "health is " << (*h2).health << endl;

    h2->setHealth(90, 'A');
    h2->setLevel('C');
    cout << "level is " << h2->level << endl;
    cout << "health is " << h2->health << endl;




    return 0;
}

