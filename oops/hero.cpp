class hero {
public:
    int health;
private:
    char level;  

    
    void display() {
        // function to display hero details
        // cout << "Health: " << health  << endl;
        // cout << "level: " << level << endl;
    }
    int getHealth() {
        return health;
    }
    char getLevel() {
        return level;
    }
    void setHealth(int health) {
        health = health;
    }
    void setLevel(char level) {
        level = level;
    }

};